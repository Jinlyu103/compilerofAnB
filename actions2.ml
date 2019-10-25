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

(* part 5*)

let actlist = [("seq1","A","B","n1",(1));("seq2","B","A","n2",(2));("seq3","A","B","n3",(3))];;
let rolelist = getroles_from_actlist actlist ;;
(*List.iter ~f:(printf "%s\n") rolelist*)
let str_list = List.map ~f:(fun rolename -> compileSq actlist rolename) rolelist;;
List.iteri ~f:(fun i str -> printf "-------\n";
			    List.iter ~f:(fun v -> match v with
			    | Some(Plus,m) -> printf "%d: (+,m)\n" i
		    	    | Some(Minus,m) -> printf "%d: (-,m)\n" i
		  	    | None -> printf "%d: empty\n" i) str
) str_list
;;




