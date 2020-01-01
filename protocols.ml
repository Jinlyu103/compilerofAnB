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

type pocolcontext = [
  | `Pocol of knowledge * action
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

(* get role's msg from knowledges : [msgofA;msgofB]*)
let rec getMsgOfRoles knws mlist =
  let rolelist = getRolesFromKnws knws [] in
  match knws with
  | `Null -> mlist
  | `Knowledge (r,m) -> if listwithout mlist m then m :: mlist else mlist
  | `Knowledge_list ks -> getMsgs ks mlist
and getMsgs ks mlist =
  List.concat (List.map ~f:(fun k -> getMsgOfRoles k mlist ) ks)
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

let rec genSendActofA rolename i atoms length =
  printf "var msg:Message;\n    msgNo:IndexType;\nbegin\n";
  printf "   clear msg;\n   cons%d(%s,msg,msgNo);\n" i (sendAtoms2Str rolename i atoms);
  printf "   ch[%d].empty := false;\n" i;
  printf "   ch[%d].msg := msg;\n" i;
  printf "   ch[%d].sender := role%s[i].%s;\n" i rolename rolename;
  printf "   ch[%d].receiver := role%s[i].B;\n" i rolename;
  printf "   role%s[i].st := %s%d;\n" rolename rolename ((i mod length)+1) ; 
  printf "   put \"%d. %s -> I\\n\";\n   printMsg(ch[%d].msg);\n" i rolename i;
  (*printf "   clear role%sloc_Nb\n" rolename;*)
  printf "end;\n";
  (* (i+1) should be (i+1) % length of the strand list *)

and sendAtoms2Str rolename i atoms =
  let s = "role" ^ rolename ^"[i]." in
  let loc = "role"^rolename^"loc_" in
  String.concat ~sep:"," (List.map ~f:(fun a ->                         
                        match a with
                        |`Var n -> if i = 1 then s ^ n else loc ^ n
                        |`Str r -> s ^ r
                        |`Pk r -> s ^ r
                        |_ -> "null" ) atoms)
;;

let rec genSendActofB rolename i atoms length =
  printf "var msg:Message;\n    msgNo:IndexType;\nbegin\n";
  printf "   clear msg;\n   cons%d(%s,msg,msgNo);\n" i (sendAtoms2Str rolename i atoms);
  printf "   ch[%d].empty := false;\n" i;
  printf "   ch[%d].msg := msg;\n" i;
  printf "   ch[%d].sender := role%s[i].%s;\n" i rolename rolename;
  printf "   ch[%d].receiver := roleBloc_A;\n" i;
  printf "   role%s[i].st := %s%d;\n" rolename rolename ((i mod length)+1) ; 
  printf "   put \"%d. %s -> I\\n\";\n   printMsg(ch[%d].msg);\n" i rolename i;
  printf "end;\n";
  (* (i+1) should be (i+1) % length of the strand list *)

and sendAtoms2Str rolename i atoms =
  let s = "role" ^ rolename ^"[i]." in
  let loc = "role"^rolename^"loc_" in
  String.concat ~sep:"," (List.mapi ~f:(fun j a ->                         
                        match a with
                        |`Var n -> if i = 2 && j = 1 then s ^ n else loc ^ n
                        |`Str r -> loc ^ r
                        |`Pk r -> loc ^ r
                        |_ -> "null" ) atoms)
;;

let rec genRecvActofA rolename i atoms length=
  printf "var msg:Message;\n    msgNo:IndexType;\nbegin\n";
  printf "   clear msg;\n   msg := ch[%d].msg;\n   destruct%d(msg,%s);\n" i i (recvAtoms2Str atoms rolename); (* (recvAtoms2Str atoms) *)
  printf "   if(%s)then\n" (atoms2Str atoms rolename);
  printf "     ch[%d].empty:=true;\n" i;
  printf "     role%s[i].st := %s%d;\n" rolename rolename ((i mod length)+1);
  printf "   endif;\n";
  printf "end;\n";

and recvAtoms2Str atoms rolename = 
  let loc = "role"^rolename^"loc_" in
  String.concat ~sep:"," (List.map ~f:(fun a ->
  match a with
  |`Var n -> loc ^ n
  |`Str r -> loc ^ r
  |`Pk r -> loc ^ r
  |_ -> "null") atoms)

and atoms2Str atoms rolename = 
  let loc = "role"^rolename^"loc_" in
  String.concat ~sep:"&" (List.mapi ~f:(fun j a ->
  match a with
  |`Var n -> if j <> 1 then loc ^ n ^ "=role" ^ rolename^ "[i]." ^ n else " true " 
  |`Str r -> loc ^ r ^ "=role" ^ rolename ^ "[i]." ^ r
  |`Pk r -> loc ^ r ^ "=role" ^ rolename ^ "[i]." ^ r
  |_ -> "null" ) atoms)
;;

let rec genRecvActofB rolename i atoms length = (*Knws *)
  printf "var msg:Message;\n    msgNo:IndexType;\nbegin\n";
  printf "   clear msg;\n   msg := ch[%d].msg;\n   destruct%d(msg,%s);\n" i i (recvAtoms2Str atoms rolename); (* (recvAtoms2Str atoms) *)
  printf "   if(%s)then\n" (atoms2Str atoms rolename i);
  printf "     ch[%d].empty:=true;\n" i;
  printf "     role%s[i].st := %s%d;\n" rolename rolename ((i mod length)+1);
  printf "   endif;\n";
  printf "end;\n";

and recvAtoms2Str atoms rolename = 
  let loc = "role"^rolename^"loc_" in
  String.concat ~sep:"," (List.map ~f:(fun a ->
  match a with
  |`Var n -> loc ^ n
  |`Str r -> loc ^ r
  |`Pk r -> loc ^ r
  |_ -> "null") atoms)

and atoms2Str atoms rolename i = 
  let loc = "role"^rolename^"loc_" in
  String.concat ~sep:"&" (List.mapi ~f:(fun j a ->
  match a with
  |`Var n -> if i <> 1 || j <> 0 then loc ^ n ^ "=role" ^ rolename^ "[i]." ^ n else "true" (* we don't want the string loc_Na, but cannot avoid it.*)
  |`Str r -> "true" (* loc ^ r ^ "=role" ^ rolename ^ "[i]." ^ r ? *)
  |`Pk r -> loc ^ r ^ "=role" ^ rolename ^ "[i]." ^ r
  |_ -> "null" ) atoms)
;;

let trans act m i rolename length =
  let atoms = getAtoms m in
  match (sign act) with
  | Plus -> begin 
              genRuleName rolename i;
              genSendGuard rolename i;
              genSendActofA rolename i atoms length;
            end
  | Minus -> begin
              genRuleName rolename i;
              genRecvGuard rolename i;
              genRecvActofA rolename i atoms length;
            end
;;

let genMsg act = 
  match act with
  | (Plus, m) | (Minus,m) -> m
;;

let print_murphiRule outc actions knws =  (*printf "murphi code"*)
  let rolelist = getRolesFromKnws knws [] in (* Get role list:[A;B;...] *)
  let actsOfAllRls = getActsList actions rolelist in  (* Get act list: [(sign,msg);(sign,msg);...] *)
  List.iteri ~f:(fun i r -> (*if i = 0  || i = 1 then*)
                            let acts = match List.nth actsOfAllRls i with (* Get the i-th act list of role_i*)
                                  | None -> []
                                  | Some a -> a
                            in
                            let lenActs = List.length acts in
                            List.iteri ~f:(fun j act -> match act with
                                                        | None -> output_string outc "null"
                                                        | Some a -> trans a (genMsg a) (j+1) r lenActs) 
                                          acts ) rolelist;
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
(* To determine whether two msgs are equivalent? *)
let rec allTrue boolList =
  match boolList with 
  | [] -> false
  | [b] -> if b = true then true else false
  | hd :: tl -> if hd = false then false else allTrue tl
;;
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

(* Extract msg from action *)
(*let extractMsg (seq,r1,r2,n,m) = m ;;*)
let rec getSubMsg msg =
  match msg with
  |`Null -> []
  |`Var nonce -> [`Var nonce]
  |`Str role  -> [`Str role]
  |`Concat msgs -> let submsgs = List.concat (List.map ~f:getSubMsg msgs) in
		               [msg]@msgs@submsgs
  |`Aenc (m,k) -> [msg]@[m;k]@(getSubMsg m)
  |`Senc (m,k) -> [msg]@[m;k]@(getSubMsg m)
  |`Hash m -> [msg]@(getSubMsg m)
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

(* 2019-12-17 *)
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
  printf "    end;\n";
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
  printf "      !Spy_known[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])]\n      ==>\n" i i1 i2 i1 i2;
  printf "      var concatMsgNo:indexType;\n";
  printf "      begin\n";
  printf "        concatMsgNo := construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j]);\n" i i1 i2 i1 i2;
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
  printf "    intruder.st := gotmsg%d;\n" i;
  printf "  end;\n"

and print_emitRules i j=
  printf "\n---rule of intruder to emit msg%d.\n" i;
  printf "ruleset i: msgLen do\n";
  if i mod 2 = 1 then
    printf "  ruleset j: bobNums do\n"
  else printf "  ruleset j: aliceNums do\n";
  printf "    rule \"intruderEmitMsg%d\"\n" i;
  printf "      ch[%d].empty=true & i <= pat%dSet.length & Spy_known[pat%dSet.content[i]]\n      ==>\n" i j j;
  printf "      begin\n";
  printf "        if (!emit[pat%dSet.content[i]] & msgs[msgs[pat%dSet.content[i]].aencKey].k.ag=intruder.B) then\n" j j;
  printf "          clear ch[%d];\n" i;
  printf "          ch[%d].msg:=msgs[pat%dSet.content[i]];\n" i j;
  printf "          ch[%d].sender:=intruderType;\n" i;
  if i mod 2 = 1 then
    printf "          ch[%d].receiver:=bobs[j].B;\n" i
  else printf "          ch[%d].receiver:=alices[j].A;\n" i;
  printf "          ch[%d].empty:=false;\n" i;
  printf "          emit[pat%dSet.content[i]] := true;\n" j;
  printf "          intruder.st:=emitted%d;\n" i;
  if i mod 2 = 1 then
    printf "          put \"ch[%d]: I->B\\n\";\n" i
  else printf "          put \"ch[%d]: I->A\\n\";\n" i;
  printf "          printMsg(ch[%d].msg);\n" i;
  printf "          put \"\\n\";\n";
  printf "        endif;\n";
  printf "      end;\n";
  printf "  endruleset\n";
  printf "endruleset\n";
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
                  printf "    index:=0;\n";
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
               printf "       if (msgs[i].k.encTyp = PK & msgs[i].k.ag = %s) then\n" role;
               printf "         index:=i;\n";
               printf "       endif;\n";
               printf "     endif;\n";
               printf "   endfor;\n";
               printf "   if(index=0) then\n";
               printf "     msg_end := msg_end + 1 ;\n";
               printf "     index := msg_end;\n";
               printf "     msgs[index].msgType := key;\n";
               printf "     msgs[index].k.encTyp:=PK; \n";
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

(* print procedures and functions. *)
let print_procedures outc actions knws =
  match actions with
  |`Null -> output_string outc "null"
  |`Actlist arr -> let patlist = getPatList actions in    (* get all patterns from actions *)
                  let non_dup = del_duplicate patlist in (* delete duplicate *)
                  let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *) 
                  List.iteri ~f:(fun i pat -> genSynthCode pat (i+1) non_equivalent) non_equivalent
  |`Act (seq,r1,r2,n,m) -> let patlist = getPatList actions in    (* get all patterns from actions *)
                          let non_dup = del_duplicate patlist in (* delete duplicate *)
                          let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *) 
                          List.iteri ~f:(fun i pat -> genSynthCode pat (i+1) non_equivalent) non_equivalent
;;

(*-----------------------------------------------*)
let trActionsToMurphi outc actions knws =
  match actions with
  |`Null -> output_string outc "null"
  |`Act (seq,r1,r2,n,m) -> print_murphiRule outc actions knws
  |`Actlist arr -> (*print_procedures outc actions knws;*) (* print prcedures and functions. *)
                   print_murphiRule outc actions knws; (* print rules for roleA and roleB *)
                   (*print_murphiRule_ofIntruder outc actions knws; *)(* print rules for intruder *)
		               (*print_murphiRules_EncsDecs outc actions knws;*)(* encryption and decryption rules, enconcat and deconcat rules *)
;;
let output_murphiCode outc pocol =
  match pocol with
  |`Null -> output_string outc "null"
  |`Pocol (k,a) -> trActionsToMurphi outc a k
                   (* let ms = getMsgOfRoles k [] in
                    List.iter ~f:(fun m -> output_msg outc m; printf "\n"; ) ms*)
;;

let genCode outc value =
  match value with
  |`Null -> output_string outc "null"
  |`Protocol (n,p) -> printf "Murphi Code:\n%a" output_murphiCode p
;;









