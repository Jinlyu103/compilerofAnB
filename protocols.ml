open Core.Std;;
(* part 1 type definition *)
type label = string;;
type roleName = string;;
type identifier = string;;

(*type nonce = string;;*)

type identifier_list=[
  | `Identifier of identifier
  | `Identifier_list of identifier list
];;

type roleName_list=[
  | `RoleName of roleName
  | `roleName_list of roleName_list list
];;
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

type knowledge = [
  | `Knowledge of roleName*message
  | `Knowledge_list of knowledge list
  | `Null
];;

type environment = [
  (*|`Env_rlist of message
  |`Env_nlist of message*)
  |`Env_agent of roleName * int * message
  |`Envlist of environment list
  |`Null
]

type goal = [
  (*|`Secretgoal of identifier * message * roleName_list*)
  |`Secretgoal of identifier * message
  |`Agreegoal of identifier * roleName * roleName * message
  |`Goallist of goal list
  |`Null
];;

type pocolcontext = [
  | `Pocol of knowledge * action * environment * goal
  | `Null
];;

type protocols = [
  | `Protocol of label * pocolcontext
  | `Null
];;

type sign = 
  | Plus
  | Minus
;;

type act = sign * message ;;

(* part 2 functions definition *)
let compileAct (seq,r1,r2,n,m) roleName =
  if roleName = r1 then Some (Plus,m)
  else if roleName = r2 then Some (Minus,m)
  else None
;;

(* Get roles from actlist *)
let rec listwithout l e =  (* If e is in list l? *)
  match l with
  | [] -> true
  | hd::tl -> if hd = e then false else listwithout tl e
;; 
(* Transpose function *)
let rec tail xlist =
  match xlist with 
  | hd::tl -> tl
  | e::[] -> []
  | []    -> failwith "no element"
;;

let head xlist =
  match xlist with
  | x::tl -> x
  | [] -> failwith "no element"
;;

let rec transpose xlist = 
  match xlist with
  | []             -> []
  | []   :: xss    -> transpose xss
  | (x::xs) :: xss ->
    (x :: List.map ~f:head xss) :: transpose (xs :: List.map ~f:tail xss)
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

(* Print msgs *)
let rec output_msg outc msg =
  match msg with 
  | `Null -> output_string outc "null"
  | `Var id -> printf "%s" id
 (* | `Nonce na    -> printf "%s" na*)
  | `Str s -> printf "%s" s
  | `Concat msgs -> print_msglist outc msgs
  | `Hash m -> printf "hash (%a) " output_msg m  
  | `Aenc (m1,m2) -> printf "aenc{ < %a > }%a" output_msg m1 output_msg m2
  | `Senc (m1,m2) -> printf "senc{ < %a > }%a" output_msg m1 output_msg m2
  | `Pk rolename -> printf "pk(%s)" rolename
  | `Sk rolename -> printf "sk(%s)" rolename
  | `K (r1,r2) -> printf "k(%s,%s)" r1 r2

and print_msglist outc msgs =
  List.iteri ~f:(fun i m ->
	output_msg outc m;
	if i < ((List.length msgs)-1) then output_string outc "." else output_string outc "" ;) msgs;
;;

(* print actions *)
let rec output_action outc actions knws = 
  let rolelist = getRolesFromKnws knws [] in
  match actions with
  | `Null -> output_string outc "null"
  | `Actlist arr ->  print_actionlist outc arr knws
  | `Act (seq,r1,r2,n,m) -> let roleStr = List.map ~f:(fun rolename ->
			    compileAct ((seq,r1,r2,n,m)) rolename) rolelist in
			List.iteri ~f:(fun i s -> match List.nth rolelist i with
			    | None -> ()
			    | Some r -> printf "role%s:" r
			;
			    match s with
			    | Some(Plus,m) -> printf "+\n"
			    | Some(Minus,m) -> printf "-\n"
			    | None -> output_string outc "null"
			) roleStr

and print_actionlist outc arr knws =
  output_string outc "Actions:{\n";
  let rolelist = getRolesFromKnws knws [] in
  let roleStrlist = List.map ~f:(fun a -> getRoleStr outc a knws) arr in (* get role strand from each action *)
  let transRlStrList = transpose roleStrlist in   (* Transpose the List from each action strand *)
  let strOfEachRoleNoEmpty = List.map ~f:(fun str -> remove str None) transRlStrList in (* remove Empty act *)
  List.iteri ~f:(fun i roleStr ->   		  (* output the strand of each role *)
		match List.nth rolelist i with
		| None -> ()
		| Some r -> printf "role%s:\n" r
		;
		List.iter ~f:(fun s -> match s with
			    | Some(Plus,m) -> printf "(+,%a)\n" output_msg m
			    | Some(Minus,m) -> printf "(-,%a)\n" output_msg m
			    | None -> output_string outc "Empty" ) roleStr) strOfEachRoleNoEmpty;
  output_string outc "}"

and getRoleStr outc a knws = 
  let rolelist = getRolesFromKnws knws [] in
  match a with
  | `Null -> []  (* The input action here is absolutly the only act, not actlist nor `Null. So these patterns return [] is ok. *)
  | `Actlist arr -> []
  | `Act (seq,r1,r2,n,m) -> List.map ~f:(fun rolename ->
			    compileAct ((seq,r1,r2,n,m)) rolename) rolelist
;;

(* print knowledges *)
let rec output_knowledge outc knw =
  match knw with 
  | `Null       -> output_string outc "null"
  | `Knowledge_list arr  -> print_knowledgelist outc arr
  | `Knowledge (r,m) -> printf "r%s:" r;output_msg outc m

and print_knowledgelist outc arr = 
  output_string outc "Knowledges{\n";
  List.iteri ~f:(fun i v ->
  if i > 0 then
    output_string outc "\n";
  output_knowledge outc v) arr;
  output_string outc "\n}"
;;

(* print protocols *)
let output_pocolcontext outc pocol = 
  match pocol with
  | `Null       -> output_string outc "null"
  | `Pocol (k,a)-> printf "%a \n" output_knowledge k; (output_action outc a k)
;;

(* part 3 output_protocol *)
let output_pocol outc value = 
  match value with
  | `Null       -> output_string outc "null"
  | `Protocol (n,p)  -> printf "Protocol %s:\n%a\nEND" n output_pocolcontext p
;;

(* To determine whether two msgs are equivalent? *)
let rec isSamePat m1 m2 =
  match (m1,m2) with
  | (`Aenc(m1',k1'),`Aenc(m2',k2')) -> if (isSamePat k1' k2') && (isSamePat m1' m2') then true else false
  | (`Senc(m1',k1'),`Senc(m2',k2')) -> if (isSamePat k1' k2') && (isSamePat m1' m2') then true else false
  | (`Pk r1,`Pk r2) -> true
  | (`Sk r1,`Sk r2) -> true
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

(* part 4 print murphi rule *)
let rec getActsList actions rolelist = 
  match actions with
  | `Null -> []
  | `Actlist arr ->  getActs arr rolelist
  | `Act (seq,r1,r2,n,m) -> [List.map ~f:(fun rolename -> compileAct (seq,r1,r2,n,m) rolename) rolelist]

and getActs arr rolelist =
  let roleStrlist = List.map ~f:(fun a -> getRoleStr a rolelist) arr in 
  (* get role strand from each action:[[action1's role acts list];[action1's role acts list]...]*)
  let transRlStrList = transpose roleStrlist in   
  (* Transpose the List from each action strand: [[A's acts list];[B's acts list]...] *)
  List.map ~f:(fun str -> remove str None) transRlStrList  (* remove Empty act *)

and getRoleStr a rolelist = 
  match a with
  | `Null -> []  (* The input action here is absolutly the only act, not actlist nor `Null. So these patterns return [] is ok. *)
  | `Actlist arr -> []
  | `Act (seq,r1,r2,n,m) -> List.map ~f:(fun rolename ->
			    compileAct ((seq,r1,r2,n,m)) rolename) rolelist
;; 
(* Transforming the i-th action into murphy rule *)
let rec getAtoms msg =
  match msg with
  |`Null   	-> [`Null]
  |`Var id 	-> [`Var id]
  |`Str s 	-> [`Str s]
  |`Concat msgs -> getEachAtoms msgs
  |`Hash m 	-> getAtoms m
  |`Aenc (m1,m2)-> List.concat (List.map ~f:getAtoms [m1;m2])
  |`Senc (m1,m2)-> List.concat (List.map ~f:getAtoms [m1;m2])
  |`Pk rolename -> [`Pk rolename]
  |`Sk rolename -> [`Sk rolename]
  |`K (r1,r2)	-> [`Str r1;`Str r2]

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
  printf "role%s[i].st = %s%d & ch[%d].empty = true \n==>\n" rolename rolename i i
;;

let genRecvGuard rolename i =
  printf "role%s[i].st = %s%d & ch[%d].empty = false & ch[%d].receiver = role%s[i].%s\n==>\n" rolename rolename i i i rolename rolename
;;

let rec existInit msg atom =
  match msg with
  |`Null -> false
  |`Var n -> if isSamePat msg atom then 
                match atom with
                |`Var n1 -> if n = n1 then true else false
                |_ -> false
              else false
  |`Str r -> if isSamePat msg atom then 
              match atom with
              |`Str r1 -> if r = r1 then true else false
              |_ -> false
            else false
  |`Concat msgs -> existInMsgs msgs atom
  |`Aenc (m,k) -> false
  |`Senc (m,k) -> false
  |`Hash (m) -> false
  |`Pk r -> true
  |`Sk r -> false
  |`K (r1,r2) -> false
  |_ -> false

and existInMsgs msgs atom =
  let boolList = List.map ~f:(fun msg -> existInit msg atom ) msgs in
  match List.reduce ~f:(||) boolList with
  |Some b -> b
  |None -> false 
;;

let rec genSendAct rolename i atoms length msgofRolename =
  printf "var msg:Message;\n    msgNo:indexType;\nbegin\n";
  printf "   clear msg;\n   cons%d(%s,msg,msgNo);\n" i (sendAtoms2Str rolename i atoms msgofRolename);
  printf "   ch[%d].empty := false;\n" i;
  printf "   ch[%d].msg := msg;\n" i;
  printf "   ch[%d].sender := role%s[i].%s;\n" i rolename rolename;
  printf "   ch[%d].receiver := role%s[i].B;\n" i rolename;
  printf "   role%s[i].st := %s%d;\n" rolename rolename ((i mod length)+1) ; 
  printf "   put \"%d. \";\n   put ch[%d].sender;\n   put ch[%d].receiver;\n   put \"msg: \";\n   printMsg(ch[%d].msg);\n   put \"\\n\";\n" i i i i;
  printf "end;\n";
  (* (i+1) should be (i+1) % length of the strand list *)

and sendAtoms2Str rolename i atoms msgofRolename =
  let s = "role" ^ rolename ^"[i]." in
  let loc = "role"^rolename^"[i].loc_" in
  String.concat ~sep:"," (List.map ~f:(fun a ->                         
                        match a with
                        |`Var n -> if (existInit msgofRolename a)  then s ^ n else loc ^ n  (*if i = 1 then s ^ n else loc ^ n *)
                        |`Str r -> if (existInit msgofRolename a)  then s ^ r else loc ^ r
                        |`Pk r -> if (existInit msgofRolename (`Str r))  then s ^ r else loc ^ r
                        |_ -> "null" ) atoms)
;;

let rec genRecvAct rolename i atoms length msgofRolename =
  printf "var msg:Message;\n    msgNo:indexType;\nbegin\n";
  printf "   clear msg;\n   msg := ch[%d].msg;\n   destruct%d(msg,%s);\n" i i (recvAtoms2Str atoms rolename); (* (recvAtoms2Str atoms) *)
  printf "   if(%s)then\n" (atoms2Str atoms rolename msgofRolename);
  printf "     ch[%d].empty:=true;\n" i;
  printf "     role%s[i].st := %s%d;\n" rolename rolename ((i mod length)+1);
  printf "   endif;\n";
  printf "end;\n";

and recvAtoms2Str atoms rolename = 
  let loc = "role"^rolename^"[i].loc_" in
  String.concat ~sep:"," (List.map ~f:(fun a ->
  match a with
  |`Var n -> loc ^ n
  |`Str r -> loc ^ r
  |`Pk r -> loc ^ r
  |_ -> "null") atoms)

and atoms2Str atoms rolename msgofRolename = 
  let loc = "role"^rolename^"[i].loc_" in  
  let strlist = (List.map ~f:(fun  a ->
  match a with
  |`Var n -> if (existInit msgofRolename a) then loc ^ n ^ "=role" ^ rolename ^ "[i]." ^ n else "true" (* if j <> 1 then loc ^ n ^ "=role" ^ rolename^ "[i]." ^ n else " true " *)
  |`Str r -> if (existInit msgofRolename a) then loc ^ r ^ "=role" ^ rolename ^ "[i]." ^ r else "true"  (*loc ^ r ^ "=role" ^ rolename ^ "[i]." ^ r*)
  |`Pk r -> loc ^ r ^ "=role" ^ rolename ^ "[i]." ^ r
  |_ -> "null" ) atoms)
  in
  String.concat ~sep:"&" (remove strlist "true")
;;

let trans act m i rolename length msgOfrolename =
  let atoms = getAtoms m in
  match (sign act) with
  | Plus -> begin 
              genRuleName rolename i;
              genSendGuard rolename i;
              genSendAct rolename i atoms length msgOfrolename;
            end
  | Minus -> begin
              genRuleName rolename i;
              genRecvGuard rolename i;
              genRecvAct rolename i atoms length msgOfrolename;
            end
;;

let genMsg act = 
  match act with
  | (Plus, m) | (Minus,m) -> m
;;

let print_murphiRule outc actions knws =  (*printf "murphi code"*)
  let rolelist = getRolesFromKnws knws [] in (* Get role list:[A;B;...] *)
  let actsOfAllRls = getActsList actions rolelist in  (* Get act list: [(sign,msg);(sign,msg);...] *)
  let initKnws = getMsgOfRoles knws in 
  List.iteri ~f:(fun i r -> (*if i = 0  || i = 1 then*)
                            let acts = match List.nth actsOfAllRls i with (* Get the i-th act list of role_i*)
                                      | None -> []
                                      | Some a -> a
                            in
                            let msgofRole = match List.nth initKnws i with (* Get the i-th msg list of role_i*)
                                            |None -> `Null
                                            |Some msg -> msg
                            in
                            let lenActs = List.length acts in
                            printf "ruleset i:role%sNums do\n" r;
                            List.iteri ~f:(fun j act -> match act with
                                                        | None -> output_string outc "null"
                                                        | Some a -> trans a (genMsg a) (j+1) r lenActs msgofRole) acts;
                            printf "endruleset;\n\n"  ) rolelist;
;;
(* generation code to encode each msg pattern *)
(* Extracting msg patterns from actions and its sub-patterns *)
let rec encodeBody m i =
  match m with
  |`Var na ->printf " clear msg;\n msg.magType := Nonce;\n msg.noncePart := %s ;\n lookAdd (msg,num%d);\n" na i
  |`Str role -> printf " clear msg;\n msg.msgType := Agent;\n msg.agentPart := %s;\n lookAdd (msg,num%d);\n" role i
  |`Concat msgs -> List.iteri ~f:(fun i msg -> encodeBody msg (i+1)) msgs;
                   printf " clear msg;\n msg.msgType := Concat;\n";
                   List.iteri ~f:(fun j msg -> printf " msg.mPart%d := num%d_%d\n" j i j) msgs;
                   printf " lookAdd(msg,num%d);\n" i
  |`Aenc (m,k) -> encodeBody m 1;encodeBody k 2; 
		              printf " clear msg;\n msg.msgType := Aenc;\n msg.AencKey := num2;\n msg.AencMsg := num1;\n lookAdd(msg,num%d);\n" i
  |`Senc (m,k) -> encodeBody m 1;encodeBody k 2; 
		              printf " clear msg;\n msg.msgType := Senc;\n msg.SencKey := num2;\n msg.SencMsg := num1;\n lookAdd(msg,num%d);\n" i
 |`Pk role -> printf " clear msg;\n msg.msgType := PubKey;\n msg.keyPart := %s;\n lookAdd (msg,num%d);\n" role i
 | _ -> printf "others\n"
;;
(*
let consMsg m i =
  printf " procedure consMsg%d(%a\n   var msg: Message;\n    num: indexType;\n    num1,num2: indexType;\nbegin %a end" i (outConsPara m) encodeBody m 1;   (* default 1*)
;;
*)


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

and isSubPat y x =
    let ysubs = getSubMsg y in
    let boollist = List.map ~f:(fun ysub -> if isSamePat ysub x then true else false) ysubs in
    match List.reduce ~f:(||) boollist with
    |Some b -> b
    |None -> false
;;

let rec getPatList actions =
  match actions with
  | `Null -> []
  | `Act (seq,r1,r2,n,m) -> (getSubMsg m) @ [m]
  | `Actlist arr -> List.concat (List.map ~f:getPatList arr)
;;

(* 2019-12-17 *)
(*
let printPat pat i =
	match pat with
	|`Null -> printf "null"
	|`Aenc (m1,k1) -> printf "pat%d: " i; printf "Aenc(%a,%a)\n" output_msg m1 output_msg k1
	|`Senc (m1,k1) -> printf "pat%d: " i; printf "Senc(%a,%a)\n" output_msg m1 output_msg k1
	|`Hash m -> printf "pat%d: Hash(%a)" i output_msg m
	|`Concat msgs -> printf "pat%d: Concat(" i; 
			 List.iteri ~f:(fun j m -> printf "%a" output_msg m; if j = 0 then printf ",";) msgs;
			 printf ")\n"
	|`Var n -> printf "pat%d: Nonce(%a)\n" i output_msg (`Var n)
	|`Str s -> printf "pat%d: Agent(%a)\n" i output_msg (`Str s)
	|`Pk role ->printf "pat%d: %a\n" i output_msg (`Pk role) 
	|`Sk role ->printf "pat%d: %a\n" i output_msg (`Sk role)
	|`K (r1,r2) -> printf "pat%d: %a\n" i output_msg (`K (r1,r2))
;;
*)
(* 2019-12-18 *)
(* encrypt and decrypt / enconcat and deconcat *)
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

(* decryption rules for aenc(Na.A, Pk(B)), aenc(Na.Nb,Pk(A)) and aenc(Nb,Pk(B)) *)
let rec adecryptRule (m,k) patList=  
  (*printf "  adecrypt\n";*)
  let i = getPatNum (`Aenc (m,k)) patList in
  let i1 = getPatNum m patList in
  let i2 = getPatNum k patList in
  printDecRule (m,k) i i1 i2

and printDecRule (m,k) i i1 i2 =
   printf "  rule \"decrypt %d\"	---pat%d\n" i i;
   printf "    i<=pat%dSet.length & Spy_known[pat%dSet.content[i]] &\n    !Spy_known[msgs[pat%dSet.content[i]].aencMsg]\n    ==>\n" i i i;
   printf "    var key_inv:Message;\n	msgPat%d:indexType;\n	flag_pat%d:boolean;\n" i1 i1;
   printf "    begin\n";
   printf "      key_inv := inverseKey(msgs[msgs[pat%dSet.content[i]].aencKey]);\n" i;
   printf "      if (key_inv.k.ag = intruderType) then\n";
   printf "        Spy_known[msgs[pat%dSet.content[i]].aencMsg]:=true;\n        msgPat%d:=msgs[pat%dSet.content[i]].aencMsg;\n" i i1 i;
   printf "        isPat%d(msgs[msgPat%d],flag_pat%d);\n        if (flag_pat%d) then\n" i1 i1 i1 i1;
   printf "          if (!exist(pat%dSet,msgPat%d)) then\n" i1 i1;
   printf "            pat%dSet.length:=pat%dSet.length+1;\n            pat%dSet.content[pat%dSet.length]:=msgPat%d;\n" i1 i1 i1 i1 i1;
   printf "          endif;\n";
   printf "        endif;\n";
   printf "      endif;\n";
   printf "    end;\n";
;;

(* encryption rules for aenc(Na.A, Pk(B)), aenc(Na.Nb,Pk(A)) and aenc(Nb,Pk(B))*)
let rec aencryptRule (m,k) patList=
  (*printf "  aencrypt\n"*)
  let i = getPatNum (`Aenc (m,k)) patList in
  let i1 = getPatNum m patList in
  let i2 = getPatNum k patList in
  printEncRule (m,k) i i1 i2

and printEncRule (m,k) i i1 i2 =
  printf "    rule \"encrypt %d\"	---pat%d\n" i i;
  printf "      i<=pat%dSet.length & Spy_known[pat%dSet.content[i]] &\n      j<=pat%dSet.length & Spy_known[pat%dSet.content[j]] &\n      !Spy_known[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])]\n      ==>\n" i1 i1 i2 i2 i i1 i2 i1 i2;
  printf "      var encMsgNo:indexType;\n";
  printf "      begin\n";
  printf "        if (msgs[pat%dSet.content[j]].k.ag=intruder.B) then\n" i2;
  printf "          encMsgNo := construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j]);\n" i i1 i2 i1 i2;
  printf "          if (!exist(pat%dSet,encMsgNo)) then\n" i;
  printf "            pat%dSet.length := pat%dSet.length+1;\n            pat%dSet.content[pat%dSet.length]:=encMsgNo;\n" i i i i;
  printf "          endif;\n";
  printf "          if (!Spy_known[encMsgNo]) then\n";
  printf "            Spy_known[encMsgNo] := true;\n";
  printf "          endif;\n";
  printf "        endif;\n";
  printf "      end;\n";
  (*printf "    end;\n";*)
;;

(* deconcat rules for concat(Na,A) and concat (Na,Nb) *)
let rec deconcatRule msgs patList =
  (*printf "  deconcat rules\n";*)
  let i = getPatNum (`Concat msgs) patList in
  let i1 = match List.nth msgs 0 with
	   | Some m -> getPatNum m patList
	   | None -> 0
  in
  let i2 = match List.nth msgs 1 with
	   | Some m -> getPatNum m patList
	   | None -> 0
  in
  printDeconcatRule msgs i i1 i2

and printDeconcatRule msgs i i1 i2 =
  printf "  rule \"deconcat %d\"	---pat%d\n" i i;
  printf "    i<=pat%dSet.length & Spy_known[pat%dSet.content[i]] &\n    !(Spy_known[msgs[pat%dSet.content[i]].concatPart1] & Spy_known[msgs[pat%dSet.content[i]].concatPart2])\n    ==>\n" i i i i;
  let (i1_1,i1_2) = if i1 = i2 then (11,12) else (i1,i2) in 
  printf "    var msgPat%d,msgPat%d:indexType;\n        flag_pat%d,flag_pat%d:boolean;\n" i1_1 i1_2 i1_1 i1_2;
  printf "    begin\n";
  printf "      if (!Spy_known[msgs[pat%dSet.content[i]].concatPart1]) then\n" i;
  printf "        Spy_known[msgs[pat%dSet.content[i]].concatPart1]:=true;\n" i;
  printf "        msgPat%d := msgs[pat%dSet.content[i]].concatPart1;\n" i1_1 i;
  printf "        isPat%d(msgs[msgPat%d],flag_pat%d);\n" i1 i1_1 i1_1;
  printf "        if (flag_pat%d) then\n" i1_1;
  printf "          if(!exist(pat%dSet,msgPat%d)) then\n" i1 i1_1;
  printf "             pat%dSet.length:=pat%dSet.length+1;\n             pat%dSet.content[pat%dSet.length] := msgPat%d;\n" i1 i1 i1 i1 i1_1;
  printf "          endif;\n";
  printf "        endif;\n";
  printf "      endif;\n";
  printf "      if (!Spy_known[msgs[pat%dSet.content[i]].concatPart2]) then\n" i;
  printf "        Spy_known[msgs[pat%dSet.content[i]].concatPart2]:=true;\n" i;
  printf "        msgPat%d := msgs[pat%dSet.content[i]].concatPart2;\n" i1_2 i;
  printf "        isPat%d(msgs[msgPat%d],flag_pat%d);\n" i2 i1_2 i1_2;
  printf "        if (flag_pat%d) then\n" i1_2;
  printf "          if(!exist(pat%dSet,msgPat%d)) then\n" i2 i1_2;
  printf "             pat%dSet.length:=pat%dSet.length+1;\n             pat%dSet.content[pat%dSet.length] := msgPat%d;\n" i2 i2 i2 i2 i1_2;
  printf "          endif;\n";
  printf "        endif;\n";
  printf "      endif;\n";
  printf "    end;\n";
;;

(* enconcat rules for concat(Na,A) and concat(Na,Nb) *)
let rec enconcatRule msgs patList =
  (*printf "  enconcat rules\n";*)
  let i = getPatNum (`Concat msgs) patList in
  let i1 = match List.nth msgs 0 with
	   | Some m -> getPatNum m patList
	   | None -> 0
  in
  let i2 = match List.nth msgs 1 with
	   | Some m -> getPatNum m patList
	   | None -> 0
  in
  printEnconcatRule msgs i i1 i2

and printEnconcatRule msgs i i1 i2 =
  printf "    rule \"enconcat %d\"	---pat%d\n" i i;
  printf "      i<=pat%dSet.length & Spy_known[pat%dSet.content[i]] &\n      j<=pat%dSet.length & Spy_known[pat%dSet.content[j]] &\n" i1 i1 i2 i2;
  if i1 = i2 then
	printf "      i != j & \n"
  else printf "";
  let (j1,j2) = if i1=i2 then (i1+1,i2+2) else (i1,i2) in
  printf "      !Spy_known[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])]\n      ==>\n" i j1 j2 i1 i2;
  printf "      var concatMsgNo:indexType;\n";
  printf "      begin\n";
  printf "        concatMsgNo := construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j]);\n" i j1 j2 i1 i2;
  printf "        Spy_known[concatMsgNo]:=true;\n";
  printf "        if (!exist(pat%dSet,concatMsgNo)) then\n" i;
  printf "          pat%dSet.length:=pat%dSet.length+1;\n" i i;
  printf "          pat%dSet.content[pat%dSet.length]:=concatMsgNo;\n" i i;
  printf "        endif;\n";
  printf "      end;\n";
;;

let print_murphiRule_byPats pat i patList =
  match pat with
  |`Aenc (m1,k1) -> printf "--- encrypt and decrypt rules of pat: aenc(%a,%a), for intruder\n" output_msg m1 output_msg k1; 
		    printf "ruleset i:indexType do \n";
		    adecryptRule (m1,k1) patList;
		    printf "endruleset;\n\n" ;
		    printf "ruleset i:indexType do \n  ruleset j:indexType do \n";
		    aencryptRule (m1,k1) patList;
	  	    printf "  endruleset;\nendruleset;\n\n" ;
  |`Concat msgs -> printf "--- enconcat and deconcat rules for pat: concat(%a)\n\n" output_msg (`Concat msgs);
		   printf "ruleset i:indexType do \n";
		   deconcatRule msgs patList;
		   printf "endruleset;\n\n" ;
		   printf "ruleset i:indexType do \n  ruleset j:indexType do \n";
		   enconcatRule msgs patList;
		   printf "  endruleset;\nendruleset;\n\n" ;
  |_ -> ()
;;

(* print encryption and decryption rules, enconcat and deconcat rules *)
let print_murphiRules_EncsDecs outc actions knws = 
  match actions with
  | `Null -> output_string outc "null"
  | `Actlist arr -> let patlist = getPatList actions in    (* get all patterns from actions *)
                    let non_dup = del_duplicate patlist in (* delete duplicate *)
                    let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *) 
                    List.iteri ~f:(fun i pat -> print_murphiRule_byPats pat (i+1) non_equivalent ) non_equivalent
  | `Act (seq,r1,r2,n,m) -> let patlist = getPatList actions in    (* get all patterns from actions *)
		    	                  let non_dup = del_duplicate patlist in (* delete duplicate *)
                            let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *) 
                            List.iteri ~f:(fun i pat -> print_murphiRule_byPats pat (i+1) non_equivalent ) non_equivalent
;;

(* 2019-12-20 *)
(* rules for intruder to get msgs: intruderGetMsg1,intruderGetMsg2 and intruderGetMsg3;
   rules for intruder to emit msgs: intruderEmitMsg1, intruderEmitMsg2 and intruderEmitMsg3 *)
(* Get msgs from action *)
let rec getMsgs actions =
  match actions with
  | `Null -> []
  | `Act (seq,r1,r2,n,m) -> [m] 
  | `Actlist arr -> List.concat (List.map ~f:getMsgs arr)
;;

let rec print_murphiRule_byMsgs m i patList =
  let j = getPatNum m patList in
  print_getRules i j;
  print_emitRules i j;

and print_getRules i j =
  printf "\n---rule of intruder to get msg%d.\n" i;
  printf "rule \"intruderGetMsg%d\" \n" i; 
  printf "  ch[%d].empty = false\n  ==>\n" i;
  printf "  var flag_pat%d:boolean;\n      msgNo:indexType;\n      msg:Message;\n" j;
  printf "  begin\n";
  printf "    msg := ch[%d].msg;\n" i; 
  printf "    get_msgNo(msg, msgNo);\n"; 
  printf "    isPat%d(msg,flag_pat%d);\n" j j; 
  printf "    if (flag_pat%d) then\n" j;
  printf "      if(!exist(pat%dSet,msgNo)) then\n" j;
  printf "        pat%dSet.length:=pat%dSet.length+1;\n" j j;
  printf "        pat%dSet.content[pat%dSet.length]:=msgNo;\n" j j;
  printf "        Spy_known[msgNo] := true;\n";
  printf "      endif;\n" ;
  printf "    endif;\n" ;
  printf "    ch[%d].empty := true;\n" i;
  (*printf "    intruder.st := gotmsg%d;\n" i;*)
  printf "  end;\n"

and print_emitRules i j=
  printf "\n---rule of intruder to emit msg%d.\n" i;
  printf "ruleset i: msgLen do\n";
  if i mod 2 = 1 then
    printf "  ruleset j: roleBNums do\n"
  else printf "  ruleset j: roleANums do\n";
  printf "    rule \"intruderEmitMsg%d\"\n" i;
  printf "      ch[%d].empty=true & i <= pat%dSet.length & Spy_known[pat%dSet.content[i]]\n      ==>\n" i j j;
  printf "      begin\n";
  printf "        if (!emit[pat%dSet.content[i]] & msgs[msgs[pat%dSet.content[i]].aencKey].k.ag=intruder.B) then\n" j j;
  printf "          clear ch[%d];\n" i;
  printf "          ch[%d].msg:=msgs[pat%dSet.content[i]];\n" i j;
  printf "          ch[%d].sender:=intruderType;\n" i;
  if i mod 2 = 1 then
    printf "          ch[%d].receiver:=roleB[j].B;\n" i  (* roleB[j] should be derived from initial knws roleB *)
  else printf "          ch[%d].receiver:=roleA[j].A;\n" i;
  printf "          ch[%d].empty:=false;\n" i;
  printf "          emit[pat%dSet.content[i]] := true;\n" j;
  (*printf "          intruder.st:=emitted%d;\n" i;*)
  printf "          put ch[%d].sender;\n" i;
  printf "          put ch[%d].receiver;\n" i;
  printf "          printMsg(ch[%d].msg);\n" i;
  printf "          put \"\\n\";\n";
  printf "        endif;\n";
  printf "      end;\n";
  printf "  endruleset;\n";
  printf "endruleset;\n";
;;

(* get msgs from actions: msgs
   print get rules of each msg;
   print emit rules of each msg. *)
let print_murphiRule_ofIntruder outc actions knws =
  match actions with
  |`Null -> output_string outc "null"
  |`Actlist arr -> let msgs = getMsgs actions in    (* get all msgs from actions *) 
                   let patlist = getPatList actions in    (* get all patterns from actions *)
                   let non_dup = del_duplicate patlist in (* delete duplicate *)
                   let non_equivalent = getEqvlMsgPattern non_dup in
                   List.iteri ~f:(fun i m -> print_murphiRule_byMsgs m (i+1) non_equivalent) msgs
  |`Act (seq,r1,r2,n,m) -> let msgs = getMsgs actions in    (* get all msgs from actions *)
                           let patlist = getPatList actions in    (* get all patterns from actions *)
                           let non_dup = del_duplicate patlist in (* delete duplicate *)
                           let non_equivalent = getEqvlMsgPattern non_dup in
                           List.iteri ~f:(fun i m -> print_murphiRule_byMsgs m (i+1) non_equivalent) msgs
;;

(*synthesis of a messages of pati.*)
let atoms2Parms atoms =
  String.concat ~sep:"; "  (List.map ~f:(fun a -> match a with
  |`Var n -> n ^ ":NonceType"
  |`Str s -> s ^ ":AgentType"
  |`Pk role -> role ^ ":AgentType"
  |_ -> "" ) atoms )
;;

let atoms2Parms1 atoms =
  String.concat ~sep:"; "  (List.map ~f:(fun a -> match a with
  |`Var n ->"Var "^ n ^ ":NonceType"
  |`Str s ->"Var "^ s ^ ":AgentType"
  |`Pk role ->"Var "^ role ^ ":AgentType"
  |_ -> "" ) atoms )
;;

let atom2Str atoms =
  String.concat ~sep:", "  (List.map ~f:(fun a -> match a with
  |`Var n -> n 
  |`Str s -> s 
  |`Pk role -> role 
  |_ -> "" ) atoms )
;;

let genSynthCode m i patList =
  let atoms = getAtoms m in
  printf "---pat%d: %a \nprocedure lookAddPat%d" i output_msg m i;
  printf "(%s; Var msg:Message; Var num : indexType);\n" (atoms2Parms atoms);
  match m with
  |`Aenc(m1,k1) -> begin
                  let i1= getPatNum m1 patList in
                  let i2= getPatNum k1 patList in
                  let keyAg=match k1 with
                            |`Pk role -> role
                            |_ -> "null"
                  in
                  let m1Atoms = getAtoms m1 in                                            
                  printf "  Var msg1, msg2: Message;\n      index,i1,i2:indexType;\n  begin\n";
                  printf "   index:=0;\n";
                  printf "   lookAddPat%d(%s,msg1,i1);\n" i1 (atom2Str m1Atoms);
                  printf "   lookAddPat%d(%s,msg2,i2);\n" i2 keyAg;               
                  printf "   for i : msgLen do\n";
                  printf "     if (msgs[i].msgType = aenc) then\n";
                  printf "       if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then\n";
                  printf "          index:=i;\n";
                  printf "       endif;\n";
                  printf "     endif;\n";
                  printf "   endfor;\n";
                  printf "   if(index=0) then\n";
                  printf "     msg_end := msg_end + 1 ;\n";
                  printf "     index := msg_end;\n";
                  printf "     msgs[index].msgType := aenc;\n";
                  printf "     msgs[index].aencMsg:=i1; \n";
                  printf "     msgs[index].aencKey:=i2; \n";
                  printf "   endif;\n";
                  printf "   num:=index;\n";
                  printf "   msg:=msgs[index];\n";
                  printf " end;\n"; 
                  end;
  |`Concat msgs -> begin  (* concat(Na,Nb) and concat(Na,A)*)
        let (m1,i1)= match List.nth msgs 0 with
            |Some (`Var n) -> (n,getPatNum (`Var n) patList)
            |None|_ -> ("null",0)
        in
        let (m2,i2)= match List.nth msgs 1 with
            |Some (`Var n) -> (n,getPatNum (`Var n) patList)
            |Some (`Str s) -> (s,getPatNum (`Str s) patList)
            |None|_ -> ("null",0)
        in    	
        printf "  Var msg1, msg2: Message;\n      index,i1,i2:indexType;\n  begin\n";
        printf "   index:=0;\n";
        printf "   lookAddPat%d(%s,msg1,i1);\n" i1 m1;
        printf "   lookAddPat%d(%s,msg2,i2);\n" i2 m2;
        printf "   for i : msgLen do\n";
        printf "     if (msgs[i].msgType = concat) then\n";
        printf "       if (msgs[i].concatPart1 = i1 & msgs[i].concatPart2 = i2) then\n";
        printf "          index:=i;\n";
        printf "       endif;\n";
        printf "     endif;\n";
        printf "   endfor;\n";
        printf "   if(index=0) then\n";
        printf "     msg_end := msg_end + 1 ;\n";
        printf "     index := msg_end;\n";
        printf "     msgs[index].msgType := concat;\n";
        printf "     msgs[index].concatPart1:=i1; \n";
        printf "     msgs[index].concatPart2:=i2; \n";
        printf "   endif;\n";
        printf "   num:=index;\n";
        printf "   msg:=msgs[index];\n";
        printf " end;\n";
		   end
  |`Str s -> printf " Var index : indexType;\n begin\n";
             printf "   index:=0;\n";
             printf "   for i: msgLen do\n";
             printf "     if (msgs[i].msgType = agent) then\n";
             printf "       if (msgs[i].ag = %s) then\n" s;
             printf "         index:=i;\n";
             printf "       endif;\n";
             printf "     endif;\n";
             printf "   endfor;\n";
             printf "   if(index=0) then\n";
             printf "     msg_end := msg_end + 1 ;\n";
             printf "     index := msg_end;\n";
             printf "     msgs[index].msgType := agent;\n";
             printf "     msgs[index].ag:=%s; \n" s;
             printf "   endif;\n";
             printf "   num:=index;\n";
             printf "   msg:=msgs[index];\n";
             printf "  end;\n";
  |`Pk role -> printf " Var index : indexType;\n begin\n";
               printf "   index:=0;\n";
               printf "   for i: msgLen do\n";
               printf "     if (msgs[i].msgType = key) then\n";
               printf "       if (msgs[i].k.encType = PK & msgs[i].k.ag = %s) then\n" role;
               printf "         index:=i;\n";
               printf "       endif;\n";
               printf "     endif;\n";
               printf "   endfor;\n";
               printf "   if(index=0) then\n";
               printf "     msg_end := msg_end + 1 ;\n";
               printf "     index := msg_end;\n";
               printf "     msgs[index].msgType := key;\n";
               printf "     msgs[index].k.encType:=PK; \n";
               printf "     msgs[index].k.ag:=%s; \n" role;
               printf "   endif;\n";
               printf "   num:=index;\n";
               printf "   msg:=msgs[index];\n";
               printf "  end;\n";
  |`Var n -> printf " Var index : indexType;\n begin\n";
             printf "   index:=0;\n";
             printf "   for i: msgLen do\n";
             printf "     if(msgs[i].msgType=nonce) then\n";
             printf "       if(msgs[i].noncePart=%s) then\n" n;
             printf "         index:=i\n";
             printf "       endif;\n";
             printf "     endif\n";
             printf "   endfor;\n";
             printf "   if(index=0) then\n";
             printf "     msg_end := msg_end + 1 ;\n";
             printf "     index := msg_end;\n";
             printf "     msgs[index].msgType := nonce;\n";
             printf "     msgs[index].noncePart:=%s; \n" n;
             printf "   endif;\n";
             printf "   num:=index;\n";
             printf "   msg:=msgs[index];\n";
             printf "  end;\n";
  |_ -> ()
;;

let genIsPatCode m i patList =
  let atoms = getAtoms m in
  printf "---pat%d: %a \nprocedure isPat%d(msg:Message; Var flag:boolean);\n" i output_msg m i;
  match m with 
  |`Aenc(m1,k1) ->begin
                  let i1= getPatNum m1 patList in
                  let i2= getPatNum k1 patList in
                  printf "  var flag1,flagPart1,flagPart2 : boolean;\n  begin\n";
                  printf "    flag1 := false;\n";
                  printf "    flagPart1 := false;\n";
                  printf "    flagPart2 := false;\n";
                  printf "    if (msg.msgType = aenc) then\n";
                  printf "      isPat%d(msgs[msg.aencMsg],flagPart1);\n" i1;
                  printf "      isPat%d(msgs[msg.aencKey],flagPart2);\n" i2;
                  printf "      if (flagPart1 & flagPart2) then \n" ;
                  printf "        flag1 := true;\n";
                  printf "      endif;\n";
                  printf "    endif;\n";
                  printf "    flag := flag1;\n  end;\n";
                  end;
  |`Concat msgs ->begin
                  printf "  var flag1 : boolean;\n  begin\n";
                  printf "    flag1 := false;\n";
                  printf "    if (msg.msgType = concat) then \n";
                  let type2str = match List.nth atoms 1 with
                              |Some (`Var n) -> "nonce"
                              |Some (`Str r) -> "agent"
                              |_ -> ""
                  in
                  printf "      if (msgs[msg.concatPart1].msgType=nonce & msgs[msg.concatPart2].msgType=%s) then \n" type2str;
                  printf "        flag1 := true;\n";
                  printf "      endif;\n";
                  printf "    endif;\n";
                  printf "    flag := flag1;\n";
                  printf "  end;\n";
                  end;
  |`Str s ->begin
            printf "  var flag1 : boolean;\n  begin\n";
            printf "    flag1 := false;\n";
            printf "    if (msg.msgType = agent) then\n";
            printf "      flag1 := true;\n";
            printf "    endif;\n";
            printf "    flag := flag1;\n  end;\n";
            end;
  |`Pk role ->begin
              printf "  var flag1 : boolean;\n  begin\n";
              printf "    flag1 := false;\n";
              printf "    if (msg.msgType = key) then\n";
              printf "      if (msg.k.encType = PK) then\n";
              printf "        flag1 := true;\n";
              printf "      endif;\n";
              printf "    endif;\n";
              printf "    flag := flag1;\n  end;\n";
              end;
  |`Var n ->begin
            printf "  var flag1 : boolean;\n  begin\n";
            printf "    flag1 := false;\n";
            printf "    if (msg.msgType = nonce) then\n";
            printf "      flag1 := true;\n";
            printf "    endif;\n";
            printf "    flag := flag1;\n  end;\n";
            end;
  |_ -> ()
;;
(* gen procedure cons msg *)
let genCons m i patList =
  let atoms = getAtoms m in
  let j = getPatNum m patList in
  printf "procedure cons%d(%s; Var msg:Message; Var num:indexType);\n" i (atoms2Parms atoms);
  printf "  begin\n";
  printf "    clear msg;\n    clear num;\n";
  printf "    lookAddPat%d(%s,msg,num);\n" j (atom2Str atoms);
  printf "  end;\n"
;;

let genDestruct m i =
  let atoms =getAtoms m in 
  printf "procedure destruct%d(msg:Message; %s);\n" i (atoms2Parms1 atoms);
  match m with
  |`Aenc(m1,k1) ->begin
                  let keyAg=match k1 with
                           |`Pk role -> role
                           |_ -> "null"
                  in                  
                  match m1 with
                  |`Concat msgs ->printf "  var k1:KeyType;\n";
                                  printf "      msg1,msgNum1,msgNum2:Message;\n  begin\n";
                                  printf "    clear msg1;\n";
                                  printf "    k1 := msgs[msg.aencKey].k;\n";
                                  printf "    %s := k1.ag;\n" keyAg;
                                  printf "    msg1:=msgs[msg.aencMsg];\n";
                                  printf "    msgNum1:=msgs[msg1.concatPart1];\n";
                                  printf "    msgNum2:=msgs[msg1.concatPart2];\n";
                                  List.iteri ~f:(fun i m'-> match m' with
                                              |`Var n -> printf "    %s:=msgNum%d.noncePart;\n" n (i+1)
                                              |`Str r -> printf "    %s:=msgNum%d.ag;\n" r (i+1)
                                              |_ ->()) msgs;
                                  printf "  end;\n"
                  |`Var n -> printf "  var k1:KeyType;\n";
                             printf "      msg1,msgNum1,msgNum2:Message;\n  begin\n";
                             printf "    clear msg1;\n";
                             printf "    k1 := msgs[msg.aencKey].k;\n";
                             printf "    %s := k1.ag;\n" keyAg;
                             printf "    msg1:=msgs[msg.aencMsg];\n";
                             printf "    %s:=msg1.noncePart;\n" n;
                             printf "  end;\n"
                  |_ -> ()                  
                  end;
  |_ -> ()
;;

let genGet_msgNoCode () =
  printf "procedure get_msgNo(msg:Message; Var num:indexType);\n";
  printf "  var index:indexType;\n  begin\n";
  printf "    index:=0;\n";
  printf "    for i: msgLen do\n";
  printf "      if (msgs[i].msgType = msg.msgType) then\n";
  printf "        if ( (msg.msgType=agent & msgs[i].ag=msg.ag)
          | (msg.msgType=nonce & msgs[i].noncePart=msg.noncePart)
          | (msg.msgType=key & (msgs[i].k.encType=msg.k.encType & msgs[i].k.ag=msg.k.ag))
          | (msg.msgType=aenc & (msgs[i].aencMsg=msg.aencMsg & msgs[i].aencKey=msg.aencKey))
          | (msg.msgType=senc & (msgs[i].sencMsg=msg.sencMsg & msgs[i].sencKey=msg.sencKey))
          ) then \n";
  printf "          index:=i;\n";                 
  printf "        endif;\n";
  printf "      endif;\n";
  printf "    endfor;\n";
  printf "    num := index;\n";
  printf "  end;\n";
;;

let genPrintMsgCode () =
  printf "procedure printMsg(msg:Message);\n";
  printf "  begin\n";
  printf "    if msg.msgType=null then\n";
  printf "      put \"null\\n\";\n ";
  printf "    elsif msg.msgType=agent then\n";
  printf "      put msg.ag;\n ";
  printf "    elsif msg.msgType=nonce then\n";
  printf "      put msg.noncePart;\n ";
  printf "    elsif msg.msgType=key then\n";
  printf "      if msg.k.encType=PK then\n";
  printf "        put \"PK(\";\n ";
  printf "        put msg.k.ag;\n ";
  printf "        put \")\";\n ";
  printf "      elsif msg.k.encType=SK then\n";
  printf "        put \"SK(\";\n ";
  printf "        put msg.k.ag;\n ";
  printf "        put \")\";\n ";
  printf "      elsif msg.k.encType=Symk then\n";
  printf "        put \"SymK(\";\n ";
  printf "        put msg.k.ag;\n ";
  printf "        put \")\";\n ";
  printf "      endif;\n";
  printf "    elsif msg.msgType=aenc then\n";
  printf "      put \"aenc{\";\n";
  printf "      printMsg(msgs[msg.aencMsg]);\n";
  printf "      put \",\";\n";
  printf "      printMsg(msgs[msg.aencKey]);\n";
  printf "      put \"}\\n\";\n";
  printf "    elsif msg.msgType=senc then\n";
  printf "      put \"senc{\";\n";
  printf "      printMsg(msgs[msg.sencMsg]);\n";
  printf "      put \",\";\n";
  printf "      printMsg(msgs[msg.sencKey]);\n";
  printf "      put \"}\\n\";\n";
  printf "    elsif msg.msgType=concat then\n";
  printf "      put \"concat(\";\n";
  printf "      printMsg(msgs[msg.concatPart1]);\n";
  printf "      put \",\";\n";
  printf "      printMsg(msgs[msg.concatPart2]);\n";
  printf "      put\")\";\n";
  printf "    endif;\n";
  printf "  end;\n";
;;
let genInverseKeyCode ()=
  printf "function inverseKey(msgK:Message):Message;\n";
  printf "  var key_inv:Message;\n  begin\n";
  printf "    key_inv.msgType := null;\n";  
  printf "    if (msgK.msgType=key) then\n";
  printf "      key_inv.msgType := msgK.msgType;\n";
  printf "      key_inv.k.ag := msgK.k.ag;\n";
  (*printf "      key_inv.k.encTyp:= msgK.k.encTyp;\n";*)
  printf "      if (msgK.k.encType=PK) then\n";
  printf "        key_inv.k.encType := SK;\n";
  printf "      elsif (msgK.k.encType=SK) then\n";
  printf "        key_inv.k.encType := PK;\n";
  printf "      endif;\n";
  printf "    endif;\n";
  printf "    return key_inv;\n  end;\n";
;;

let genLookUpCode () =
  printf "function lookUp(msg: Message): indexType;\n";
  printf "  var index : indexType;\n  begin\n";
  printf "    index:=0;\n";
  printf "    for i: indexType do\n";
  printf "      if(msgs[i].msgType=msg.msgType) then\n";
  printf "        if(msgs[i].msgType=agent & msgs[i].ag=msg.ag) then\n";
  printf "          index := i;\n";
  printf "        elsif(msgs[i].msgType=nonce & msgs[i].noncePart=msg.noncePart) then\n";
  printf "          index := i;\n";
  printf "        elsif(msgs[i].msgType=key & (msgs[i].k.encType=msg.k.encType & msgs[i].k.ag=msg.k.ag)) then\n";
  printf "          index := i;\n";
  printf "        elsif(msgs[i].msgType = aenc & (msgs[i].aencKey=msg.aencKey & msgs[i].aencMsg=msg.aencMsg)) then\n";
  printf "          index := i;\n";
  printf "        elsif(msgs[i].msgType = senc & (msgs[i].sencKey=msg.sencKey & msgs[i].sencMsg=msg.sencMsg)) then\n";
  printf "          index := i;\n";
  printf "        elsif(msgs[i].msgType = concat & (msgs[i].concatPart1=msg.concatPart1 & msgs[i].concatPart2=msg.concatPart2)) then\n";
  printf "          index := i;\n";
  printf "        endif;\n";
  printf "      endif;\n";
  printf "    endfor;\n";
  printf "    return index;\n  end;\n";
;;

let rec constructMsgByPats m patList =
  let i = getPatNum m patList in
  match m with
  |`Aenc(m1,k1) -> let i1 = getPatNum m1 patList in
                   let i2 = getPatNum k1 patList in
                   let atoms = getAtoms m1 in
                   printf "function construct%dBy%d%d(msgNo%d,msgNo%d:indexType):indexType;\n" i i1 i2 i1 i2;
                   printf "  var index : indexType;\n";
                   printf "      %s;\n" (atoms2Str1 atoms);
                   printf "      k_ag : AgentType;\n";
                   printf "      msg : Message;\n  begin\n";
                   printf "   index := 0;\n";
                   printf "   %s;\n" (atoms2Statm atoms m1 patList);
                   printf "   k_ag := msgs[msgNo%d].k.ag;\n" i2;
                   printf "   lookAddPat%d(%s,k_ag,msg,index);\n" i (atoms2Str2 atoms);
                   printf "   return index;\n" ;
                   printf "  end;\n";

  |`Concat msgs -> let i1 = match List.nth msgs 0 with
                           |Some x -> getPatNum x patList
                           |None -> 0
                   in
                   let i2 = match List.nth msgs 1 with
                           |Some x -> getPatNum x patList
                           |None -> 0
                   in
                   let atoms = getAtoms m in
                   let (i1,i2) = if i1 <> i2 then (i1,i2) else (i1+1,i2+2) in
                   printf "function construct%dBy%d%d(msgNo%d,msgNo%d:indexType):indexType;\n" i i1 i2 i1 i2;
                   printf "  var index : indexType;\n";
                   printf "      %s;\n" (atoms2Str1 atoms);
                   printf "      msg : Message;\n  begin\n";
                   printf "     index := 0;\n" ;
                   printf "     %s;\n" (atoms2Statm1 atoms patList);
                   printf "     lookAddPat%d(%s,msg,index);\n" i (atoms2Str2 atoms);
                   printf "   return index;\n" ;
                   printf "  end;\n";
  |_ -> ()

and atoms2Str1 atoms=
  String.concat ~sep:";\n      " (List.map ~f:(fun atom -> match atom with
                |`Var n -> "loc"^n^":NonceType"
                |`Str r -> "loc"^r^":AgentType"
                |_ -> "") atoms)

and atoms2Str2 atoms=
    String.concat ~sep:"," (List.map ~f:(fun atom -> match atom with
    |`Var n -> "loc"^n
    |`Str r -> "loc"^r
    |_ -> "") atoms)               
and atoms2Statm atoms m patList=
  let j = getPatNum m patList in
  String.concat ~sep:";\n   " (List.mapi ~f:(fun i atom -> match atom with
              |`Var n -> "loc"^n^":= msgs[msgs[msgNo"^ string_of_int j^"].concatPart"^(string_of_int (i+1))^"].noncePart"
              |`Str r -> "loc"^r^":= msgs[msgs[msgNo"^ string_of_int j^"].concatPart"^(string_of_int (i+1))^"].ag"
              |_ -> "") atoms)

and atoms2Statm1 atoms patList =
  let nums = List.map ~f:(fun atom -> getPatNum atom patList) atoms in
  let n = match List.nth nums 0 with
         |Some x -> x
         |None -> 0
  in
  let isEqual = match List.reduce ~f:(&&) (List.map ~f:(fun num -> num = n) nums) with 
                | Some x -> x
                | None -> false
  in
  let nums1 = if isEqual then List.mapi ~f:(fun i n -> n+i+1) nums else nums
  in
  let strList = List.map2_exn ~f:(fun atom i -> match atom with
                                  |`Var n -> (*let i = getPatNum atom patList in*)
                                            "loc"^n^":= msgs[msgNo"^(string_of_int i)^"].noncePart"
                                  |`Str r ->(*let i = getPatNum atom patList in*)
                                            "loc"^r^":= msgs[msgNo"^(string_of_int i)^"].ag"
                                  |_ -> "" ) atoms nums1
  in
  String.concat ~sep:";\n     " strList
;;
let genExistCode () =
  printf "function exist(PatnSet:msgSet; msgNo:indexType):boolean;\n";
  printf "  var flag:boolean;\n  begin\n";
  printf "    flag := false;\n";
  printf "    for i:indexType do\n";
  printf "      if (PatnSet.content[i] = msgNo) then \n";
  printf "         flag := true;\n";
  printf "      endif; \n";
  printf "    endfor;";
  printf "    return flag;\n";
  printf "  end;\n";
;;
(* print procedures and functions. *)
let print_procedures outc actions knws =
  match actions with
  |`Null -> output_string outc "null"
  |`Actlist arr ->let patlist = getPatList actions in    (* get all patterns from actions *)
                  let non_dup = del_duplicate patlist in (* delete duplicate *)
                  let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *) 
                  List.iteri ~f:(fun i pat -> genSynthCode pat (i+1) non_equivalent;
                                              genIsPatCode pat (i+1) non_equivalent) non_equivalent;
                  (*genCons / genDestruct by actions *)
                  let msgs = getMsgs actions in
                  List.iteri ~f:(fun i m -> genCons m (i+1) non_equivalent;
                                            genDestruct m (i+1)) msgs;
                  (* print get_msgNo: procedure get_msgNo(msg:Message; Var num : indexType); *)
                  genGet_msgNoCode ();
                  genPrintMsgCode ();
                  (* print functions: inverseKey/lookUp/constructsAbyBC*)
                  genInverseKeyCode ();
                  genLookUpCode ();
                  List.iter ~f:(fun pat -> constructMsgByPats pat non_equivalent) non_equivalent;
                  genExistCode ();
  |`Act (seq,r1,r2,n,m) ->begin
                          let patlist = getPatList actions in    (* get all patterns from actions *)
                          let non_dup = del_duplicate patlist in (* delete duplicate *)
                          let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *) 
                          List.iteri ~f:(fun i pat -> genSynthCode pat (i+1) non_equivalent) non_equivalent;
                          let msgs = getMsgs actions in
                          List.iteri ~f:(fun i m -> genCons m (i+1) non_equivalent;
                                                    genDestruct m (i+1)) msgs
                          end;
  
;;

(*-----------------------------------------------*)
(* records of roleA and roleB*)
let printRecords outc r m =
  match m with
  |`Concat msgs -> begin
                  List.iteri ~f:(fun i m1 -> 
                  match m1 with
                  |`Str r -> printf "   %s : AgentType;\n" r
                  |`Var n -> printf "   %s : NonceType;\n" n;                               
                  |_ -> printf "null\n") msgs;
                  printf "   loc_Na : NonceType;\n";
                  printf "   loc_Nb : NonceType;\n";
                  printf "   loc_A : AgentType;\n";
                  printf "   loc_B : AgentType;\n";
                  printf "   st : %sStatus;\n" r;
                  end
  |_ -> printf "null\n"
;;

let rec printMurphiRecords outc knw =
  match knw with
  |`Null -> output_string outc "null"
  | `Knowledge (r,m) -> printf "  Role%s : record\n" r;
                        printRecords outc r m;
                        printf "  end;\n";
  | `Knowledge_list knws -> List.iter ~f:(fun k -> printMurphiRecords outc k) knws
;;

(*procedures and functions 
  rules of roleA and roleB
  rules of intruder
  rules of encryption/decryption/enconcat/deconcat*)
let trActionsToMurphi outc actions knws =
  match actions with
  |`Null -> output_string outc "null"
  |`Act (seq,r1,r2,n,m) -> print_murphiRule outc actions knws
  |`Actlist arr -> print_procedures outc actions knws; (* print prcedures and functions. *)                   
                   print_murphiRule outc actions knws; (* print rules for roleA and roleB *)
                   print_murphiRule_ofIntruder outc actions knws; (* print rules for intruder *)
		               print_murphiRules_EncsDecs outc actions knws;(* encryption and decryption rules, enconcat and deconcat rules *)
;;

let print_startstate r num m knws =
  let msgOfKnws = getMsgOfRoles knws in
  List.iter ~f:(fun m1 -> if isSamePat m m1 then
                            match (m,m1) with
                            |(`Concat msgs,`Concat msgs1) -> let strs = (List.map2_exn ~f:(fun m' m1' -> 
                                                                match (m',m1') with
                                                                |(`Var n,`Var n1) -> "role"^r^"["^(string_of_int num)^"]."^n1^" := "^n^";\n"
                                                                |(`Str role,`Str role1) ->"role"^r^"["^(string_of_int num)^"]."^ role1^" := "^role^";\n" 
                                                                |_ -> "error: mismatching!\n") msgs msgs1) 
                                                              in
                                                              List.iter ~f:(fun s -> printf "  %s" s) strs;
                                                              printf "  role%s[%d].st := %s1;\n" r num r
                            |_ -> printf "null\n"
                          else printf "" ) msgOfKnws;
  let str = sprintf "  intruder.B := Bob;
  for i:chanNums do
    ch[i].empty := true;
  endfor;

  for i: indexType do
    emit[i]:=false;
  endfor;

  for i:indexType do
    msgs[i].msgType := null;
  endfor;

  msg_end := 0;
  for i:msgLen do
    pat1Set.content[i] := 0;
    pat2Set.content[i] := 0;
    pat3Set.content[i] := 0;
    pat4Set.content[i] := 0;
    pat5Set.content[i] := 0;
    pat6Set.content[i] := 0;
    pat7Set.content[i] := 0;
    pat8Set.content[i] := 0; 
  endfor;

  pat1Set.length:= 0;
  pat2Set.length:= 0;
  pat3Set.length:= 0;
  pat4Set.length:= 0;
  pat5Set.length:= 0;
  pat6Set.length:= 0;
  pat7Set.length:= 0;
  pat8Set.length:= 0;

  for i:indexType do 
    Spy_known[i] := false;
  endfor;

  msg_end:=msg_end+1;
  msgs[msg_end].msgType := key;
  msgs[msg_end].k.ag:=intruderType;
  msgs[msg_end].k.encType:=SK;  ---- SK(intruserType) for intruder to decrypt msg form Alice 

  pat1Set.length := pat1Set.length + 1; ---A,B
  pat1Set.content[pat1Set.length] :=msg_end;
  Spy_known[msg_end] := true;

  msg_end := msg_end+1;  ---pk(B)
  msgs[msg_end].msgType := key;
  msgs[msg_end].k.ag:=Bob;
  msgs[msg_end].k.encType:=PK;

  pat1Set.length := pat1Set.length + 1; ---A,B
  pat1Set.content[pat1Set.length] :=msg_end;
  Spy_known[msg_end] := true;

  eve_end := 0;  ---?2
  for i:eventNums do
     systemEvent[i].eveType := empty;
  endfor;"
  in
  printf "%s" str
;;
(*startstate of roleA and role B*)
let rec printMuriphiStart outc env k =
  match env with
  |`Null -> output_string outc "null"
  (*|`Env_rlist rlist -> printf "print the definition of agents:\n %a\n" output_msg rlist
        |`Env_nlist nlist -> printf "print the definition of nonces:\n %a\n" output_msg nlist*)
  |`Env_agent (r,num,m) -> print_startstate r num m k;(* print startstates *)
  |`Envlist envs -> List.iter ~f:(fun e -> printMuriphiStart outc e k) envs
  |_ -> output_string outc "null"
;;

let rec printGoal2Murphi outc g =
  match g with
  |`Null -> output_string outc "null\n"
  |`Secretgoal (seq,m) -> printSecGoal (seq,m)
  |`Agreegoal (seq,r1,r2,m) -> printAgreeGoal (seq,r1,r2,m)
  |`Goallist gols -> List.iter ~f:(fun g -> printGoal2Murphi outc g) gols

and printSecGoal (seq,m) =
  printf "invariant \"%s\"\n" seq;
  printf "  forall i:msgLen do\n";
  printf "    (msgs[i].msgType=nonce & msgs[i].noncePart = %a)\n" output_msg m;
  printf "     ->\n";
  printf "      Spy_known[i] = false\nend;\n"

and printAgreeGoal (seq,r1,r2,m) =
  printf "/*invariant \"%s\"\n" seq;
  printf "  forall i:eventNums do \n";
  printf "    forall j:eventNums do \n";
  printf "      (systemEvent[i].eveType = receive & \n"; (* false means receive *)
  printf "       systemEvent[i].msg.noncePart = %a) \n" output_msg m;
  printf "      ->\n";
  printf "      (systemEvent[i].eveType = send & \n";  (* true means send *)
  printf "      systemEvent[i].receiver = systemEvent[j].receiver & \n";
  printf "      systemEvent[i].msg.noncePart = systemEvent[j].msg.noncePart) \nend;\n*/";
;;

let printMurphiConsAndType outc k =
  (* print const *)
  printf "const\n";
  printf "  roleANum:1;\n";
  printf "  roleBNum:1;\n";
  printf "  totalFact:20;\n";
  printf "  chanNum:3;\n";
  printf "  eventNum:30;\n";

  (* print type *)
  printf "type\n";
  printf "  indexType:0..totalFact;\n";
  printf "  roleANums:1..roleANum;\n";
  printf "  roleBNums:1..roleBNum;\n";
  printf "  msgLen:0..totalFact;\n";
  printf "  chanNums:1..chanNum;\n";
  printf "  eventNums:0..eventNum;\n";
  printf "  AgentType : enum{Alice,Bob,intruderType};\n"; (* the roles should be derived by init knws*)
  printf "  NonceType : enum{Na,Nb};\n";  (* the nonces should be derived by init knws *)
  printf "  EncryptType : enum{PK,SK,Symk};\n";
  printf "  KeyType: record \n";
  printf "    encType: EncryptType; \n";  
  printf "    ag: AgentType; \n  end;\n";  
  printf "  AStatus : enum {A1,A2,A3};\n"; (* the status should be derived by A's strand *)
  printf "  BStatus : enum {B1,B2,B3};\n"; (* the status should be derived by B's strand *)
  printf "  MsgType : enum {null,agent,nonce,key,aenc,senc,concat,hash};\n"; (* message type *)
  printf "  EveType : enum {empty,send,receive};\n"; (* event type *)
  printf "  Message: record\n";
  printf "    msgType : MsgType;\n";
  printf "    ag : AgentType;\n";
  printf "    noncePart : NonceType;\n";
  printf "    k : KeyType;\n";
  printf "    aencMsg : indexType;\n";
  printf "    aencKey : indexType;\n";
  printf "    sencMsg : indexType;\n";
  printf "    sencKey : indexType;\n";
  printf "    concatPart1 : indexType;\n";
  printf "    concatPart2 : indexType;\n  end;\n";
  printf "  Channel: record\n";
  printf "    msg : Message;\n";
  printf "    sender : AgentType;\n";
  printf "    receiver : AgentType;\n";
  printf "    empty : boolean;\n  end;\n\n";

  printMurphiRecords outc k;(*print records of roleA and roleB by knws*)

  printf "  RoleIntruder: record\n";
  printf "    B : AgentType;\n";
  printf "  end;\n\n";
  printf "  msgSet: record\n";
  printf "    content : Array[msgLen] of indexType;\n";
  printf "    length : msgLen;\n  end;\n\n";

  printf "  Event: record\n";
  printf "    eveType : EveType;\n";
  printf "    sender  : AgentType;\n";
  printf "    receiver: AgentType;\n";
  printf "    msg	: Message;\n  end;\n\n";

  (*print murphi vars *)
  printf "var\n";
  printf "  ch : Array[chanNums] of Channel;\n";
  printf "  roleA : Array[roleANums] of RoleA;\n";
  printf "  roleB : Array[roleBNums] of RoleB;\n";
  printf "  intruder    : RoleIntruder;\n";
  printf "  msgs : Array[indexType] of Message;\n";
  printf "  msg_end: indexType;\n\n";
  printf "  pat1Set: msgSet;\n";
  printf "  pat2Set: msgSet;\n";
  printf "  pat3Set: msgSet;\n";
  printf "  pat4Set: msgSet;\n";
  printf "  pat5Set: msgSet;\n";
  printf "  pat6Set: msgSet;\n";
  printf "  pat7Set: msgSet;\n";
  printf "  pat8Set: msgSet;\n\n";
  printf "  Spy_known: Array[indexType] of boolean;\n";
  printf "  systemEvent   : array[eventNums] of Event;\n";
  printf "  eve_end       : eventNums;\n";
  printf "  emit: Array[indexType] of boolean;\n\n";
;;

let output_murphiCode outc pocol =
  match pocol with
  |`Null -> output_string outc "null"
  |`Pocol (k,a,env,g) ->printMurphiConsAndType outc k;(*print murphi const/type*)
                        trActionsToMurphi outc a k;
                        output_string outc "startstate\n";
                        printMuriphiStart outc env k;
                        output_string outc "end;\n";
                        printGoal2Murphi outc g
                   (* let ms = getMsgOfRoles k [] in
                    List.iter ~f:(fun m -> output_msg outc m; printf "\n"; ) ms*)
;;

let genCode outc value =
  match value with
  |`Null -> output_string outc "null"
  |`Protocol (n,p) -> printf "---Murphi Code:\n%a" output_murphiCode p
;;









