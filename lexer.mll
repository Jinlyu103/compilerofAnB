{
open Lexing
open Parser

exception SyntaxError of string

let next_line lexbuf =
  let pos = lexbuf.lex_curr_p in
  lexbuf.lex_curr_p <-
    { pos with pos_bol = lexbuf.lex_curr_pos;
               pos_lnum = pos.pos_lnum + 1
    }
}

(* part 1 *)
let int = '-'? ['0'-'9'] ['0'-'9']*

(* part 2 *)
let digit = ['0'-'9']
let frac = '.' digit*
let exp = ['e' 'E'] ['-' '+']? digit+
let float = digit* frac? exp?

(* part 3 *)
let white = [' ' '\t']+
let newline = '\r' | '\n' | "\r\n"
let id = ['a'-'z' 'A'-'Z' '_'] ['a'-'z' 'A'-'Z' '0'-'9' '_']*
let str = "'" id "'"

(* part 4 *)
(* Attention to the int type *)
rule read =
  parse
  | white    { read lexbuf  }
  | newline  { next_line lexbuf; read lexbuf }
  | '"'      { read_string (Buffer.create 17) lexbuf }
  | '{'      { LEFT_BRACE }
  | '}'      { RIGHT_BRACE }
  | '('      { LEFT_BRACK }
  | ')'      { RIGHT_BRACK }
  | '['      { LEFT_MIDBRACE}
  | ']'      { RIGHT_MIDBRACE}
  | ':'      { COLON }
  | ';'      { SEMICOLON }
  | ','      { COMMA }
  | '.'      { PERIOD }
  | "->"     { SENDTO}
  | "pk" {PK}
  | "sk" {SK}
  | 'k' {K}
  | '<' {LEFT_ANGLEBARCK}
  | '>' {RIGHT_ANGLEBARCK}
  | 'h' {HASHCON}
  | "nonce" {NONCE}
  | "aenc" {AENC}
  | "senc" {SENC}
  | "Actions:" {ACTIONS}
  | "Goals:" {GOALS}
  | "Environment:" {ENVIRONMENT}
  | "Knowledges:" {KNOWLEDGES}
  | "Protocol" {PROTOCOL}
  | "end" {END}
  | "secret of" {SECRETOF}
  | "non-injectively agrees with" {NINJ}
  | "injectively agrees with" {INJ}
  | "on" {ON}
  | id { IDENT (Lexing.lexeme lexbuf) }
  | int {INT (int_of_string (Lexing.lexeme lexbuf)) }
  | _ { raise (SyntaxError ("Unexpected char: " ^ Lexing.lexeme lexbuf)) }
  | eof      { EOF }

(* part 5 *)
and read_string buf =
  parse
  | '"'       { STRING (Buffer.contents buf) }
  | '\\' '/'  { Buffer.add_char buf '/'; read_string buf lexbuf }
  | '\\' '\\' { Buffer.add_char buf '\\'; read_string buf lexbuf }
  | '\\' 'b'  { Buffer.add_char buf '\b'; read_string buf lexbuf }
  | '\\' 'f'  { Buffer.add_char buf '\012'; read_string buf lexbuf }
  | '\\' 'n'  { Buffer.add_char buf '\n'; read_string buf lexbuf }
  | '\\' 'r'  { Buffer.add_char buf '\r'; read_string buf lexbuf }
  | '\\' 't'  { Buffer.add_char buf '\t'; read_string buf lexbuf }
  | [^ '"' '\\']+
    { Buffer.add_string buf (Lexing.lexeme lexbuf);
      read_string buf lexbuf
    }
  | _ { raise (SyntaxError ("Illegal string character: " ^ Lexing.lexeme lexbuf)) }
  | eof { raise (SyntaxError ("String is not terminated")) }

  
















