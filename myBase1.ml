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
  | `Aenc of message * message   (* Asymmetric encryption *)
  | `Senc of message * message   (* Symmetric encryption *)
  | `Hash of message
  | `Pk of roleName
  | `Sk of roleName
  | `K of roleName * roleName
];;

type action = [
  | `Act1 of int * roleName * roleName * identifier * message (* `Act1(seq, r1, r2, n, m) *)
  | `Act2 of int * roleName * roleName * message (* No new nonce generated. `Act2(seq, r1, r2,  m) *)
  | `Actlist of action list
  | `Null
];;

type knowledge = [
  | `Knowledge of roleName * message
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
  |`Secretgoal1 of identifier * message * roleName * roleName
  |`Agreegoal of identifier * roleName * roleName * message
  |`Goallist of goal list
  |`Null
];;

type pocolcontext = [
  | `Pocol of knowledge * action * environment * goal
  | `Null
];;

type sign = 
  | Plus
  | Minus
;;

type act = sign *int * message ;; (* (+, seq, m) *)

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

let del_duplicate org_list =
  match org_list with
  | [] -> []
  | l -> let len = List.length l in
         let non_duplicate = ref [] in
         for i = 0 to len do
           match List.nth l i with
           | None -> ()
           | Some x -> if listwithout !non_duplicate x then non_duplicate := !non_duplicate @ [x]
         done;
         !non_duplicate
;;

