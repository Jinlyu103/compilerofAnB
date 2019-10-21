%token <string> IDENT
%token <string> USER
%token <string> STRING
%token LEFT_BRACE
%token RIGHT_BRACE
%token LEFT_BRACK
%token RIGHT_BRACK
%token LEFT_MIDBRACE
%token RIGHT_MIDBRACE
%token COMMA
%token PERIOD
%left PERIOD
%token PK
%token SK
%token K
%token LEFT_ANGLEBRACK
%token RIGHT_ANGLEBRACK
%token NONCE
%token HASHCON
%token AENC
%token SENC
%token SENDTO
%token COLON
%token SEMICOLON
%token ACTIONS
%token GOALS
%token KNOWLEDGES
%token PROTOCOL
%token END
%token SECRETOF
%token NINJ
%token INJ
%token ON
%token EOF

%start <Actions.action option> prog
%%

(* part 1 *)
prog:
  | a = actions; EOF { Some a }
  | EOF		     { None };

actions:
  | ACTIONS;actlist = action; { actlist };

action:
  | LEFT_MIDBRACE; seq=IDENT; RIGHT_MIDBRACE;r1=IDENT; SENDTO ; r2=IDENT;LEFT_BRACK;n=IDENT;RIGHT_BRACK;COLON;m=message { `Act (seq,r1,r2,n,m) }
  | LEFT_BRACE; acts = action_list;RIGHT_BRACE { `Actlist acts };

action_list:
  acts = separated_list(SEMICOLON, action)  { acts } ;

message:
  | id = IDENT { `Str id }
  | NONCE;LEFT_BRACK;id=IDENT;RIGHT_BRACK { `Var id }
  | PK;LEFT_BRACK;rlnm=IDENT;RIGHT_BRACK { `Pk rlnm }
  | SK;LEFT_BRACK;rlnm=IDENT;RIGHT_BRACK { `Sk rlnm }
  | K;LEFT_BRACK;rlnm1=IDENT;COMMA;rlnm2=IDENT;RIGHT_BRACK { `K (rlnm1,rlnm2) }
  | HASHCON;LEFT_BRACK;v=message;RIGHT_BRACK { `Hash v }
  | AENC;LEFT_BRACE;v1=message;RIGHT_BRACE;v2=message { `Aenc (v1,v2) }
  | SENC;LEFT_BRACE;v1=message;RIGHT_BRACE;v2=message { `Senc (v1,v2) }  
  | LEFT_ANGLEBRACK;msgs=message_list;RIGHT_ANGLEBRACK { `Concat msgs }
  | LEFT_BRACK;v=message;RIGHT_BRACK { v }
;

message_list:
  msgs = separated_list(PERIOD,message) { msgs } ;





































