open Core;;
open Core.Std;;

type label = string;;
type roleName = string;;
type identifier = string;;

type message = [
  | `Null
  | `Var of identifier
  | `Str of roleName
  | `Concat of message list
  | `Aenc of message*message   (* Asymmetric encryption *)
  | `Senc of message*message   (* Symmetric encryption *)
  | `Hash of message
  | `Pk of roleName
  | `Sk of roleName
  | `K of roleName*roleName
];;

type action = [
  | `Act of label * roleName * roleName * identifier * message
  | `Actlist of action list
  | `Null
];;

type sign = 
  | Plus
  | Minus
;;

type act = sign*message ;;

(* part 1 *)

let compileAct (seq,r1,r2,n,m) roleName =
  if roleName = r1 then Some (Plus,m)
  else if roleName = r2 then Some (Minus,m)
  else None
;;

(** part 2 
    Get roles from actions 
*)

let rec listwithout l e =  (* If e is in list l? *)
  match l with
  | [] -> true
  | hd::tl -> if hd = e then false else listwithout tl e
;; 

let get2roles (seq,ra,rb,n,m) rl = (* Get 2 roles of an action. *)
  if listwithout rl ra && listwithout rl rb then ra :: rb :: rl
  else if listwithout rl ra then ra :: rl
  else if listwithout rl rb then rb::rl
  else rl  
;;

let getroles acts rl =
  match acts with
  | [] -> rl
  | hd :: tl as al -> 
	List.concat (List.map ~f:(fun a -> get2roles a []) al)
;;
(* remove sequential duplicates from a list *)
let rec destutter ls =
  match ls with
  | [] -> []
  | [hd] -> [hd]
  | hd::hd'::tl -> if hd = hd' then destutter (hd' :: tl)
                   else hd :: destutter (hd' :: tl)
;;

(*-------sort a list in ascending order --------*)
let rec sort lst =  
  match lst with
  | [] -> []
  | hd :: tl -> insert hd (sort tl)
and insert elt lst =
  match lst with
  | [] -> [elt]
  | hd :: tl -> if elt <= hd then elt::lst else hd::insert elt tl
;;

let getroles_from_actlist actlist =
  destutter (sort (getroles actlist []))
;;

(** part 3 
 Get strand list of a role
*)

let rec remove ls e =
  match ls with
  | [] -> []
  | hd::tl -> if hd = e then remove tl e else hd::(remove tl e)
;;

let compileSq actlist rolename =
  remove (List.map ~f:(fun a -> compileAct a rolename) actlist) None
;;

(** part 4
    Get strand of all roles and put them into a list 
*)
let get_strand actlist =
  let rolelist = getroles_from_actlist actlist in
  List.map ~f:(fun rolename -> compileSq actlist rolename) rolelist
;;

(** part 5
    print message
*)
let rec output_msg outc msg =
  match msg with 
  | `Null -> output_string outc "null"
  | `Var id -> printf "%s" id
  | `Str s -> printf "%s" s
  | `Concat msgs -> print_msglist outc msgs
  | `Hash m -> printf "hash (%a) " output_msg m  
  | `Aenc (m,k) -> printf "aenc{ < %a > }%a" output_msg m output_msg k
  | `Senc (m,k) -> printf "senc{ < %a > }%a" output_msg m output_msg k
  | `Pk rolename -> printf "pk(%s)" rolename
  | `Sk rolename -> printf "sk(%s)" rolename
  | `K (r1,r2) -> printf "k(%s,%s)" r1 r2

and print_msglist outc msgs =
  List.iteri ~f:(fun i m ->
	output_msg outc m;
	if i < ((List.length msgs)-1) then output_string outc "." else output_string outc "" ;) msgs;
;;

(* part 6 : Transforming the i-th action into murphy rule *)
let rec getAtoms msg =
  match msg with
  |`Null   	-> [`Null]
  |`Var id 	-> [`Var id]
  |`Str s 	-> [`Str s]
  |`Concat msgs -> getEachAtoms msgs
  |`Hash m 	-> getAtoms m
  |`Aenc (m,k)-> List.concat (List.map ~f:getAtoms [m;k])
  |`Senc (m,k)-> List.concat (List.map ~f:getAtoms [m;k])
  |`Pk rolename -> [`Var rolename]
  |`Sk rolename -> [`Var rolename]
  |`K (r1,r2)	-> [`Var r1;`Var r2]

and getEachAtoms msgs =
  remove (List.concat (List.map ~f:getAtoms msgs)) `Null
;;

let sign act =
  match act with
  | (Plus,_) -> Plus 
  | (Minus,_)-> Minus
;;

let genRuleName rolename i =
  printf "rule \" role%s%d \"\n" rolename i
;;

let genSendGuard rolename i =
  printf "role%s[i].st = st%s[%d] & ch[%d].empty = true \n==>" rolename rolename i i
;;

let genRecvGuard rolename i =
  printf "role%s[i].st = st%s[%d] & ch[%d].empty = false & ch[%d].receiver = role%s[i].%s\n==>" rolename rolename i i i rolename rolename
;;

let print_atom a =
  match a with
  |`Var id -> printf "%s" id
  |`Str s  -> printf "%s" s
  |`Null   -> printf " "
;;

let print_cons_atoms rolename i atoms =
  List.iteri ~f:(fun j a -> 
		if (i = 1 && j = 0)|| j <> 0 then 
			begin
			printf "role%s[i]." rolename;
			print_atom a;
			end
		else 
			printf "loc_Nb";
		printf ","
		 ) atoms
;;

let genSendAct rolename i atoms length =
  printf "
var msg:Message;
msgNo:IndexType;
begin
   clear msg;
   cons%d(" i;
  print_cons_atoms rolename i atoms;
  printf "msg,msgNo);\n";
  printf "   ch[%d].empty := false;\n" i;
  printf "   ch[%d].msg := msg;\n" i;
  printf "   ch[%d].sender := role%s[i].%s;\n" i rolename rolename;
  printf "   ch[%d].receiver := IndexTyperuder_;\n" i;
  printf "   role%s[i].st := st%s[%d];\nend;\n" rolename rolename ((i mod length) +1); (* (i+1) should be (i+1) % length of the strand list *)
;;

let geti_th_atom atoms i =
  match List.nth atoms i with
  | None -> `Null
  | Some x -> x
;;

let genRecvAct rolename i atoms length=
  printf "
var loc_A loc_B:AgentIdType;
loc_Na,loc_Nb:NonceType;
msgNo:IndexType;
begin
   clear msg;
   msg := ch[%d].msg;
   destruct%d(msg,loc_Na,loc_Nb,loc_A);\n" i i;
  printf "   if (loc_A=role%s[i]." rolename;
  print_atom (geti_th_atom atoms 2);  (* loc_A = roleA[i].A(which comes from initial knws of roleA, the same of Na of roleA[i].Na) *)
  printf " & loc_na=role%s[i]." rolename;
  print_atom (geti_th_atom atoms 0);
  printf ") then
   ch[%d].empty:=true;\n" i;
  printf "   role%s[i].st := I_%d;\nend;\nendif;\nend;\n" rolename ((i mod length)+1);
;;

let trans act m i rolename length =
  let atoms = getAtoms m in
  match (sign act) with
  | Plus -> begin 
		genRuleName rolename i;
		genSendGuard rolename i;
		genSendAct rolename i atoms length;
	    end
  | Minus -> begin
		genRuleName rolename i;
		genRecvGuard rolename i;
		genRecvAct rolename i atoms length;
	     end
;;
(* part 7 Extracting msg patterns from actions and its sub-patterns *)

(* To determine whether two msgs are the same. *)
let rec allTrue boolList =
  match boolList with 
  | [] -> false
  | [b] -> if b = true then true else false
  | hd :: tl -> if hd = false then false else allTrue tl
;;

(* To determine whether two msgs are equivalent? *)
let rec isSamePat m1 m2 =
  match m1 with 
  |`Aenc(m1',k1) -> begin 
		    match m2 with
		    |`Aenc(m2',k2) -> if (isSamePat k1 k2) && (isSamePat m1' m2') then true else false
		    | _ -> false
		    end
  |`Senc(m1',k1) -> begin 
		    match m2 with
		    |`Senc(m2',k2) -> if (isSamePat k1 k2) && (isSamePat m1' m2') then true else false
		    | _ -> false
		    end
  |`Pk r1 	 -> begin 
		    match m2 with 
		    |`Pk r2 ->  true
		    | _ -> false
		    end
  |`Sk r1 	 -> begin 
		    match m2 with 
		    |`Sk r2 -> true 
		    | _ -> false
		    end
  |`K (r11,r12)	 -> begin 
		    match m2 with 
		    |`K (r21,r22) -> true 
		    | _ -> false
		    end
  |`Var n1	 -> begin 
		    match m2 with
		    |`Var n2 -> true 
		    | _ -> false
		    end
  |`Concat msgs1 -> begin
		    match m2 with
		    |`Concat msgs2 -> isSameList msgs1 msgs2
  		    | _ -> false
		    end
  |`Hash m1'	 -> begin
		    match m2 with
		    |`Hash m2' -> if isSamePat m1' m2' then true else false
		    | _ -> false 
		    end
  |`Str s1	 -> begin 
		    match m2 with
		    |`Str s2 -> true
		    | _ -> false
		    end
 | _ -> false

and isSameList msgs1 msgs2 =
  let len1 = List.length msgs1 in
  let len2 = List.length msgs2 in
  if len1 <> len2 then false 
  else let boolList = List.map2_exn ~f:isSamePat msgs1 msgs2 in
	if allTrue boolList then true else false
;;

(* To get pats from actlist. *)
(*let extractMsg (seq,r1,r2,n,m) = m ;;

let extractSq actlist =
  match actlist with
  | `Null -> []
  | `Act (seq,r1,r2,n,m) -> extractMsg (seq,r1,r2,n,m)
  | `Actlist arr -> List.map ~f:extractMsg arr
;;*)

let rec getSubMsg msg =
  match msg with
  |`Null -> []
  |`Var nonce -> [`Var nonce]
  |`Str role  -> [`Str role]
  |`Concat msgs -> let submsgs = List.concat (List.map ~f:getSubMsg msgs) in
		   [msg]@msgs@submsgs
  |`Hash m -> [msg]@(getSubMsg m)
  |`Aenc (m,k) -> [msg]@[m;k]@(getSubMsg m)
  |`Senc (m,k) -> [msg]@[m;k]@(getSubMsg m)
  |`Pk role -> [`Pk role]
  |`Sk role -> [`Sk role]
  |`K (r1,r2) -> [`K (r1,r2)]
;;

let del_duplicate org_list =
  match org_list with
  | [] -> []
  | l -> let len = List.length l in
	 let non_duplicate = ref [] in
	 for i = 0 to len do
		match List.nth l i with
		| None -> ()
		| Some x -> if listwithout !non_duplicate x then non_duplicate := x::!non_duplicate
	 done;
	!non_duplicate
;;

(* To get equivalent msg pattern from patlist. *)
let rec existSamePat eqvlPats pat =
  match eqvlPats with
  | [] -> false
  | hd::tl -> if isSamePat hd pat then true else existSamePat tl pat
;;

let getEqvlMsgPattern patlist =
  let non_eqvlPat = ref [] in 
  let len = List.length patlist in
  for i = 0 to len do
	match List.nth patlist i with
	| None -> ()
 	| Some x -> if existSamePat !non_eqvlPat x then () else non_eqvlPat := x :: !non_eqvlPat
  done;
  !non_eqvlPat
;;

let rec getPatList actions =
  match actions with
  | `Null -> []
  | `Act (seq,r1,r2,n,m) -> [m] @ (getSubMsg m)
  | `Actlist arr -> List.concat (List.map ~f:getPatList arr)
;;

let getSubPatterns actlist =
  let msgpats = getPatList actlist  in
  let non_dup_msgpats = del_duplicate msgpats in
  getEqvlMsgPattern non_dup_msgpats
;;

(* part 8 *)
let actlist = `Actlist[ `Act("seq1","A","B","n1",`Aenc(`Concat([`Var("nonce(a)");`Str("A")]),`Pk("B")));
			`Act("seq2","B","A","n2",`Aenc(`Concat([`Var("nonce(a)");`Var("nonce(b)")]),`Pk("A")));
			`Act("seq3","A","B","n3",`Aenc(`Var("nonce(b)"),`Pk("B")))];;

let msg1 = `Aenc(`Concat [`Var "nonce(a)"; `Str "A"],`Pk "B");;
let msg2 = `Aenc(`Concat([`Var("nonce(b)");`Str "B"]),`Pk "A");;
let msg3 = `Aenc(`Var("nonce(b)"),`Pk("B"));;
let msg4 = `Aenc(`Concat [`Var "nonce(a)"; `Str "A"],`Pk "B");;
let msg5 = `Senc(`Concat([`Var("nonce(a)");`Var("nonce(b)")]),`Sk "A");;
let msg6 = `Sk "A";;

let actA1 = (Plus,msg1);;
let actA2 = (Minus,msg2);;
let actA3 = (Plus,msg3);;

let acts = [actA1;actA2;actA3];;

let getMsg act = 
  match act with
  | (Plus, m) | (Minus,m) -> m
;;

let () = 
  (*let actlength = List.length acts in
  List.iteri ~f:(fun i act -> trans act (getMsg act) (i+1) "A" actlength) acts
*)
  (*let msgList = extractSq actlist in
  let patList = getPat msgList [] in*)
  let subPatlist = getSubPatterns actlist in
  (*let newpatlist = patList @ subPatlist in*)
  List.iteri ~f:(fun i pat -> match pat with
			      |`Null -> printf "null"
			      |`Aenc (m1,k1) -> printf "pat%d: Aenc(%a,key)\n" i output_msg m1
			      |`Senc (m1,k1) -> printf "pat%d: Senc(%a,key)\n" i output_msg m1
			      |`Hash m -> printf "pat%d: Hash(%a)\n" i output_msg m
			      |`Concat msgs -> printf "pat%d: Concat\n" i; List.iteri ~f:(fun j m -> printf "   (%d: %a\n" j output_msg m) msgs
			      |`Var n -> printf "pat%d: Nonce(%a)\n" i output_msg (`Var n)
			      |`Str s -> printf "pat%d: Agent(%a)\n" i output_msg (`Str s)
			      |`Pk role ->printf "pat%d: %a\n" i output_msg (`Pk role) 
			      |`Sk role ->printf "pat%d: %a\n" i output_msg (`Sk role) ) subPatlist
;;

(*
let () =
  let rolelist = getroles_from_actlist actlist in
  let str_list = List.map ~f:(fun rolename -> compileSq actlist rolename) rolelist in
  List.iteri ~f:(fun i str -> 
		printf "-------\nrole"; 
		match List.nth rolelist i with
 		| None -> ()
		| Some r -> printf "%s" r
		; 
		printf ":\n";
		List.iter ~f:(fun v -> match v with
	        | Some(Plus,m) -> printf " (+,%a )\n" output_msg m
		| Some(Minus,m) -> printf " (-,%a )\n" output_msg m
		| None -> printf "%d: empty\n" i) str
) str_list
;;

let rec printMsgTree msg =
  match msg with
  |`Null -> printf "Null"
  |`Var id -> printf "Var:\n  nonce(%s)\n" id
  |`Str s -> printf "Str:\n  rolename(%s)\n" s
  |`Concat msgs ->printf "Concat:\n  msgs("; List.iter (fun msg -> printf "   ";printMsgTree msg) msgs; printf ")\n"
  |`Hash m -> printf "Hash:\n  msg("; printMsgTree m; printf ")\n"
  |`Aenc (m1,m2) -> printf "Aenc:\n  m1("; printMsgTree m1;printf")\n";
                    printf "  m2("; printMsgTree m2 ; printf")\n"
  |`Senc  (m1,m2) -> printf "Senc:\n  m1("; printMsgTree m1;printf")\n";
                     printf "  m2("; printMsgTree m2;printf")\n";
  |`Pk rolename -> printf "Pk:\n  rolename(%s)\n" rolename
  |`Sk rolename -> printf "Sk:\n  rolename(%s)\n" rolename
  |`K (r1,r2)   -> printf "K:\n  r1(%s)\n   r2(%s)\n" r1 r2  
;;
*)

