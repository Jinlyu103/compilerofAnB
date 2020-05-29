open Core.Std;;
open MyBase1;;
(* part 2 functions definition *)
let compileAct1 (seq,r1,r2,n,m) roleName =
  if roleName = r1 then Some (Plus, seq, m)
  else if roleName = r2 then Some (Minus,seq, m) 
  else None
;;

let compileAct2 (seq,r1,r2,m) roleName =
  if roleName = r1 then Some (Plus,seq,m)
  else if roleName = r2 then Some (Minus,seq,m)
  else None
;;

(* get roles from knowledge list *)
let rec getRolesFromKnws knws rl =
  match knws with
  | `Null -> rl
  | `Knowledge (r,m) -> if listwithout rl r then r :: rl else rl
  | `Knowledge_list ks -> getroles ks rl
and getroles ks rl =
  List.concat (List.map ~f:(fun k -> getRolesFromKnws k rl ) ks)
;;

let rec getEnvRoles env rl = 
  match env with
  |`Null -> rl
  |`Env_agent (r, num, m) -> getRolesInstance m rl (*if listwithout rl r then r :: rl else rl*)
  |`Envlist envs -> getRole envs rl

and getRole envs rl =
  List.concat (List.map ~f:(fun e -> getEnvRoles e rl ) envs)

and getRolesInstance m rl =
  match m with
  | `Str r -> if listwithout rl r then r :: rl else rl
  | `Concat msgs -> getRolesInstances msgs rl
  | _ -> rl

and getRolesInstances msgs rl =
  List.concat (List.map ~f:(fun m -> getRolesInstance m rl) msgs)
;;

let getRolesFromEnv env rl =
  let rlist = getEnvRoles env rl in
  del_duplicate rlist
;;

let rec getEnvNonces env nl = 
  match env with
  |`Null -> nl
  |`Env_agent (r, num, m) -> getNonceInstance m nl 
  |`Envlist envs -> getNonce envs nl

and getNonce envs nl =
  List.concat (List.map ~f:(fun e -> getEnvNonces e nl) envs)

and getNonceInstance m nl =
  match m with
  | `Var n -> if listwithout nl n then n :: nl else nl
  | `Concat msgs -> getNonceInstances msgs nl
  | _ -> nl

and getNonceInstances msgs nl =
  List.concat (List.map ~f:(fun m -> getNonceInstance m nl) msgs)
;;

let getNonceFromEnv env nl =
  let nlist = getEnvNonces env nl in
  del_duplicate nlist
;;

(* get role's msg from knowledges : [msgofA;msgofB] *)
let rec getMsgOfRoles knws =
  match knws with
  | `Null -> []
  | `Knowledge (r,m) -> [m]
  | `Knowledge_list knws -> List.concat (List.map ~f:(fun k -> getMsgOfRoles k) knws)
;;
(* Get strand list from actlist*)
let rec remove ls e =
  match ls with
  | [] -> []
  | hd::tl -> if hd = e then remove tl e else hd::(remove tl e)
;;

let rec output_msg msg =
  match msg with
  |`Null -> sprintf "null"
  |`Var n -> sprintf "%s" n
  |`Str r -> sprintf "%s" r
  |`Concat msgs -> sprint_msglist msgs
  |`Hash m -> sprintf "hash(%s) " (output_msg m)
  |`Aenc (m1,k1) -> sprintf "aenc{< %s >}%s" (output_msg m1) (output_msg k1)
  |`Senc (m1,k1) -> sprintf "senc{< %s >}%s" (output_msg m1) (output_msg k1)
  |`Pk rolename -> sprintf "pk(%s)" rolename
  |`Sk rolename -> sprintf "sk(%s)" rolename
  |`K (r1,r2) -> sprintf "k(%s,%s)" r1 r2

and sprint_msglist msgs =
  String.concat (List.mapi ~f:(fun i m ->
                let str = if i < ((List.length msgs)-1) then 
                            sprintf "."
                          else sprintf "" 
                in 
                (output_msg m)^str) msgs)
;;


(* To determine whether two msgs are equivalent? *)
let rec isSamePat m1 m2 =
  match (m1,m2) with
  | (`Aenc(m1',k1'),`Aenc(m2',k2')) -> if (isSamePat k1' k2') && (isSamePat m1' m2') then true else false
  | (`Senc(m1',k1'),`Senc(m2',k2')) -> if (isSamePat k1' k2') && (isSamePat m1' m2') then true else false
  | (`Pk r1,`Pk r2) -> true
  | (`Sk r1,`Sk r2) -> true
  | (`Pk r1,`Sk r2) -> false  (* sk(r1),pk(r1) are the same pat, they are stored into the same patSet*)
  | (`Sk r1,`Pk r2) -> false
  | (`K(r11,r12),`K(r21,r22)) -> true
  | (`Var n1,`Var n2) -> true
  | (`Concat msgs1,`Concat msgs2) -> isSameList msgs1 msgs2
  | (`Hash m1',`Hash m2') -> if (isSamePat m1' m2') then true else false
  | (`Str r1,`Str r2) -> true
  | _ -> false

and isSameList msgs1 msgs2 = 
  let len1 = List.length msgs1 in
  let len2 = List.length msgs2 in
  if len1 <> len2 then false 
  else let boolList = List.map2_exn ~f:isSamePat msgs1 msgs2 in
  match List.reduce ~f:(&&) boolList with
  | Some b -> b
  | None -> false 
;;

(* Get pattern Set number in Murphi code *)
let getPatNum pat patList=
  let len = List.length patList in
  let patIndex = ref 0 in
  for i = 0 to len do
    match List.nth patList i with
    | Some x -> if isSamePat pat x then patIndex := i+1
    | None -> ()
  done;
  !patIndex
;;

(* Extracting msg patterns from actions and its sub-patterns *)
(* Extract msg from action *)
(*let extractMsg (seq,r1,r2,n,m) = m ;;*)
let rec getSubMsg msg =
  match msg with
  |`Null -> []
  |`Var nonce -> [`Var nonce]
  |`Str role  -> [`Str role]
  |`Concat msgs -> let submsgs = List.concat (List.map ~f:getSubMsg msgs) in
                    submsgs@msgs@[msg]
  |`Aenc (m,k) -> (getSubMsg m)@[m;k]@[msg]
  |`Senc (m,k) -> (getSubMsg m)@[m;k]@[msg]
  |`Hash m -> (getSubMsg m) @ [msg]
  |`Pk role -> [`Pk role]
  |`Sk role -> [`Sk role]
  |`K (r1,r2) -> [`K (r1,r2)]
;;

(* To get equivalent msg pattern from patlist. *)
let rec existSamePat eqvlPats pat = 
  match eqvlPats with
  | [] -> false
  | hd::tl -> if isSamePat hd pat then true else existSamePat tl pat
;;

let isSubPat y x =
  let ysubs = getSubMsg y in
    let boollist = List.map ~f:(fun ysub -> if isSamePat ysub x then true else false) ysubs in
    match List.reduce ~f:(||) boollist with
    |Some b -> b
    |None -> false
;;
let rec getEqvlMsgPattern patlist =
  let non_eqvlPat = ref [] in 
  let len = List.length patlist in
  for i = 0 to len do
	match List.nth patlist i with
	| None -> ()
 	| Some x -> if existSamePat !non_eqvlPat x then () else non_eqvlPat := (insert x !non_eqvlPat) (* insert x into an appropriate position *)
  done;
  !non_eqvlPat

and insert x patlist =
    match patlist with
    | [] -> x::patlist
    | [y] -> if isSubPat y x then x::patlist else patlist@[x] (* if x is a subpat of y,then x before y,else x after y*)
    | hd :: tl -> if isSubPat hd x then x::patlist else hd::(insert x tl)
;;

let rec getPatList actions =
  match actions with
  | `Null -> []
  | `Act1 (seq,r1,r2,n,m) -> (getSubMsg m) @ [m]
  | `Act2 (seq,r1,r2,m) -> (getSubMsg m) @ [m] 
  | `Actlist arr -> List.concat (List.map ~f:getPatList arr)
;;

