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

let rec output_action outc acts rolename = 
  match acts with
  | `Null -> output_string outc "null"  
  | `Actlist arr -> print_actlist outc arr rolename
  | `Act (seq, r1, r2, n, m) ->
	match compileAct (seq, r1, r2, n, m) rolename with
    	| Some (Plus, m)  -> printf " (+, m) "
    	| Some (Minus, m) -> printf " (-, m) "
    	| None -> printf "Empty"

and print_actlist outc arr rolename =
  output_string outc "Actions{\n";
  List.iteri ~f:(fun i v -> 
  if i > 0 then
     output_string outc "\n-------\n";
  output_action outc v rolename) arr;
  output_string outc "\n}"

let rec output_action_B outc acts = 
  match acts with
  | `Null -> output_string outc "null"  
  | `Actlist arr -> print_actlist outc arr
  | `Act (seq, r1, r2, n, m) ->
	match compileAct (seq, r1, r2, n, m) "B" with
    	| Some (Plus, m)  -> printf " (+, m)"   
    	| Some (Minus, m) -> printf " (-, m)"  
    	| None -> printf "Empty"

and print_actlist outc arr =
  output_string outc "Actions{\n";
  List.iteri ~f:(fun i v -> 
  if i > 0 then
     output_string outc "\n-------\n";
  output_action_B outc v) arr;
  output_string outc "\n}"

(*------------------------------------------------*)
let rec output_action1 outc acts rolename = 
  match acts with
  | `Null -> output_string outc "null"  
  | `Actlist arr -> print_actlist outc arr rolename
  | `Act (seq, r1, r2, n, m) ->
	match compileAct (seq, r1, r2, n, m) rolename with
    	| Some (Plus, m)  -> printf " (+, m) "
    	| Some (Minus, m) -> printf " (-, m) "
    	| None -> printf "Empty"

and print_actlist outc arr rolename =
  output_string outc "Actions{\n";
  List.iteri ~f:(fun i v -> 
  if i > 0 then
     output_string outc "\n-------\n";
  output_action1 outc v rolename) arr;
  output_string outc "\n}"

(**print_roles_acts takes three arguments: outc, actlist, rolelist,
   then print the strand of each role in rolelist *)

  
(**output_string outc "Actions:\n";
  List.iter ~f:(fun i rolename -> 
  if i>0 then
	output_string outc "Actions:\n";
  output_action outc acts rolename) rolelist;
  output_string outc "End\n" 
  *)

let rec print_roles_acts outc acts rolelist =
  match acts with
  | `Null -> output_string outc "null"
  | `Actlist arr -> print_actlist outc arr rolelist
  | `Act (seq, r1, r2, n, m) ->
	let ls = List.map ~f:(fun rolename -> compileAct (seq, r1, r2, n, m) rolename) rolelist in
  	match ls with
  	| [] -> printf "Empty"
  	| l -> List.iter ~f:(fun e -> 
		match e with
		| Some (Plus, m) -> printf "+";
 		| Some (Minus,m) -> printf "-";
		| None		-> printf "Empty";) ls;

and print_actlist outc arr rolelist =
  output_string outc "Actions{\n";
  List.iteri ~f:(fun i v -> 
  if i > 0 then
     output_string outc "\n-------\n";
  print_roles_acts outc v rolelist) arr;
  output_string outc "\n}"

let output_act outc value = 
  let rolelist = ["A";"B"] in
  match value with
  | `Null  	-> output_string outc "null"
  | `Actlist arr as a -> printf "--------\n%a\n" print_roles_acts a rolelist;
  | `Act (seq,r1,r2,n,m) as a -> printf	"--------\n%a\n" print_roles_acts a rolelist;			 




