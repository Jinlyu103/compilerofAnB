
open Core.Std;;
(* part 1 type definition *)
type label = string;;
type roleName = string;;
type identifier = string;;
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
  | `Act_list of action list
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

let rec transpose list = 
  match list with
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
(*
let compileSq actlist rolename =
 let str_list = List.map ~f:(fun a -> compileAct a rolename) actlist in
 remove str_list None
;;
let get_strand actlist rolelist =
  List.map ~f:(fun rolename -> compileSq actlist rolename) rolelist
;;
*)
(* Print msgs *)
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

(* print actions *)
let rec output_action outc actions knws = 
  let rolelist = getRolesFromKnws knws [] in
  match actions with
  | `Null -> output_string outc "null"
  | `Act_list arr ->  print_actionlist outc arr knws
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
  | `Act_list arr -> []
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

(* part 3 *)
let output_pocol outc value = 
  match value with
  | `Null       -> output_string outc "null"
  | `Protocol (n,p)  -> printf "Protocol %s:\n%a\nEND" n output_pocolcontext p
;;














