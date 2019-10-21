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

let rec output_action outc = function
  | `Null -> output_string outc "null"  
  | `Actlist arr -> print_actlist outc arr
  | `Act (seq, r1, r2, n, m) ->
  match compileAct (seq, r1, r2, n, m) "A" with
    | Some (Plus, m)  -> printf "+"
    | Some (Minus, m) -> printf "-"
    | None -> printf "Empty"
and print_actlist outc arr =
  output_string outc "Actions{\n";
  List.iteri ~f:(fun i v -> 
  if i > 0 then
     output_string outc "\n-------\n";
  output_action outc v) arr;
  output_string outc "\n}"
  
let output_act outc = function
  | `Null  	-> output_string outc "null"
  | `Actlist arr as a  -> printf "Actions: \n------\n%a\nEND" output_action a
  | `Act (seq,r1,r2,n,m) as a -> printf "Actions: \n------\n%a\nEND" output_action a



