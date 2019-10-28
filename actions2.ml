open Core;;
open Core.Std;;

type label = string;;
type roleName = string;;
type identifier = string;;
type nonce = int;;

type message = [
  | `Null
  | `Var of identifier
  | `Nonce of nonce
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
  | `Nonce n -> printf "Nonce(%d) " n
  | `Str s -> printf "%s" s
  | `Concat msgs -> print_msglist outc msgs
  | `Hash m -> printf "hash (%a) " output_msg m  
  | `Aenc (m1,m2) -> printf "aenc{ < %a > }%a" output_msg m1 output_msg m2
  | `Senc (m1,m2) -> printf "senc{ < %a > }%a" output_msg m1 output_msg m2
  | `Pk rolename -> printf "pk(%s)" rolename
  | `Sk rolename -> printf "sk(%s)" rolename
  | `K (r1,r2) -> printf "k(%s,%s)" r1 r2

and print_msglist outc msgs =
  output_string outc "message list:( ";
  List.iteri ~f:(fun i m ->
	output_msg outc m;
	if i < ((List.length msgs)-1) then output_string outc "." else output_string outc "" ;) msgs;
  output_string outc ")"
;;

(* part 6  *)

let actlist = [ ("seq1","A","B","n1",`Aenc(`Concat([`Nonce(10);`Str("A")]),`Pk("B")));("seq2","B","A","n2",`Aenc(`Concat([`Nonce(10);`Nonce(5)]),`Pk("A")));("seq3","A","B","n3",`Aenc(`Nonce(5),`Pk("B")))];;
let rolelist = getroles_from_actlist actlist ;;
(*List.iter ~f:(printf "%s\n") rolelist*)
let str_list = List.map ~f:(fun rolename -> compileSq actlist rolename) rolelist;;
List.iteri ~f:(fun i str -> printf "-------\n";
			    List.iter ~f:(fun v -> match v with
			    | Some(Plus,m) -> printf "%d: (+,%a )\n" i output_msg m
		    	    | Some(Minus,m) -> printf "%d: (-,%a )\n" i output_msg m
		  	    | None -> printf "%d: empty\n" i) str
) str_list
;;




