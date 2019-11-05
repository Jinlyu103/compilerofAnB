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
  | `Null
];;
type actions = action list;;

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

(* part 6 : Transforming the i-th action into murphy rule *)
let rec getAtoms msg =
  match msg with
  |`Null   	-> [`Null]
  |`Var id 	-> [`Var id]
  |`Str s 	-> [`Str s]
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
(* part 7 Extracting msg patterns from actions and its sub-patterns 
let extractMsg (seq,r1,r2,n,m) = m;;

let extractSq actlist =
  List.map ~f:(extractMsg) actlist
;;

let rec isSamePattern m1 m2 =
  match m1 with
  | Crypt(k1,m1') -> match m2 with
		      | Crypt(k1,m2') -> if (isSameKey k1 k2) and isSamePattern m1' m2'
					 then true else false
		      | _ -> false
  | Key(k1) -> match m2 with
		| Key(k2) -> if isSameKey k1 k2 then true else false
		| _ -> false
  | Nonce(n1) -> match m2 with
  		| Nonce(n1) -> true
		| _ -> false
;;
*)
(* part 8 *)
let msg1 = `Aenc (`Concat [`Var "nonce(a)"; `Str "A"],`Pk "B");;
let msg2 = `Aenc(`Concat([`Var("nonce(a)");`Var("nonce(b)")]),`Pk "A");;
let msg3 = `Aenc(`Var("nonce(b)"),`Pk("B"));;

let actA1 = (Plus,msg1);;
let actA2 = (Minus,msg2);;
let actA3 = (Plus,msg3);;

let acts = [actA1;actA2;actA3];;

let getMsg act = 
  match act with
  | (Plus, m) | (Minus,m) -> m
;;
let () = 
  let actlength = List.length acts in
  List.iteri ~f:(fun i act -> trans act (getMsg act) (i+1) "A" actlength) acts 

;;

(*
let actlist = [ ("seq1","A","B","n1",`Aenc(`Concat([`Var("nonce(a)");`Str("A")]),`Pk("B")));
		("seq2","B","A","n2",`Aenc(`Concat([`Var("nonce(a)");`Var("nonce(b)")]),`Pk("A")));
		("seq3","A","B","n3",`Aenc(`Var("nonce(b)"),`Pk("B")))];;

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

*)

