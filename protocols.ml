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
  (*|`Nonce na    -> [`Nonce na]*)
  |`Concat msgs -> getEachAtoms msgs
  |`Hash m 	-> getAtoms m
  |`Aenc (m1,m2)-> List.concat (List.map ~f:getAtoms [m1;m2])
  |`Senc (m1,m2)-> List.concat (List.map ~f:getAtoms [m1;m2])
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
  printf "role%s[i].st = %s%d & ch[%d].empty = true \n==>" rolename rolename i i
;;

let genRecvGuard rolename i =
  printf "role%s[i].st = %s%d & ch[%d].empty = false & ch[%d].receiver = role%s[i].%s\n==>" rolename rolename i i i rolename rolename
;;

let print_atom a =
  match a with
  |`Var id -> printf "%s" id
  |`Str s  -> printf "%s" s
 (* |`Nonce na-> printf "%s" na*)
  |`Null   -> printf " "
;;

let print_cons_atoms rolename i atoms =
  List.iteri ~f:(fun j a -> 
		if (i = 0 && j = 0)|| j <> 0 then 
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
  printf "   ch[%d].receiver := intruderType;\n" i;
  printf "   role%s[i].st := %s%d;\n" rolename rolename ((i mod length)+1) ; 
  printf "   put \"%d. %s -> I\\n\";\n   printMsg(ch[%d].msg);\n" i rolename i;
  printf "end;\n";
  (* (i+1) should be (i+1) % length of the strand list *)
;;

let geti_th_atom atoms i =
  match List.nth atoms i with
  | None -> `Null
  | Some x -> x
;;
(* Get initial knowledge of a certain role *)
let rec getKnws knws rolename =
  match knws with
  | `Null -> []
  | `Knowledge (r,m) -> if r = rolename then getAtoms m else []
  | `Knowledge_list ks -> getKnw ks rolename
and getKnw ks rolename =
  List.concat (List.map ~f:(fun k -> getKnws k rolename) ks)
;;

let genRecvAct rolename i atoms length knws=
  let knws_ofRl = getKnws knws rolename in
  printf "
var loc_A loc_B:AgentIdType;
    loc_Na,loc_Nb:NonceType;
    msgNo:IndexType;
    msg : Message;
begin
   clear msg;
   msg := ch[%d].msg;
   destruct%d(msg,loc_Na,loc_Nb,loc_A);\n" i i;
  printf "   if (loc_A=role%s[i]." rolename;
  print_atom (geti_th_atom knws_ofRl 0); 
  (* loc_A = roleA[i].A(which comes from initial knws of roleA, the same of Na of roleA[i].Na) *)
  printf " & loc_Na=role%s[i]." rolename;
  print_atom (geti_th_atom knws_ofRl 2);
  printf ") then
      ch[%d].empty:=true;\n   endif;\n" i;
  printf "   role%s[i].st := %s%d;\nend;\n" rolename rolename ((i mod length)+1);
;;

let trans act m i rolename length knws =
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
		genRecvAct rolename i atoms length knws;
	     end
;;

let genMsg act = 
  match act with
  | (Plus, m) | (Minus,m) -> m
;;

let print_murphiRule outc actions knws =  (*printf "murphi code"*)
  let rolelist = getRolesFromKnws knws [] in (* Get role list:[A;B;...] *)
  let actsOfAllRls = getActsList actions rolelist in  (* Get act list: [(sign,msg);(sign,msg);...] *)
  List.iteri ~f:(fun i r -> if i = 0 then
                              let acts = match List.nth actsOfAllRls i with
                                  | None -> []
                                  | Some a -> a
                              in
                              let lenActs = List.length acts in
                              List.iteri ~f:(fun j act -> match act with
                              | None -> output_string outc "null"
                              | Some a -> trans a (genMsg a) (j+1) r lenActs knws) acts ) rolelist
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
(*  |`Nonce n1	 -> begin 
		    match m2 with
		    |`Nonce n2 -> true 
		    | _ -> false
		    end*)
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
  (*|`Nonce na    -> [`Nonce na]*)
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

let print_murphiEncodeMsg outc actions knws = 
  match actions with
  | `Null -> output_string outc "null"
  | `Actlist arr -> let patlist = getPatList actions in    (* get all patterns from actions *)
                    let non_dup = del_duplicate patlist in (* delete duplicate *)
                    let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *) 
                    printf "Patterns:\n";
                    List.iteri ~f:(fun i pat -> encodeBody pat i ; printf "\n" ) non_equivalent
  | `Act (seq,r1,r2,n,m) -> let patlist = getPatList actions in    (* get all patterns from actions *)
		    	    let non_dup = del_duplicate patlist in (* delete duplicate *)
			    let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *) 
			    printf "Patterns:\n";
			    List.iteri ~f:(fun i pat -> match pat with
				      |`Null -> printf "null"
				      |`Aenc (m1,k1) -> printf "pat%d: Aenc(%a,key)\n" i output_msg m1
				      |`Senc (m1,k1) -> printf "pat%d: Senc(%a,key)\n" i output_msg m1
				      |`Hash m -> printf "pat%d: Hash(%a)\n" i output_msg m
				      |`Concat msgs -> printf "pat%d: Concat\n" i; List.iteri ~f:(fun j m -> printf "   (%d: %a\n" j output_msg m) msgs
				      |`Var n -> printf "pat%d: Nonce(%a)\n" i output_msg (`Var n)
				      |`Str s -> printf "pat%d: Agent(%a)\n" i output_msg (`Str s)
				      |`Pk role ->printf "pat%d: %a\n" i output_msg (`Pk role) 
				      |`Sk role ->printf "pat%d: %a\n" i output_msg (`Sk role) ) non_equivalent
;;
(*-----------------------------------------------*)
let trActionsToMurphi outc actions knws =
  match actions with
  |`Null -> output_string outc "null"
  |`Act (seq,r1,r2,n,m) -> print_murphiRule outc actions knws
  |`Actlist arr -> print_murphiRule outc actions knws; 
		               (*printf "\nTo genetate each message pattern:\n";*)
   		             (*print_murphiEncodeMsg outc actions knws;*)(* print_murphiMsgPat: generation code to encode each msg pattern *)
;;
let output_murphiCode outc pocol =
  match pocol with
  |`Null -> output_string outc "null"
  |`Pocol (k,a) -> trActionsToMurphi outc a k
;;

let genCode outc value =
  match value with
  |`Null -> output_string outc "null"
  |`Protocol (n,p) -> printf "Murphi Code:\n%a" output_murphiCode p
;;









