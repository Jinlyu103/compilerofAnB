open Core.Std;;
open MyBase1;; (* definitions of types, and based functions to deal with lists such as (listwithout e alist) *)
open MyBase2;;

type protocols = [
  | `Protocol of label * pocolcontext
  | `Null
];;

(* part 4 print murphi rule *)
let rec getActsList actions rolelist = 
  match actions with
  | `Null -> []
  | `Actlist arr ->  getActs arr rolelist
  | `Act1 (seq,r1,r2,n,m) -> [List.map ~f:(fun rolename -> compileAct1 (seq,r1,r2,n,m) rolename) rolelist]
  | `Act2 (seq,r1,r2,m) -> [List.map ~f:(fun rolename -> compileAct2 (seq,r1,r2,m) rolename) rolelist]

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
  | `Act1 (seq,r1,r2,n,m) -> List.map ~f:(fun rolename ->
          compileAct1 ((seq,r1,r2,n,m)) rolename) rolelist
  | `Act2 (seq,r1,r2,m) -> List.map ~f:(fun rolename ->
			    compileAct2 ((seq,r1,r2,m)) rolename) rolelist
;; 
(* Transforming the i-th action into murphy rule *)
let rec getAtoms msg =
  match msg with
  |`Null   	-> [`Null]
  |`Var id 	-> [`Var id]
  |`Str s 	-> [`Str s]
  |`Concat msgs -> getEachAtoms msgs
  |`Hash m 	-> getAtoms m
  |`Aenc (m1,m2)-> List.concat (List.map ~f:getAtoms [m1;m2])
  |`Senc (m1,m2)-> List.concat (List.map ~f:getAtoms [m1;m2])
  |`Pk rolename -> [`Pk rolename]
  |`Sk rolename -> [`Sk rolename]
  |`K (r1,r2)	-> [`Str r1;`Str r2]

and getEachAtoms msgs =
  remove (List.concat (List.map ~f:getAtoms msgs)) `Null
;;

let genRuleName rolename i =
  sprintf "rule \" role%s%d \"\n" rolename i
;;

let genSendGuard rolename i seq =
  sprintf "role%s[i].st = %s%d & ch[%d].empty = true & !role%s[i].commit\n==>\n" rolename rolename i seq rolename
  (* sprintf "role%s[i].st = %s%d & ch.empty = true \n==>\n" rolename rolename i  *)
;;

let genRecvGuard rolename i seq =
  sprintf "role%s[i].st = %s%d & ch[%d].empty = false & !role%s[i].commit\n==>\n" rolename rolename i seq rolename
  (* sprintf "role%s[i].st = %s%d & ch.empty = false \n==>\n" rolename rolename i  *)
;;

let rec existInit msg atom =
  match msg with
  |`Null -> false
  |`Var n -> if isSamePat msg atom then 
                match atom with
                |`Var n1 -> if n = n1 then true else false
                |_ -> false
              else false
  |`Str r -> if isSamePat msg atom then 
              match atom with
              |`Str r1 -> if r = r1 then true else false
              |_ -> false
            else false
  |`Concat msgs -> existInMsgs msgs atom
  |`Aenc (m,k) -> false
  |`Senc (m,k) -> false
  |`Hash (m) -> false
  |`Pk r -> true
  |`Sk r -> false
  |`K (r1,r2) -> false
  |_ -> false

and existInMsgs msgs atom =
  let boolList = List.map ~f:(fun msg -> existInit msg atom ) msgs in
  match List.reduce ~f:(||) boolList with
  |Some b -> b
  |None -> false 
;;

let rec genSendAct rolename seq i m atoms length msgofRolename patlist =
  let commitStr = if i = length then sprintf "   role%s[i].commit := true;\n" rolename else "" in
  let patNum = getPatNum m patlist in
  sprintf "var msg:Message;\n    msgNo:indexType;\nbegin\n" ^
  sprintf "   clear msg;\n   cons%d(%s,msg,msgNo);\n" patNum (sendAtoms2Str rolename i atoms msgofRolename) ^
  sprintf "   ch[%d].empty := false;\n" seq ^ 
  sprintf "   ch[%d].msg := msg;\n" seq ^
  sprintf "   ch[%d].sender := role%s[i].%s;\n" seq rolename rolename ^ 
  sprintf "   ch[%d].receiver := Intruder;\n" seq ^
  sprintf "   role%s[i].st := %s%d;\n" rolename rolename ((i mod length)+1) ^
  sprintf "   put \"role%s send into ch[%d]. \";\n   put \" msg: \";\n   printMsg(ch[%d].msg);\n   put \"\\n\";\n" rolename seq seq ^ 
  commitStr ^
  sprintf "end;\n"
  (* (i+1) should be (i+1) % length of the strand list *)

and sendAtoms2Str rolename i atoms msgofRolename =
  let s = "role" ^ rolename ^"[i]." in
  let loc = "role"^rolename^"[i].loc" in
  String.concat ~sep:"," (List.map ~f:(fun a ->                         
                        match a with
                        |`Var n -> if (existInit msgofRolename a)  then s ^ n else loc ^ n  (*if i = 1 then s ^ n else loc ^ n *)
                        |`Str r -> if (existInit msgofRolename a)  then s ^ r else loc ^ r
                        |`Pk r -> if (existInit msgofRolename (`Str r))  then s ^ r else loc ^ r
                        |`Sk r -> if (existInit msgofRolename (`Str r))  then s ^ r else loc ^ r
                        |_ -> "null" ) atoms)
and getPkAg atoms msgofRolename =
  let ag = ref "" in
  let atomlen = List.length atoms in
  for i = 0 to (atomlen-1) do
    let ag' = match List.nth atoms i with
            | Some (`Pk r) -> r
            | Some (`Var n) -> ""
            | Some (`Str r) -> ""
            | _ -> ""
    in
    if ag' <> "" then ag := ag' else ()
  done;
  let loc = "loc" in
  if (existInit msgofRolename (`Str (!ag))) then !ag else loc^(!ag)
;;

(** rolename: the owner of the strand
    i: i-th node in strand (-,m)
    m: msg of the i-th node
    atoms: atoms derived from msg
    length: strand length
    msgofRolename: get msg from initial knowledge
    patlist: Patterns derived from the protocol
*)
let rec genRecvAct rolename seq i m atoms length msgofRolename patlist =
  let commitStr = if i = length then sprintf "   role%s[i].commit := true;\n" rolename else "" in 
  let patNum = getPatNum m patlist in
  sprintf "var flag_pat%d:boolean;\n    msg:Message;\n    msgNo:indexType;\nbegin\n" patNum ^ 
  sprintf "   clear msg;\n   msg := ch[%d].msg;\n   isPat%d(msg, flag_pat%d);\n" seq patNum patNum  ^ 
  sprintf "   if(flag_pat%d) then\n" patNum ^
  sprintf "     destruct%d(msg,%s);\n" patNum (recvAtoms2Str atoms rolename) ^
  sprintf "     if(%s)then\n" (atoms2Str atoms rolename msgofRolename) ^
  sprintf "       ch[%d].empty:=true;\n       clear ch[%d].msg;\n" seq seq ^
  sprintf "       role%s[i].st := %s%d;\n" rolename rolename ((i mod length)+1) ^
  sprintf "     endif;\n"^
  sprintf "   endif;\n" ^
  sprintf "   put \"role%s recieve from ch[%d]. \";\n   put \" msg: \";\n   printMsg(msg);\n   put \"\\n\";\n" rolename seq ^
  commitStr ^
  sprintf "end;\n"

and recvAtoms2Str atoms rolename = 
  let loc = "role"^rolename^"[i].loc" in
  String.concat ~sep:"," (List.map ~f:(fun a ->
  match a with
  |`Var n -> loc ^ n
  |`Str r -> loc ^ r
  |`Pk r -> loc ^ r
  |`Sk r -> loc ^ r
  |_ -> "null") atoms)

and atoms2Str atoms rolename msgofRolename = 
  (* let loc = "role"^rolename^"[i].loc_" in   *)
  let strlist = (List.map ~f:(fun  a ->
  match a with
  |`Var n -> sprintf "matchNonce(role%s[i].loc%s, role%s[i].%s)" rolename n rolename n
  |`Str r -> sprintf "matchAgent(role%s[i].loc%s, role%s[i].%s)" rolename r rolename r
  |`Pk r -> sprintf "matchAgent(role%s[i].loc%s, role%s[i].%s)" rolename r rolename r
  |`Sk r -> sprintf "matchAgent(role%s[i].loc%s, role%s[i].%s)" rolename r rolename r
  |_ -> "null" ) atoms)
  in
  String.concat ~sep:" & " (remove strlist "true")
;;

let trans act i rolename length msgOfrolename patlist=
  match act with
  |(Plus, seq, m) ->let atoms = getAtoms m in
                    let atoms = del_duplicate atoms in
                    genRuleName rolename i^
                    genSendGuard rolename i seq^
                    (genSendAct rolename seq i m atoms length msgOfrolename patlist)
  |(Minus,seq, m) ->let atoms = getAtoms m in
                    let atoms = del_duplicate atoms in
                    genRuleName rolename i ^
                    genRecvGuard rolename i seq^
                    (genRecvAct rolename seq i m atoms length msgOfrolename patlist)
;;

(*printf rules of normal principals: sending msg/recieving msg *)
let print_murphiRule actions knws =  
  let rolelist = getRolesFromKnws knws [] in (* Get role list:[A;B;...] *)
  let actsOfAllRls = getActsList actions rolelist in  (* Get act list: [(sign,seq,msg);(sign,seq,msg);...] *)
  let initKnws = getMsgOfRoles knws in 
  let patlist = getPatList actions in    (* get all patterns from actions *)
  let non_dup = del_duplicate patlist in (* delete duplicate *)
  let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *)
  String.concat (List.mapi ~f:(fun i r -> (*if i = 0  || i = 1 then*)
                            let acts = match List.nth actsOfAllRls i with (* Get the i-th act list of role_i*)
                                      | None -> []
                                      | Some a -> a
                            in
                            let msgofRole = match List.nth initKnws i with (* Get the i-th msg list of role_i*)
                                            |None -> `Null
                                            |Some msg -> msg
                            in
                            let lenActs = List.length acts in
                            sprintf "ruleset i:role%sNums do\n" r ^
                            String.concat (List.mapi ~f:(fun j act -> match act with
                                                        | None -> sprintf "null"
                                                        | Some a -> trans a (j+1) r lenActs msgofRole non_equivalent) acts) ^
                            sprintf "endruleset;\n\n" ) rolelist);
;;



let rec list_max xs =
  match xs with
  | [] ->  failwith "list_max called on empty list" (* empty list: fail *)
  | [x] -> x (* single element list: return the element *)
  | x :: remainder -> max x (list_max remainder) (* multiple element list: recursive case *)
;;

let getMaxLenMsg actions = 
  let pats = getPatList actions in
  list_max (List.map ~f:(fun p -> match p with
                                |`Null -> 0
                                |`Concat msgs -> List.length msgs
                                |_ -> 1 ) pats)
;;

(* 2019-12-17 *)
(* 2019-12-18 *)
(* encrypt and decrypt / enconcat and deconcat *)

(* decryption rules for aenc(Na.A, Pk(B)), aenc(Na.Nb,Pk(A)) and aenc(Nb,Pk(B)) *)
(* not used! *)
let rec adecryptRule (m,k) patList=  
  (*printf "  adecrypt\n";*)
  let i = getPatNum (`Aenc (m,k)) patList in
  let i1 = getPatNum m patList in
  let i2 = getPatNum k patList in
  printDecRule (m,k) i i1 i2

and printDecRule (m,k) i i1 i2 =
   sprintf "  rule \"decrypt %d\"	---pat%d\n" i i^
   sprintf "    i<=pat%dSet.length & pat%dSet.content[i] != 0 & Spy_known[pat%dSet.content[i]] &\n    !Spy_known[msgs[pat%dSet.content[i]].aencMsg]\n    ==>\n" i i i i^
   sprintf "    var key_inv:Message;\n	msgPat%d:indexType;\n	flag_pat%d:boolean;\n" i1 i1^
   sprintf "    begin\n"^
   sprintf "      key_inv := inverseKey(msgs[msgs[pat%dSet.content[i]].aencKey]);\n" i^
   sprintf "      if (key_inv.k.ag = Intruder) then\n"^
   sprintf "        Spy_known[msgs[pat%dSet.content[i]].aencMsg]:=true;\n        msgPat%d:=msgs[pat%dSet.content[i]].aencMsg;\n" i i1 i^
   sprintf "        isPat%d(msgs[msgPat%d],flag_pat%d);\n        if (flag_pat%d) then\n" i1 i1 i1 i1^
   sprintf "          if (!exist(pat%dSet,msgPat%d)) then\n" i1 i1^
   sprintf "            pat%dSet.length:=pat%dSet.length+1;\n            pat%dSet.content[pat%dSet.length]:=msgPat%d;\n" i1 i1 i1 i1 i1^
   sprintf "          endif;\n"^
   sprintf "        endif;\n"^
   sprintf "      endif;\n"^
   sprintf "    end;\n"
;;

(* encryption rules for aenc(Na.A, Pk(B)), aenc(Na.Nb,Pk(A)) and aenc(Nb,Pk(B))*)
(* not used! *)
let rec aencryptRule (m,k) patList=
  (*printf "  aencrypt\n"*)
  let i = getPatNum (`Aenc (m,k)) patList in
  let i1 = getPatNum m patList in
  let i2 = getPatNum k patList in
  printEncRule (m,k) i i1 i2

and printEncRule (m,k) i i1 i2 =
  sprintf "    rule \"encrypt %d\"	---pat%d\n" i i^
  sprintf "      i<=pat%dSet.length & pat%dSet.content[i] != 0 & Spy_known[pat%dSet.content[i]] &\n" i1 i1 i1 ^
  sprintf "      j<=pat%dSet.length & pat%dSet.content[j] != 0 & Spy_known[pat%dSet.content[j]] &\n" i2 i2 i2 ^
  sprintf "      matchPat(msgs[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])], sPat%dSet) &\n" i i1 i2 i1 i2 i ^ 
  sprintf "      !Spy_known[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])] \n       ==>\n" i i1 i2 i1 i2 ^
  (* sprintf "      
        i<=pat%dSet.length & pat%dSet.content[i] != 0 & Spy_known[pat%dSet.content[i]] &\n
        j<=pat%dSet.length & pat%dSet.content[j] != 0 & Spy_known[pat%dSet.content[j]] &\n
        !Spy_known[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])] &\n      
        & matchPat(msgs[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])], sPat%dSet)==>\n" i1 i1 i1 i2 i2 i2 i i1 i2 i1 i2 i^ *)
  sprintf "      var encMsgNo:indexType;\n"^
  sprintf "      begin\n"^
  sprintf "        if (msgs[pat%dSet.content[j]].k.encType=PK) then\n" i2^ (*ag=intruder.B*)
  sprintf "          encMsgNo := construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j]);\n" i i1 i2 i1 i2^
  sprintf "          if (!exist(pat%dSet,encMsgNo)) then\n" i^
  sprintf "            pat%dSet.length := pat%dSet.length+1;\n            pat%dSet.content[pat%dSet.length]:=encMsgNo;\n" i i i i^
  sprintf "          endif;\n"^
  sprintf "          if (!Spy_known[encMsgNo]) then\n"^
  sprintf "            Spy_known[encMsgNo] := true;\n"^
  sprintf "          endif;\n"^
  sprintf "        endif;\n"^
  sprintf "      end;\n"
  (*printf "    end;\n";*)
;;

(* deconcat rules for concat(Na,A) and concat (Na,Nb) *)
(* not used! *)
let rec deconcatRule msgs patList =
  (*printf "  deconcat rules\n";*)
  let i = getPatNum (`Concat msgs) patList in
  let i1 = match List.nth msgs 0 with
	   | Some m -> getPatNum m patList
	   | None -> 0
  in
  let i2 = match List.nth msgs 1 with
	   | Some m -> getPatNum m patList
	   | None -> 0
  in
  printDeconcatRule msgs i i1 i2

and printDeconcatRule msgs i i1 i2 =
  let str1 = sprintf "  rule \"deconcat %d\"	---pat%d\n" i i^
             sprintf "    i<=pat%dSet.length & pat%dSet.content[i] != 0 & Spy_known[pat%dSet.content[i]] &\n    !(Spy_known[msgs[pat%dSet.content[i]].concatPart[1]] & Spy_known[msgs[pat%dSet.content[i]].concatPart[2]])\n    ==>\n" i i i i i
  in
  let (i1_1,i1_2) = if i1 = i2 then (11,12) else (i1,i2) in 
  str1 ^ sprintf "    var msgPat%d,msgPat%d:indexType;\n        flag_pat%d,flag_pat%d:boolean;\n" i1_1 i1_2 i1_1 i1_2^
  sprintf "    begin\n"^
  sprintf "      if (!Spy_known[msgs[pat%dSet.content[i]].concatPart[1]]) then\n" i^
  sprintf "        Spy_known[msgs[pat%dSet.content[i]].concatPart[1]]:=true;\n" i^
  sprintf "        msgPat%d := msgs[pat%dSet.content[i]].concatPart[1];\n" i1_1 i^
  sprintf "        isPat%d(msgs[msgPat%d],flag_pat%d);\n" i1 i1_1 i1_1^
  sprintf "        if (flag_pat%d) then\n" i1_1^
  sprintf "          if(!exist(pat%dSet,msgPat%d)) then\n" i1 i1_1^
  sprintf "             pat%dSet.length:=pat%dSet.length+1;\n             pat%dSet.content[pat%dSet.length] := msgPat%d;\n" i1 i1 i1 i1 i1_1^
  sprintf "          endif;\n"^
  sprintf "        endif;\n"^
  sprintf "      endif;\n"^
  sprintf "      if (!Spy_known[msgs[pat%dSet.content[i]].concatPart[2]]) then\n" i^
  sprintf "        Spy_known[msgs[pat%dSet.content[i]].concatPart[2]]:=true;\n" i^
  sprintf "        msgPat%d := msgs[pat%dSet.content[i]].concatPart[2];\n" i1_2 i^
  sprintf "        isPat%d(msgs[msgPat%d],flag_pat%d);\n" i2 i1_2 i1_2^
  sprintf "        if (flag_pat%d) then\n" i1_2^
  sprintf "          if(!exist(pat%dSet,msgPat%d)) then\n" i2 i1_2^
  sprintf "             pat%dSet.length:=pat%dSet.length+1;\n             pat%dSet.content[pat%dSet.length] := msgPat%d;\n" i2 i2 i2 i2 i1_2 ^
  sprintf "          endif;\n" ^
  sprintf "        endif;\n" ^
  sprintf "      endif;\n" ^
  sprintf "    end;\n"
;;

(* enconcat rules for concat(Na,A) and concat(Na,Nb) *)
(* not used! *)
let rec enconcatRule msgs patList =
  (*printf "  enconcat rules\n";*)
  let patNumList = ref [] in
  for i = 0 to ((List.length msgs) - 1) do
    let (m, j) = match List.nth msgs i with
                |Some (`Var n) -> (n,getPatNum (`Var n) patList)
                |Some (`Str r) -> (r,getPatNum (`Str r) patList)
                |Some (`Hash m) -> let atoms = getAtoms m in
                                   let str = String.concat ~sep:"," (List.map ~f:(fun a -> 
                                              match a with
                                              |`Var n -> n
                                              |`Str r -> r
                                              |`Pk r -> r
                                              |`Sk r -> r
                                              |`K(r1,r2) -> r1^","^r2) atoms)
                                   in
                                  (str, getPatNum (`Hash m) patList)
                |Some (`Pk r) -> (r, getPatNum (`Pk r) patList)
                |Some (`Sk r) -> (r, getPatNum (`Sk r) patList)
                |Some (`K (r1, r2)) -> let str = sprintf "%s, %s" r1 r2
                                      in
                                      (str, getPatNum (`K (r1, r2)) patList)
                |Some (`Aenc (m1,k1)) -> let atoms = getAtoms (`Aenc(m1,k1)) in
                                        let noDupAtoms = del_duplicate atoms in 
                                        let str = String.concat ~sep:"," (List.map ~f:(fun a -> 
                                                  match a with
                                                  |`Var n -> n
                                                  |`Str r -> r
                                                  |`Pk r -> r
                                                  |`Sk r -> r
                                                  |`K(r1,r2) -> r1^","^r2) noDupAtoms)
                                        in
                                        (str, getPatNum (`Aenc (m1,k1)) patList)
                |Some (`Senc (m1,k1)) -> let atoms = getAtoms (`Aenc(m1,k1)) in
                                         let str = String.concat ~sep:"," (List.map ~f:(fun a ->
                                                   match a with
                                                   |`Var n -> n
                                                   |`Str r -> r
                                                   |`Pk r -> r^"Pk"
                                                   |`Sk r -> r^"Sk"
                                                   |`K(r1,r2) -> r1^","^r2) atoms)
                                          in
                                          (str , getPatNum (`Senc (m1,k1)) patList)
                | _ -> ("null",0)
    in
    patNumList := !patNumList @ [(m,j)]
  done;
  let i = getPatNum (`Concat msgs) patList in
  printEnconcatRule msgs i !patNumList     (*i1 i2*)

and printEnconcatRule msgs i patNumList =
  let str1 = sprintf "    rule \"enconcat %d\"	---pat%d\n" i i ^ 
            (String.concat ~sep:" &\n" (List.mapi ~f:(fun k (m,j) -> 
                                       sprintf "      i%d<=pat%dSet.length & Spy_known[pat%dSet.content[i%d]]" k j j k) patNumList))
  in
  (* let str2 = " &\n      !(" ^ String.concat ~sep:" = " (List.mapi ~f:(fun k (m,j) -> sprintf "pat%dSet.content[i%d]" j k) patNumList) ^") & \n"
  in *) (* delete this guard condition *)
  let str2 = "" in
  let subMsgNo = String.concat (List.map ~f:(fun (m,j) -> sprintf "%d" j) patNumList) (* each j in the list should be unique *)
  in
  let patSetStr = String.concat ~sep:"," (List.mapi ~f:(fun k (m,j) -> sprintf "pat%dSet.content[i%d]" j k) patNumList)
  in
  str1 ^ str2 ^ sprintf " &\n      matchPat(msgs[construct%dBy%s(%s)], sPat%dSet)&\n      !Spy_known[construct%dBy%s(%s)]\n      ==>\n" i subMsgNo patSetStr i i subMsgNo patSetStr ^ (*pat%dSet.content[i],pat%dSet.content[j]*)
  sprintf "      var concatMsgNo:indexType;\n      begin\n" ^
  sprintf "        concatMsgNo := construct%dBy%s(%s);\n" i subMsgNo patSetStr ^
  sprintf "        Spy_known[concatMsgNo]:=true;\n" ^
  sprintf "        if (!exist(pat%dSet,concatMsgNo)) then\n" i ^
  sprintf "          pat%dSet.length:=pat%dSet.length+1;\n" i i ^
  sprintf "          pat%dSet.content[pat%dSet.length]:=concatMsgNo;\n" i i ^
  sprintf "        endif;\n" ^
  sprintf "      end;\n"
;;

(* adecryption process for `Aenc(m,k) pattern *)
let printADecryption (m,k) patlist=
  let i = getPatNum (`Aenc(m,k)) patlist in
  let mNum = getPatNum m patlist in
  let deductAencMsg = match m with
                      |`Aenc(m1,m2) -> sprintf "             aDecryptionPat%d(msgs[msgPat%d]);\n" mNum mNum
                      |`Concat msgs -> sprintf "             deconcatPat%d(msgs[msgPat%d]);\n" mNum mNum
                      |_-> ""
  in
  (* let kNum = getPatNum k patlist in *)
  sprintf "procedure aDecryptionPat%d(msg: Message);\n" i ^
  sprintf "  var key_inv:Message;\n      msgPat%d:indexType;\n  	  flag_pat%d:boolean;\n" mNum mNum ^
  sprintf "  begin\n" ^
  sprintf "    if (! Spy_known[msg.aencMsg]) then\n" ^
  sprintf "       key_inv := inverseKey(msgs[msg.aencKey]);\n" ^
  sprintf "       if (key_inv.k.ag = Intruder | key_inv.k.encType = PK) then\n" ^
  sprintf "         Spy_known[msg.aencMsg]:=true;\n" ^
  sprintf "         msgPat%d:=msg.aencMsg;\n" mNum ^
  sprintf "         isPat%d(msgs[msgPat%d],flag_pat%d);\n" mNum mNum mNum ^
  sprintf "         if (flag_pat%d) then\n" mNum ^
  sprintf "           if (!exist(pat%dSet,msgPat%d)) then\n" mNum mNum^
  sprintf "             pat%dSet.length:=pat%dSet.length+1;\n             pat%dSet.content[pat%dSet.length]:=msgPat%d;\n" mNum mNum mNum mNum mNum^
  sprintf "%s" deductAencMsg ^
  sprintf "           endif;\n"^
  sprintf "         endif;\n"^
  sprintf "       endif;\n" ^
  sprintf "    endif;\n"^
  sprintf "  end;\n\n"
;;

(* aEncryption process for `Aenc(m,k) pattern *)
let printAEncryption (m,k) patlist =
  let i = getPatNum (`Aenc(m,k)) patlist in
  let mNum = getPatNum m patlist in
  let kNum = getPatNum k patlist in
  sprintf "procedure aEncryptionPat%d();\n" i ^
  sprintf "  var i, j, encMsgNo:indexType;\n"^
  sprintf "  begin\n" ^
  sprintf "    i := 1;\n" ^
  sprintf "    while (i <= pat%dSet.length) do\n" mNum ^
  sprintf "      j := 1;\n" ^
  sprintf "      while (j<=pat%dSet.length) do\n" kNum ^ 
  sprintf "        if (matchPat(msgs[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])], sPat%dSet) &\n" i mNum kNum mNum kNum i ^
  sprintf "           !Spy_known[construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j])]) then\n" i mNum kNum mNum kNum ^
  sprintf "           if (msgs[pat%dSet.content[j]].k.encType=PK) then\n" kNum ^
  sprintf "             encMsgNo := construct%dBy%d%d(pat%dSet.content[i],pat%dSet.content[j]);\n" i mNum kNum mNum kNum ^
  sprintf "             if (!exist(pat%dSet,encMsgNo)) then\n" i ^
  sprintf "                pat%dSet.length := pat%dSet.length+1;\n" i i^
  sprintf "                pat%dSet.content[pat%dSet.length]:=encMsgNo;\n" i i^
  sprintf "             endif; \n" ^
  sprintf "             if (!Spy_known[encMsgNo]) then\n"^
  sprintf "                Spy_known[encMsgNo] := true;\n"^
  sprintf "             endif;\n"^
  sprintf "          endif;\n" ^
  sprintf "        endif;\n" ^
  sprintf "        j := j+1;\n" ^
  sprintf "      endwhile;\n" ^
  sprintf "      i := i+1;\n" ^
  sprintf "    endwhile;\n" ^
  sprintf "  end;\n\n"
;;

(* deconcat process for `Concat msgs pattern *)
let printDeconcat msgs patlist = 
  let i = getPatNum (`Concat msgs) patlist in
  let msgPatStr = String.concat ~sep:", " (List.mapi ~f:(fun j m -> sprintf "msgPat%d" (j+1)) msgs) in
  let flagPatStr = String.concat ~sep:", " (List.mapi ~f:(fun j m -> sprintf "flagPat%d" (j+1)) msgs) in
  let subMsgNum = String.concat (List.mapi ~f:(fun j m -> sprintf "%d" (getPatNum m patlist)) msgs) in
  let procStr = String.concat (List.mapi ~f:(fun j m -> let deductSubStr = match m with
                                                                          |`Aenc (m1,k1) -> sprintf "           aDecryptionPat%d(msgs[msgPat%d]);\n" (getPatNum m patlist) (j+1)
                                                                          |_ -> ""
                                                        in
                                                        sprintf "    if (!Spy_known[msg.concatPart[%d]]) then\n" (j+1) ^
                                                        sprintf "      Spy_known[msg.concatPart[%d]] := true;\n" (j+1) ^
                                                        sprintf "      msgPat%d := msg.concatPart[%d];\n" (j+1) (j+1) ^
                                                        sprintf "      isPat%d(msgs[msgPat%d],flagPat%d);\n" (getPatNum m patlist) (j+1) (j+1) ^
                                                        sprintf "      if (flagPat%d) then\n" (j+1) ^
                                                        sprintf "        if(!exist(pat%dSet,msgPat%d)) then\n" (getPatNum m patlist) (j+1) ^
                                                        sprintf "           pat%dSet.length:=pat%dSet.length+1;\n" (getPatNum m patlist) (getPatNum m patlist) ^
                                                        sprintf "           pat%dSet.content[pat%dSet.length] := msgPat%d;\n" (getPatNum m patlist) (getPatNum m patlist) (j+1) ^
                                                        sprintf "%s" deductSubStr ^
                                                        sprintf "        endif;\n" ^
                                                        sprintf "      endif;\n" ^
                                                        sprintf "    endif;\n") msgs)
  in
  sprintf "procedure deconcatPat%d(msg: Message);\n" i ^
  sprintf "  var %s:indexType;\n  	  %s:boolean;\n" msgPatStr flagPatStr^
  sprintf "  begin\n" ^
  sprintf "%s" procStr ^
  sprintf "  end;\n\n"
;;

(* enconcat process for `Concat msgs pattern *)
let printEnconcat msgs patlist =
  let i = getPatNum (`Concat msgs) patlist in
  let parts = String.concat ~sep:", " (List.mapi ~f:(fun j m-> sprintf "i%d" (j+1)) msgs) in
  let subNoStr = String.concat (List.mapi ~f:(fun j m-> sprintf "%d" (getPatNum m patlist) ) msgs) in
  let subNoParas = String.concat ~sep:", " (List.mapi ~f:(fun j m -> sprintf "pat%dSet.content[i%d]" (getPatNum m patlist) (j+1)) msgs) in
  let whileStr = String.concat (List.mapi ~f:(fun j m-> let space = ref "" in
                                                        for i=0 to j do
                                                          space := !space ^ "  "
                                                        done;
                                                        sprintf "%s  i%d := 1;\n" !space (j+1) ^
                                                        sprintf "%s  while (i%d <= pat%dSet.length) do\n" !space (j+1) (getPatNum m patlist)) msgs) 
  in
  let endwhileStr  = String.concat (List.rev (List.mapi ~f:(fun j m-> let space = ref "" in
                                                            for i=0 to j do
                                                                space := !space ^ sprintf "  "
                                                            done ;
                                                          sprintf "%s    i%d := i%d + 1;\n" !space (j+1) (j+1) ^
                                                          sprintf "%s  endwhile;\n" !space ) msgs) )
  in
  let ifSpace = ref "" in
  for k = 0 to (List.length msgs) do
    ifSpace := !ifSpace ^ "  "
  done;                      
  sprintf "procedure enconcatPat%d();\n" i ^
  sprintf "  var %s, concatMsgNo: indexType;\n" parts ^
  sprintf "  begin\n" ^
  sprintf "%s" whileStr ^
  sprintf "%s  if (matchPat(msgs[construct%dBy%s(%s)], sPat%dSet) &\n" !ifSpace i subNoStr subNoParas i ^
  sprintf "%s      !Spy_known[construct%dBy%s(%s)]) then\n" !ifSpace i subNoStr subNoParas ^
  (* sprintf "       if (msgs[pat%dSet.content[j]].k.encType=PK) then\n" kNum ^ *)
  sprintf "%s       concatMsgNo := construct%dBy%s(%s);\n" !ifSpace i subNoStr subNoParas ^
  sprintf "%s       if (!exist(pat%dSet,concatMsgNo)) then\n" !ifSpace i ^
  sprintf "%s           pat%dSet.length := pat%dSet.length+1;\n" !ifSpace i i^
  sprintf "%s           pat%dSet.content[pat%dSet.length]:=concatMsgNo;\n" !ifSpace i i^
  sprintf "%s       endif; \n" !ifSpace^
  sprintf "%s       if (!Spy_known[concatMsgNo]) then\n" !ifSpace^
  sprintf "%s          Spy_known[concatMsgNo] := true;\n" !ifSpace^
  sprintf "%s       endif;\n" !ifSpace^
  (* sprintf "       endif;\n" ^ *)
  sprintf "%s  endif;\n" !ifSpace^
  sprintf "%s" endwhileStr ^
  sprintf "  end;\n\n"
;;
let printDeduction i p patlist = 
  match p with
  |`Aenc (m1,k1) -> printADecryption (m1,k1) patlist ^
                    printAEncryption (m1,k1) patlist
  |`Concat msgs -> printDeconcat msgs patlist ^
                   printEnconcat msgs patlist
  | _ -> ""
;;

(* not used! *)
let print_murphiRule_byPats pat i patList =
  match pat with
  |`Aenc (m1,k1) -> sprintf "--- encrypt and decrypt rules of pat: aenc(%s,%s), for intruder\n" (output_msg m1) (output_msg k1)^
		    sprintf "ruleset i:msgLen do \n"^
		    adecryptRule (m1,k1) patList^
		    sprintf "endruleset;\n\n" ^
		    sprintf "ruleset i:msgLen do \n  ruleset j:msgLen do \n"^
		    aencryptRule (m1,k1) patList^
  	    sprintf "  endruleset;\nendruleset;\n\n" 
  |`Concat msgs -> sprintf "--- enconcat and deconcat rules for pat: concat(%s)\n\n" (output_msg (`Concat msgs))^
		   sprintf "ruleset i:msgLen do \n" ^
		   (deconcatRule msgs patList) ^
       sprintf "endruleset;\n\n" ^
       String.concat ~sep:"\n  " (List.mapi ~f:(fun i m -> sprintf "ruleset i%d: msgLen do" i) msgs) ^ (* ruleset i:indexType do \n  ruleset j:indexType do *)
		   sprintf " \n" ^
       (enconcatRule msgs patList) ^
       String.concat ~sep:"\n" (List.map ~f:(fun m -> sprintf "endruleset;") msgs) ^
		   sprintf "\n\n" 
  |_ -> ""
;;

(* print encryption and decryption rules, enconcat and deconcat rules *)
(* not used! *)
let print_murphiRules_EncsDecs actions knws = 
  let patlist = getPatList actions in    (* get all patterns from actions *)
  let patlist = del_duplicate patlist in (* delete duplicate *)
  let patlist = getEqvlMsgPattern patlist in (* delete equivalent class *) 
                    let patlist = getEqvlMsgPattern patlist in (* delete equivalent class *) 
  let patlist = getEqvlMsgPattern patlist in (* delete equivalent class *) 
  String.concat (List.mapi ~f:(fun i pat -> print_murphiRule_byPats pat (i+1) patlist ) patlist)
;;

(* print procedures or functions of deduction process: encryption/decryption/enconcation/deconcation*)
let printIntruderProcedures actions knws =
  let patlist = getPatList actions in    (* get all patterns from actions *)
  let patlist = del_duplicate patlist in (* delete duplicate *)
  let patlist = getEqvlMsgPattern patlist in (* delete equivalent class *)  
                            let patlist = getEqvlMsgPattern patlist in (* delete equivalent class *)  
  let patlist = getEqvlMsgPattern patlist in (* delete equivalent class *)  
  String.concat (List.mapi ~f:(fun i p -> printDeduction i p patlist) patlist)
;;

(* 2019-12-20 *)
(* rules for intruder to get msgs: intruderGetMsg1,intruderGetMsg2 and intruderGetMsg3;
   rules for intruder to emit msgs: intruderEmitMsg1, intruderEmitMsg2 and intruderEmitMsg3 *)
(* Get msgs from action *)
let rec getMsgs actions =
  match actions with
  | `Null -> []
  | `Act1 (seq,r1,r2,n,m) -> [(seq,r2,m)] 
  | `Act2 (seq,r1,r2,m) -> [(seq,r2,m)]
  | `Actlist arr -> List.concat (List.map ~f:getMsgs arr)
;;

let genCodeOfIntruderGetMsg (seq,r,m) patList = 
  let j = getPatNum m patList in
  let deductionStr = match m with
                    |`Aenc (m1,k1) -> sprintf "      aDecryptionPat%d(msg);\n" j ^
                                      sprintf "      aEncryptionPat%d();\n" j
                    |`Concat msgs -> sprintf "       deconcatPat%d(msg);\n" j ^
                                     sprintf "       enconcatPat%d();\n" j
                    |`Var n -> sprintf "--- nonce: %s\n" n
                    |`Str r1 -> sprintf "--- agent: %s\n" r1
                    |`Pk r1 -> sprintf "--- pk(%s)\n" r1
                    |`Sk r1 -> sprintf "--- sk(%s)\n" r1
                    |`K(r1,r2) -> sprintf "--- symk(%s, %s)\n" r1 r2
                    |`Null -> "--- null\n"
  in
  (* let deductionStr = String.concat (List.map ~f:(fun p -> let pNum = getPatNum p patList in
                                                          match p with
                                                          |`Aenc(m1, k1) -> sprintf "        i := 1;\n"  ^
                                                                            sprintf "        while (i <= pat%dSet.length) do\n" pNum ^
                                                                            sprintf "          aDecryptionPat%d(msgs[pat%dSet.content[i]]);\n" pNum pNum ^                                                                            
                                                                            sprintf "          i := i+1;\n" ^
                                                                            sprintf "        endwhile;\n" ^
                                                                            sprintf "        aEncryptionPat%d();\n" pNum 
                                                          |`Concat msgs ->sprintf "        i := 1;\n" ^
                                                                          sprintf "        while (i <= pat%dSet.length) do\n" pNum ^                                                                          
                                                                          sprintf "          deconcatPat%d(msgs[pat%dSet.content[i]]);\n" pNum pNum ^
                                                                          sprintf "          i := i+1;\n" ^
                                                                          sprintf "        endwhile;\n" ^
                                                                          sprintf "        enconcatPat%d();\n" pNum 
                                                          |`Var n -> sprintf "        --- nonce: %s\n" n
                                                          |`Str r1 -> sprintf "        --- agent: %s\n" r1
                                                          |`Pk r1 -> sprintf "        --- pk(%s)\n" r1
                                                          |`Sk r1 -> sprintf "        --- sk(%s)\n" r1
                                                          |`K(r1,r2) -> sprintf "        --- symk(%s, %s)\n" r1 r2
                                                          |`Null -> "        --- null\n" ) patList)
  in *)
  sprintf "\n---rule of intruder to get msg from ch[%d] \n" seq ^
  sprintf "rule \"intruderGetMsgFromCh[%d]\" \n" seq ^ 
  sprintf "  ch[%d].empty = false\n  ==>\n" seq ^
  sprintf "  var flag_pat%d:boolean;\n      i, msgNo:indexType;\n      msg:Message;\n" j^
  sprintf "  begin\n" ^
  sprintf "    msg := ch[%d].msg;\n" seq ^ 
  sprintf "    get_msgNo(msg, msgNo);\n"^ 
  sprintf "    isPat%d(msg,flag_pat%d);\n" j j^ 
  (* sprintf "    put flag_pat%d;\n" j ^ *)
  sprintf "    if (flag_pat%d) then\n" j^
  (* sprintf "      put exist(pat%dSet,msgNo);\n" j^ *)
  sprintf "      if(!exist(pat%dSet,msgNo)) then\n" j^
  sprintf "        pat%dSet.length:=pat%dSet.length+1;\n" j j^
  sprintf "        pat%dSet.content[pat%dSet.length]:=msgNo;\n" j j^
  sprintf "        Spy_known[msgNo] := true;\n"^
  sprintf "%s" deductionStr ^(* deduction of the recieving msg, decrypt, deconcat, encrypt, enconcat*)
  sprintf "      endif;\n" ^
  sprintf "      ch[%d].empty := true;\n      clear ch[%d].msg;\n" seq seq^
  sprintf "    endif;\n" ^
  sprintf "  end;\n"
;;

let genCodeOfIntruderEmitMsg (seq,r,m) patList= 
  let j = getPatNum m patList in
  let str1 = sprintf "\n---rule of intruder to emit msg into ch[%d].\n" seq ^ sprintf "ruleset i: msgLen do\n"
  in
  let str2 = sprintf "  ruleset j: role%sNums do\n" r in
  let str3 = sprintf "    rule \"intruderEmitMsgIntoCh[%d]\"\n" seq ^ 
             sprintf "      ch[%d].empty=true & i <= pat%dSet.length & pat%dSet.content[i] != 0 &\n" seq j j ^
             sprintf "      Spy_known[pat%dSet.content[i]] & matchPat(msgs[pat%dSet.content[i]], sPat%dSet) &\n" j j j^
             sprintf "      !emit[pat%dSet.content[i]]\n" j ^
             sprintf "      ==>\n" ^ 
             sprintf "      begin\n        if (!emit[pat%dSet.content[i]]) then  --- & msgs[msgs[pat%dSet.content[i]].aencKey].k.ag=role%s[j].%s\n" j j r r^ 
             sprintf "          clear ch[%d];\n" seq ^sprintf "          ch[%d].msg:=msgs[pat%dSet.content[i]];\n" seq j^
             sprintf "          ch[%d].sender:=Intruder;\n" seq
  in
  let str4 = sprintf "          ch[%d].receiver:=role%s[j].%s;\n" seq r r in
  str1 ^ str2 ^ str3^ str4 ^ 
  sprintf "          ch[%d].empty:=false;\n" seq^
  sprintf "          emit[pat%dSet.content[i]] := true;\n" j^
  sprintf "          put \"Intruder emit msg into ch%d. \";\n" seq ^
  sprintf "          put \" msg:   \";"^
  sprintf "          printMsg(ch[%d].msg);\n" seq ^
  sprintf "          put \"\\n\";\n"^
  sprintf "        endif;\n"^
  sprintf "      end;\n"^
  sprintf "  endruleset;\n"^
  sprintf "endruleset;\n"
;;
(* let rec print_murphiRule_byMsgs (seq,m) i patList r =
  let j = getPatNum m patList in
  print_getRules seq j^
  print_emitRules i seq j r

and print_getRules seq j =
  sprintf "\n---rule of intruder to get msg from ch[%d] \n" seq ^
  sprintf "rule \"intruderGetMsgFromCh[%d]\" \n" seq ^ 
  sprintf "  ch[%d].empty = false\n  ==>\n" seq ^
  (* sprintf "  ch.empty = false\n  ==>\n" ^ *)
  sprintf "  var flag_pat%d:boolean;\n      msgNo:indexType;\n      msg:Message;\n" j^
  sprintf "  begin\n" ^
  sprintf "    msg := ch[%d].msg;\n" seq ^ 
  (* sprintf "    msg := ch.msg;\n" ^  *)
  sprintf "    get_msgNo(msg, msgNo);\n"^ 
  sprintf "    isPat%d(msg,flag_pat%d);\n" j j^ 
  sprintf "    ---put flag_pat%d;\n" j ^
  sprintf "    if (flag_pat%d) then\n" j^
  sprintf "      if(!exist(pat%dSet,msgNo)) then\n" j^
  sprintf "        pat%dSet.length:=pat%dSet.length+1;\n" j j^
  sprintf "        pat%dSet.content[pat%dSet.length]:=msgNo;\n" j j^
  sprintf "        Spy_known[msgNo] := true;\n"^
  sprintf "        ch[%d].empty := true;\n" seq ^
  (* sprintf "        ch.empty := true;\n" ^ *)
  (*printf "       intruder.st := gotmsg%d;\n" i;*)
  sprintf "      endif;\n" ^
  sprintf "    endif;\n" ^
  sprintf "  end;\n"

and print_emitRules i seq j r=
  let str1 = sprintf "\n---rule of intruder to emit msg into ch[%d].\n" seq ^ sprintf "ruleset i: msgLen do\n"
  in
  let str2 = sprintf "  ruleset j: role%sNums do\n" r in
  let str3 = sprintf "    rule \"intruderEmitMsgIntoCh[%d]\"\n" seq ^ sprintf "      ch[%d].empty=true & i <= pat%dSet.length & Spy_known[pat%dSet.content[i]]\n      ==>\n" seq j j^ 
             sprintf "      begin\n        if (!emit[pat%dSet.content[i]] & msgs[msgs[pat%dSet.content[i]].aencKey].k.ag=role%s[j].%s) then\n" j j r r^ 
             sprintf "          clear ch[%d];\n" i ^sprintf "          ch[%d].msg:=msgs[pat%dSet.content[i]];\n" i j^
             sprintf "          ch[%d].sender:=Intruder;\n" i
  in
  let str4 = sprintf "          ch[%d].receiver:=role%s[j].%s;\n" seq r r in
  str1 ^ str2 ^ str3^ str4 ^ 
  sprintf "          ch[%d].empty:=false;\n" seq^
  sprintf "          emit[pat%dSet.content[i]] := true;\n" j^
  sprintf "          put \"%d. \";\n          put ch[%d].sender;\n" i seq^
  sprintf "          put \"   \";\n          put ch[%d].receiver;\n" seq ^
  sprintf "          put \"   msg: \";\n"^
  sprintf "          printMsg(ch[%d].msg);\n" seq ^
  sprintf "          put \"\\n\";\n"^
  sprintf "        endif;\n"^
  sprintf "      end;\n"^
  sprintf "  endruleset;\n"^
  sprintf "endruleset;\n"
;; *)

(* get msgs from actions: msgs
   print get rules of each msg;
   print emit rules of each msg. *)

let print_murphiRule_ofIntruder actions =
  let msgs = getMsgs actions in    (* get all msgs from actions *)
  let patlist = getPatList actions in    (* get all patterns from actions *)
  let patlist = del_duplicate patlist in (* delete duplicate *)
  let patlist = getEqvlMsgPattern patlist in
  let getMsgStr = String.concat (List.map ~f:(fun m -> genCodeOfIntruderGetMsg m patlist) msgs) in
  let emitMsgStr = String.concat (List.mapi ~f:(fun i m -> genCodeOfIntruderEmitMsg m patlist) msgs) in
  getMsgStr ^ emitMsgStr 
;;

(*synthesis of a messages of pati.*)
let atoms2Parms atoms =
  String.concat ~sep:"; "  (List.map ~f:(fun a -> match a with
  |`Var n -> n ^ ":NonceType"
  |`Str s -> s ^ ":AgentType"
  |`Pk role -> role ^ "Pk :AgentType"
  |`Sk role -> role ^ "Sk :AgentType"
  |_ -> "" ) atoms )
;;

let atoms2Parms1 atoms =
  String.concat ~sep:"; "  (List.map ~f:(fun a -> match a with
  |`Var n ->"Var "^ n ^ ":NonceType"
  |`Str s ->"Var "^ s ^ ":AgentType"
  |`Pk role ->"Var "^ role ^ "Pk:AgentType"
  |`Sk role ->"Var "^ role ^ "Sk:AgentType"
  |_ -> "" ) atoms )
;;

let atom2Str atoms =
  String.concat ~sep:", "  (List.map ~f:(fun a -> match a with
  |`Var n -> n 
  |`Str s -> s 
  |`Pk role -> role ^ "Pk"
  |`Sk role -> role ^ "Sk"
  |_ -> "" ) atoms )
;;


let genSynthCode m i patList =
  let atoms = getAtoms m in
  let noDupAtoms = del_duplicate atoms in 
  let str1 = sprintf "---pat%d: %s \nprocedure lookAddPat%d" i (output_msg m) i ^ 
             sprintf "(%s; Var msg:Message; Var num : indexType);\n" (atoms2Parms noDupAtoms)
  in
  match m with
  |`Aenc(m1,k1) -> begin
                  let i1= getPatNum m1 patList in
                  let i2= getPatNum k1 patList in
                  let keyAg=match k1 with
                            |`Pk role -> role^"Pk"
                            |`Sk role -> role^"Sk"
                            |_ -> "null"
                  in
                  let m1Atoms = getAtoms m1 in  
                  str1 ^                                          
                  sprintf "  Var msg1, msg2: Message;\n      index,i1,i2:indexType;\n  begin\n"^
                  sprintf "   index:=0;\n"^
                  sprintf "   lookAddPat%d(%s,msg1,i1);\n" i1 (atom2Str m1Atoms)^
                  sprintf "   lookAddPat%d(%s,msg2,i2);\n" i2 keyAg^               
                  sprintf "   for i : indexType do\n"^
                  sprintf "     if (msgs[i].msgType = aenc) then\n"^
                  sprintf "       if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then\n"^
                  sprintf "          index:=i;\n"^
                  sprintf "       endif;\n"^
                  sprintf "     endif;\n"^
                  sprintf "   endfor;\n"^
                  sprintf "   if(index=0) then\n"^
                  sprintf "     msg_end := msg_end + 1 ;\n     index := msg_end;\n     msgs[index].msgType := aenc;\n     msgs[index].aencMsg := i1; \n     msgs[index].aencKey := i2; \n     msgs[index].length := 1;\n"^
                  sprintf "   endif;\n"^
                  (* sprintf "   put msg_end;\n"^
                  sprintf "   printMsg(msgs[msg_end]);\n" ^
                  sprintf "   put \"\\n\";\n" ^ *)
                  sprintf "   num:=index;\n   msg:=msgs[index];\n  end;\n\n"; 
                  end;
  |`Concat msgs -> begin  (* concat(Na,Nb), concat(Na,A), concat(Server, Na), concat(Server, Na, aenc{concat(Server, Na)}sk(Server))*)
                  let patNumList = ref [] in
                  for i = 0 to ((List.length msgs) - 1) do
                      let (m, j) = match List.nth msgs i with
                                  |Some (`Var n) -> (n,getPatNum (`Var n) patList)
                                  |Some (`Str r) -> (r,getPatNum (`Str r) patList)
                                  |Some (`Hash m) -> let atoms = getAtoms m in
                                                     let str = String.concat ~sep:"," (List.map ~f:(fun a -> match a with
                                                                                      |`Var n -> n
                                                                                      |`Str r -> r
                                                                                      |`Pk r -> r
                                                                                      |`Sk r -> r
                                                                                      |`K(r1,r2) -> r1^","^r2) atoms)
                                                     in
                                                     (str, getPatNum (`Hash m) patList)
                                  |Some (`Pk r) -> (r^"Pk", getPatNum (`Pk r) patList)
                                  |Some (`Sk r) -> (r^"Sk", getPatNum (`Sk r) patList)
                                  |Some (`K (r1, r2)) -> let str = sprintf "%s, %s" r1 r2
                                                         in
                                                         (str, getPatNum (`K (r1, r2)) patList)
                                  |Some (`Aenc (m1,k1)) -> let atoms = getAtoms (`Aenc(m1,k1)) in
                                                           let noDupAtoms = del_duplicate atoms in 
                                                           let str = String.concat ~sep:"," (List.map ~f:(fun a -> match a with
                                                                                        |`Var n -> n
                                                                                        |`Str r -> r
                                                                                        |`Pk r -> r^"Pk"
                                                                                        |`Sk r -> r^"Sk"
                                                                                        |`K(r1,r2) -> r1^","^r2) noDupAtoms)
                                                            in
                                                           (str, getPatNum (`Aenc (m1,k1)) patList)
                                  |Some (`Senc (m1,k1)) -> let atoms = getAtoms (`Aenc(m1,k1)) in
                                                           let str = String.concat ~sep:"," (List.map ~f:(fun a -> match a with
                                                                                        |`Var n -> n
                                                                                        |`Str r -> r
                                                                                        |`Pk r -> r^"Pk"
                                                                                        |`Sk r -> r^"Sk"
                                                                                        |`K(r1,r2) -> r1^","^r2) atoms)
                                                           in
                                                        (str , getPatNum (`Senc (m1,k1)) patList)
                                  | _ -> ("null",0)
                      in
                      patNumList := !patNumList @ [(m,j)]
                  done;
                  let str2 = "  Var " ^ String.concat ~sep:", " (List.mapi ~f:(fun k m -> sprintf "msg%d" (k+1)) msgs) ^ " : Message;\n"
                  in
                  let str3 = "      index," ^ String.concat ~sep:"," (List.mapi ~f:(fun k m -> sprintf "i%d" (k+1)) msgs) ^ " : indexType;\n  begin\n   index:=0;\n"
                  in
                  let str4 = String.concat ~sep: ";\n" (List.mapi ~f:(fun i (m,j) -> sprintf "   lookAddPat%d(%s,msg%d,i%d)" j m (i+1) (i+1)) !patNumList) ^ ";\n"
                  in
                  let str5 = String.concat ~sep:" & " (List.mapi ~f:(fun i m -> sprintf "msgs[i].concatPart[%d] = i%d" (i+1) (i+1)) msgs)
                  in
                  let str6 = String.concat ~sep:";\n" (List.mapi ~f:(fun i m -> sprintf "     msgs[index].concatPart[%d] := i%d" (i+1) (i+1)) msgs)
                  in
                  str1 ^ str2 ^ str3 ^ str4 ^
                  sprintf "   for i : indexType do\n"^
                  sprintf "     if (msgs[i].msgType = concat & msgs[i].length = %d) then\n" (List.length msgs)^
                  sprintf "       if (%s) then\n" str5 ^ 
                  sprintf "          index:=i;\n"^
                  sprintf "       endif;\n"^
                  sprintf "     endif;\n"^
                  sprintf "   endfor;\n"^
                  sprintf "   if(index=0) then\n"^
                  sprintf "     msg_end := msg_end + 1 ;\n     index := msg_end;\n     msgs[index].msgType := concat;\n"^
                  sprintf "%s; \n" str6 ^
                  sprintf "     msgs[index].length := %d;\n    endif;\n" (List.length msgs)^
                  (* sprintf "   put msg_end;\n"^
                  sprintf "   printMsg(msgs[msg_end]);\n" ^
                  sprintf "   put \"\\n\";\n" ^ *)
                  sprintf "   num:=index;\n   msg:=msgs[index];\n  end;\n\n";
                end
  |`Str s ->str1 ^ sprintf " Var index : indexType;\n begin
   index:=0;
   for i: indexType do
    if (msgs[i].msgType = agent) then
      if (msgs[i].ag = %s) then
        index:=i;
      endif;
    endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := agent;
     msgs[index].ag:=%s; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;\n\n" s s
  |`Pk role -> str1 ^ sprintf "  Var index : indexType;\n  begin
    index:=0;
    for i: indexType do
      if (msgs[i].msgType = key) then
        if (msgs[i].k.encType = PK & msgs[i].k.ag = %sPk) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType:=PK; 
      msgs[index].k.ag:=%sPk;
      msgs[index].length := 1;
    endif;
    num:=index;
    msg:=msgs[index];
  end;\n\n" role role
  |`Sk role -> str1 ^ sprintf "  Var index : indexType;\n  begin
    index:=0;
    for i: indexType do
      if (msgs[i].msgType = key) then
        if (msgs[i].k.encType = SK & msgs[i].k.ag = %sSk) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType:=SK; 
      msgs[index].k.ag:=%sSk;
    endif;
    num:=index;
    msg:=msgs[index];
  end;\n\n" role role
  |`Var n ->str1 ^ sprintf "  Var index : indexType;\n  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=%s) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=%s; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;\n\n" n n; 
  |_ -> "" 
;;

let genConstrustSpatN m i patList =
  let atoms = getAtoms m in
  let atoms = del_duplicate atoms in
  let patNum = getPatNum m patList in
  let str1 = sprintf "---spat%d: %s \nprocedure constructSpat%d(%s; Var num: indexType);\n" patNum (output_msg m) i (atoms2Parms atoms) in
  match m with
  |`Aenc(m1,k1) ->begin
                  let i1= getPatNum m1 patList in
                  let i2= getPatNum k1 patList in
                  let keyAg=match k1 with
                            |`Pk role -> role^"Pk"
                            |`Sk role -> role^"Sk"
                            |_ -> "null"
                  in
                  let m1Atoms = getAtoms m1 in  
                  str1 ^                                          
                  sprintf "  Var i,index,i1,i2:indexType;\n  begin\n"^ (* i is the loop variable*)
                  sprintf "    index:=0;\n"^
                  sprintf "    constructSpat%d(%s, i1);\n" i1 (atom2Str m1Atoms)^
                  sprintf "    constructSpat%d(%s, i2);\n" i2 keyAg^ 
                  sprintf "    i := 1;\n" ^
                  sprintf "    while(i <= msg_end) do\n"^
                  (* sprintf "    for i : indexType do\n"^ *)
                  sprintf "      if (msgs[i].msgType = aenc) then\n"^
                  sprintf "        if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then\n"^
                  sprintf "           index:=i;\n"^
                  sprintf "        endif;\n"^
                  sprintf "      endif;\n"^
                  sprintf "      i := i+1;\n"^
                  (* sprintf "    endfor;\n"^ *)
                  sprintf "    endwhile;\n" ^
                  sprintf "    if(index=0) then\n"^
                  sprintf "      msg_end := msg_end + 1 ;\n      index := msg_end;\n      msgs[index].msgType := aenc;\n      msgs[index].aencMsg := i1; \n      msgs[index].aencKey := i2; \n      msgs[index].length := 1;\n"^
                  sprintf "    endif;\n"^
                  sprintf "    put msg_end;\n"^
                  sprintf "    printMsg(msgs[msg_end]);\n" ^
                  sprintf "    put \"  cons Spat%d\\n\";\n" patNum^
                  sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum ^
                  sprintf "    sPat%dSet.content[sPat%dSet.length] := index;\n" patNum patNum^
                  sprintf "    num := index;\n" ^
                  sprintf "  end;\n\n"; 
                  end;
  |`Concat msgs ->begin  (* concat(Na,Nb), concat(Na,A), concat(Server, Na), concat(Server, Na, aenc{concat(Server, Na)}sk(Server))*)
                  let subStr = String.concat ~sep:", " (List.mapi ~f:(fun i m-> sprintf "i%d" (i+1)) msgs) in
                  let subStat = String.concat (List.mapi ~f:(fun i subm ->let submAtoms = getAtoms subm in
                                                                          let submAtoms = del_duplicate submAtoms in
                                                                          sprintf "    constructSpat%d(%s, i%d);\n" (getPatNum subm patList) (atom2Str submAtoms) (i+1)) msgs) 
                  in
                  let ifConcatPart = String.concat ~sep:" & " (List.mapi ~f:(fun i subm -> sprintf "msgs[i].concatPart[%d] = i%d" (i+1) (i+1)) msgs) in
                  let conPartStr = String.concat (List.mapi ~f:(fun i subm -> sprintf "      msgs[index].concatPart[%d] := i%d;\n" (i+1) (i+1))msgs) in
                  str1 ^
                  sprintf "  Var i,index, %s:indexType;\n  begin\n" subStr^
                  sprintf "    index:=0;\n" ^
                  sprintf "%s" subStat ^
                  sprintf "    i := 1;\n" ^
                  sprintf "    while(i<= msg_end) do\n" ^
                  sprintf "      if (msgs[i].msgType = concat & msgs[i].length = %d) then\n" (List.length msgs)^
                  sprintf "        if (%s) then\n" ifConcatPart ^
                  sprintf "          index := i;\n" ^
                  sprintf "        endif;\n" ^
                  sprintf "      endif;\n" ^
                  sprintf "      i := i+1;\n" ^
                  sprintf "    endwhile;\n" ^
                  sprintf "    if(index=0) then\n"^
                  sprintf "      msg_end := msg_end + 1 ;\n      index := msg_end;\n      msgs[index].msgType := concat;\n%s      msgs[index].length := %d;\n" conPartStr (List.length msgs)^
                  sprintf "    endif;\n"^
                  sprintf "    put msg_end;\n"^
                  sprintf "    printMsg(msgs[msg_end]);\n" ^
                  sprintf "    put \"  cons Spat%d\\n\";\n" patNum^
                  sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum^
                  sprintf "    sPat%dSet.content[sPat%dSet.length] := index;\n" patNum patNum^
                  sprintf "    num := index;\n" ^
                  sprintf "  end;\n\n";
                  end
  |`Str s ->str1 ^ 
            sprintf "  Var i, index : indexType;\n  begin\n"^
            sprintf "   index:=0;\n" ^
            sprintf "   i := 1;\n" ^
            sprintf "   while(i<= msg_end) do\n" ^
            sprintf "      if (msgs[i].msgType = agent) then\n"^
            sprintf "        if (msgs[i].ag = %s) then\n" s ^
            sprintf "          index := i;\n" ^
            sprintf "        endif;\n" ^
            sprintf "      endif;\n" ^
            sprintf "      i := i+1;\n" ^
            sprintf "    endwhile;\n" ^
            sprintf "    if(index=0) then\n"^
            sprintf "      msg_end := msg_end + 1 ;\n      index := msg_end;\n      msgs[index].msgType := agent;\n      msgs[index].ag := %s;\n      msgs[index].length := 1;\n" s ^
            sprintf "    endif;\n"^
            sprintf "    put msg_end;\n"^
            sprintf "    printMsg(msgs[msg_end]);\n" ^
            sprintf "    put \"  cons Spat%d\\n\";\n" patNum^
            sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum^
            sprintf "    sPat%dSet.content[sPat%dSet.length] := index;\n"patNum patNum ^
            sprintf "    num := index;\n" ^
            sprintf "  end;\n\n";
  |`Pk role ->str1 ^ 
              sprintf "  Var i, index : indexType;\n  begin\n"^
              sprintf "   index:=0;\n" ^
              sprintf "   i := 1;\n" ^
              sprintf "   while(i<= msg_end) do\n" ^
              sprintf "      if (msgs[i].msgType = key & msgs[i].k.encType = PK) then\n"^
              sprintf "        if (msgs[i].k.ag = %sPk) then\n" role ^
              sprintf "          index := i;\n" ^
              sprintf "        endif;\n" ^
              sprintf "      endif;\n" ^
              sprintf "      i := i+1;\n" ^
              sprintf "    endwhile;\n" ^
              sprintf "    if(index=0) then\n"^
              sprintf "      msg_end := msg_end + 1 ;\n      index := msg_end;\n      msgs[index].msgType := key;\n      msgs[index].k.encType := PK;\n      msgs[index].k.ag := %sPk;\n      msgs[index].length := 1;\n" role ^
              sprintf "    endif;\n"^
              sprintf "    put msg_end;\n"^
              sprintf "    printMsg(msgs[msg_end]);\n" ^
              sprintf "    put \"  cons Spat%d\\n\";\n" patNum^
              sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum^
              sprintf "    sPat%dSet.content[sPat%dSet.length] := index;\n" patNum patNum^
              sprintf "    num := index;\n" ^
              sprintf "  end;\n\n";
  |`Sk role ->str1 ^ 
              sprintf "  Var i, index : indexType;\n  begin\n"^
              sprintf "   index:=0;\n" ^
              sprintf "   i := 1;\n" ^
              sprintf "   while(i<= msg_end) do\n" ^
              sprintf "      if (msgs[i].msgType = key & msgs[i].k.encType = SK) then\n"^
              sprintf "        if (msgs[i].k.ag = %sSk) then\n" role ^
              sprintf "          index := i;\n" ^
              sprintf "        endif;\n" ^
              sprintf "      endif;\n" ^
              sprintf "      i := i+1;\n" ^
              sprintf "    endwhile;\n" ^
              sprintf "    if(index=0) then\n"^
              sprintf "      msg_end := msg_end + 1 ;\n      index := msg_end;\n      msgs[index].msgType := key;\n      msgs[index].k.encType := SK;\n      msgs[index].k.ag := %sSk;\n      msgs[index].length := 1;\n" role ^
              sprintf "    endif;\n"^
              sprintf "    put msg_end;\n"^
              sprintf "    printMsg(msgs[msg_end]);\n" ^
              sprintf "    put \"  cons Spat%d\\n\";\n" patNum^
              sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum^
              sprintf "    sPat%dSet.content[sPat%dSet.length] := index;\n" patNum patNum^
              sprintf "    num := index;\n" ^
              sprintf "  end;\n\n";
  |`Var n ->str1 ^ 
            sprintf "  Var i, index : indexType;\n  begin\n"^
            sprintf "   index:=0;\n" ^
            sprintf "   i := 1;\n" ^
            sprintf "   while(i<= msg_end) do\n" ^
            sprintf "      if (msgs[i].msgType = nonce) then\n"^
            sprintf "        if (msgs[i].noncePart = %s) then\n" n ^
            sprintf "          index := i;\n" ^
            sprintf "        endif;\n" ^
            sprintf "      endif;\n" ^
            sprintf "      i := i+1;\n" ^
            sprintf "    endwhile;\n" ^
            sprintf "    if(index=0) then\n"^
            sprintf "      msg_end := msg_end + 1 ;\n      index := msg_end;\n      msgs[index].msgType := nonce;\n      msgs[index].noncePart := %s;\n      msgs[index].length := 1;\n" n ^
            sprintf "    endif;\n"^
            sprintf "    put msg_end;\n"^
            sprintf "    printMsg(msgs[msg_end]);\n" ^
            sprintf "    put \"  cons Spat%d\\n\";\n" patNum^
            sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum^
            sprintf "    sPat%dSet.content[sPat%dSet.length] := index;\n" patNum patNum^
            sprintf "    num := index;\n" ^
            sprintf "  end;\n\n";
  |_ -> "" 
;;

let genIsPatCode m i patList =
  let atoms = getAtoms m in
  let str1 = sprintf "---pat%d: %s \nprocedure isPat%d(msg:Message; Var flag:boolean);\n" i (output_msg m) i
  in
  match m with 
  |`Aenc(m1,k1) ->begin
                  let i1= getPatNum m1 patList in
                  let i2= getPatNum k1 patList in
                  str1 ^ sprintf "  var flag1,flagPart1,flagPart2 : boolean;\n  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat%d(msgs[msg.aencMsg],flagPart1);
      isPat%d(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;\n  end;\n\n" i1 i2
  end;
  |`Concat msgs ->begin
                  let flagOfParts = String.concat ~sep:"," (List.mapi ~f:(fun i m -> sprintf "flagPart%d" (i+1) ) msgs) in
                  let initFalgParts = String.concat (List.mapi ~f:(fun i m -> sprintf "     flagPart%d := false;\n" (i+1)) msgs) in
                  let isPatOfParts = String.concat (List.mapi ~f:(fun i m -> let patNum = getPatNum m patList in
                                                                             sprintf "        isPat%d(msgs[msg.concatPart[%d]],flagPart%d);\n" patNum (i+1) (i+1)) msgs)
                  in
                  let andFlagParts = String.concat ~sep:" & " (List.mapi ~f:(fun i m -> sprintf "flagPart%d" (i+1) ) msgs) in
                  str1 ^
                  sprintf "  var flag1, %s: boolean;\n  begin\n" flagOfParts ^
                  sprintf "     flag1 := false;\n%s" initFalgParts^
                  sprintf "     if(msg.msgType = concat) then\n" ^
                  sprintf "%s" isPatOfParts ^
                  sprintf "       if (%s) then \n" andFlagParts ^
                  sprintf "         flag1 := true;\n" ^
                  sprintf "       endif;\n" ^
                  sprintf "     endif;\n" ^  
                  sprintf "     flag := flag1;\n" ^
                  sprintf "  end;\n"
  end;
  |`Str s ->begin
            str1 ^ sprintf "  var flag1 : boolean;\n  begin
    flag1 := false;
    if (msg.msgType = agent) then
      flag1 := true;
    endif;
    flag := flag1;\n  end;\n\n"
  end;
  |`Pk role ->begin
              str1 ^ sprintf "  var flag1 : boolean;\n  begin
    flag1 := false;
    if (msg.msgType = key) then
      if (msg.k.encType = PK) then
        flag1 := true;
      endif;
    endif;
    flag := flag1;\n  end;\n\n"
  end;
  |`Sk role ->begin
    str1 ^ sprintf "  var flag1 : boolean;\n  begin
    flag1 := false;
    if (msg.msgType = key) then
      if (msg.k.encType = SK) then
        flag1 := true;
      endif;
    endif;
    flag := flag1;\n  end;\n\n"
  end;
  |`Var n ->begin
            str1 ^ sprintf "  var flag1 : boolean;\n  begin
    flag1 := false;
    if (msg.msgType = nonce) then
      flag1 := true;
    endif;
    flag := flag1;\n  end;\n\n"
  end;
  |_ -> ""
;;
(* gen procedure cons msg *)
let genCons m i patList =
  let atoms = getAtoms m in
  let noDupAtoms = del_duplicate atoms in 
  let j = getPatNum m patList in
  sprintf "procedure cons%d(%s; Var msg:Message; Var num:indexType);\n" j (atoms2Parms noDupAtoms)^
  sprintf "  begin\n    clear msg;\n    clear num;    lookAddPat%d(%s,msg,num);\n" j (atom2Str noDupAtoms)^
  sprintf "    put msg_end;\n"^
  sprintf "    printMsg(msgs[msg_end]);\n" ^
  sprintf "    put \"  cons Spat%d\\n\";\n" j^
  sprintf "  end;\n"
;;

let atoms2Str' atoms =
  String.concat ~sep:", " (List.map ~f:(fun a-> 
                         match a with
                        |`Var n -> n 
                        |`Str r -> r
                        |`Pk role -> role ^ "Pk"
                        |`Sk role -> role ^ "Sk"
                        |_ -> "") atoms)
;;

let genDestruct m i patlist =
  let atoms =getAtoms m in 
  let atoms = del_duplicate atoms in
  let patNum = getPatNum m patlist in
  let str1 = sprintf "procedure destruct%d(msg:Message; %s);\n" patNum (atoms2Parms1 atoms) in
  match m with
  |`Aenc(m1,k1) ->begin let keyAg=match k1 with
                           |`Pk role -> role^"Pk"
                           |`Sk role -> role^"Sk"
                           |_ -> "null"
                   in                  
                   match m1 with
                  |`Concat msgs ->let msgNums = String.concat ~sep:"," (List.mapi ~f:(fun i m -> sprintf "msgNum%d" (i+1)) msgs) in
                                  let str2 = sprintf "  var k1:KeyType;\n    msg1,%s:Message;\n" msgNums ^
                                             sprintf "  begin\n    clear msg1;\n   k1 := msgs[msg.aencKey].k;\n   %s := k1.ag;\n    msg1:=msgs[msg.aencMsg];\n" keyAg^
                                             String.concat ~sep:"\n" (List.mapi ~f:(fun i m -> sprintf "    msgNum%d:=msgs[msg1.concatPart[%d]];" (i+1) (i+1)) msgs)
                                  in 
                                  let str3 = (String.concat (List.mapi ~f:(fun i m'-> match m' with
                                              |`Var n -> sprintf "    %s:=msgNum%d.noncePart;\n" n (i+1)
                                              |`Str r -> sprintf "    %s:=msgNum%d.ag;\n" r (i+1)
                                              |_ -> sprintf "" )msgs))
                                  in
                                  str1 ^ str2^ "\n" ^str3 ^ "  end;\n"
                  |`Var n -> str1 ^ sprintf "  var k1:KeyType;\n    msg1,msgNum1,msgNum2:Message;\n   begin
    clear msg1;
    k1 := msgs[msg.aencKey].k;
    %s := k1.ag;
    msg1:=msgs[msg.aencMsg];
    %s:=msg1.noncePart;
  end;\n" keyAg n
                  |_ -> ""     
  end   
  |`Concat msgs -> let msgNums = String.concat ~sep:"," (List.mapi ~f:(fun i m -> sprintf "msgNum%d" (i+1)) msgs) in
                   let stats = String.concat (List.mapi ~f:(fun i m -> match m with
                      |`Str r -> sprintf "    msgNum%d := msgs[msg.concatPart[%d]];\n" (i+1) (i+1) ^
                                 sprintf "    %s := msgNum%d.ag;\n" r (i+1)
                      |`Var n -> sprintf "    msgNum%d := msgs[msg.concatPart[%d]];\n" (i+1) (i+1) ^
                                 sprintf "    %s := msgNum%d.noncePart;\n" n (i+1)
                      |`Aenc(m1,k1) -> let keyAg = match k1 with 
                                                   |`Pk r -> r ^ "Pk"
                                                   |`Sk r -> r ^ "Sk"
                                                   |_ -> "" 
                                        in
                                        let m1Str = let m1PatNum = getPatNum m1 patlist in
                                                    let m1Atoms = getAtoms m1 in
                                                    match m1 with
                                                    |`Var n -> sprintf "    %s := msgs[msgNum%d.aencMsg].noncePart;\n" n (i+1)
                                                    |`Str r -> sprintf "    %s := msgs[msgNum%d.aencMsg].ag;\n" r (i+1)
                                                    |`Concat msgs -> sprintf "    destruct%d(msgs[msgNum%d.aencMsg], %s);\n" m1PatNum (i+1) (atoms2Str' m1Atoms)
                                                    |_ -> ""
                                        in
                                        sprintf "    msgNum%d := msgs[msg.concatPart[%d]];\n" (i+1) (i+1)^
                                        sprintf "    k := msgs[msgNum%d.aencKey].k;\n" (i+1) ^
                                        sprintf "    %s := k.ag;\n" keyAg ^
                                        sprintf "%s" m1Str 
                      |`Pk r -> sprintf "    msgNum%d := msgs[msg.concatPart[%d]];\n" (i+1) (i+1) ^
                                sprintf "    %sPk := msgNum%d.k.ag;\n" r (i+1)
                      |_ -> "") msgs) in
                  str1 ^ sprintf "  Var %s: Message;
    k: KeyType;
  begin\n%s
  end;\n" msgNums stats   (* 2020-04-06: finished !! *)    
  |_ -> ""
;;

let genGet_msgNoCode () =
  sprintf "
  procedure get_msgNo(msg:Message; Var num:indexType);
    var index:indexType;
        j:indexType;
        flag:boolean;
    begin
      index:=0;
      for i: indexType do
        if (msgs[i].msgType = msg.msgType) then
          if ( (msg.msgType=agent & msgs[i].ag=msg.ag)
          | (msg.msgType=nonce & msgs[i].noncePart=msg.noncePart)
          | (msg.msgType=key & (msgs[i].k.encType=msg.k.encType & msgs[i].k.ag=msg.k.ag))
          | (msg.msgType=aenc & (msgs[i].aencMsg=msg.aencMsg & msgs[i].aencKey=msg.aencKey))
          | (msg.msgType=senc & (msgs[i].sencMsg=msg.sencMsg & msgs[i].sencKey=msg.sencKey))
          ) then 
            index:=i;
          elsif (msg.msgType=concat & msg.length = msgs[i].length) then
            j := msg.length;
            flag := true;
            while j > 0 do
              if (msg.concatPart[j] != msgs[i].concatPart[j]) then
                flag := false;
              endif;
              j := j - 1;
            end;
            if (flag) then
              index := i;
            endif;
          endif;
        endif;
      endfor;
      num := index;
    end;\n";
;;

let genPrintMsgCode () =
  sprintf "
  procedure printMsg(msg:Message);
    var i:indexType;
    begin
      if msg.msgType=null then
        put \"null\\n\";
      elsif msg.msgType=agent then
        put msg.ag;
      elsif msg.msgType=nonce then
        put msg.noncePart;
      elsif msg.msgType=key then
        if msg.k.encType=PK then
          put \"PK(\";
          put msg.k.ag;
          put \")\";
        elsif msg.k.encType=SK then
          put \"SK(\";
          put msg.k.ag;
          put \")\";
        elsif msg.k.encType=Symk then
          put \"SymK(\";
          put msg.k.ag;
          put \")\";
        endif;
      elsif msg.msgType=aenc then
        put \"aenc{\";
        printMsg(msgs[msg.aencMsg]);
        put \",\";
        printMsg(msgs[msg.aencKey]);
        put \"}\";
      elsif msg.msgType=senc then
        put \"senc{\";
        printMsg(msgs[msg.sencMsg]);
        put \",\";
        printMsg(msgs[msg.sencKey]);
        put \"}\";
      elsif msg.msgType=concat then
        put \"concat(\";
        i := 1;
        while i < msg.length do
          printMsg(msgs[msg.concatPart[i]]);
          put \",\";
          i := i+1;
        end;
        printMsg(msgs[msg.concatPart[i]]);
        put\")\";
      endif;
    end;\n"
;;
let genInverseKeyCode ()=
  sprintf "function inverseKey(msgK:Message):Message;
  var key_inv:Message;
  begin
    key_inv.msgType := null;
    if (msgK.msgType=key) then
      key_inv.msgType := msgK.msgType;
      key_inv.k.ag := msgK.k.ag;
      if (msgK.k.encType=PK) then
        key_inv.k.encType := SK;
      elsif (msgK.k.encType=SK) then
        key_inv.k.encType := PK;
      endif;
    endif;
    return key_inv;
  end;\n";
;;

let genLookUpCode () =
  sprintf "function lookUp(msg: Message): indexType; --- not used.
  var index : indexType;
  begin
    index:=0;
    for i: indexType do
      if(msgs[i].msgType=msg.msgType) then
        if(msgs[i].msgType=agent & msgs[i].ag=msg.ag) then
          index := i;
        elsif(msgs[i].msgType=nonce & msgs[i].noncePart=msg.noncePart) then
          index := i;
        elsif(msgs[i].msgType=key & (msgs[i].k.encType=msg.k.encType & msgs[i].k.ag=msg.k.ag)) then
          index := i;
        elsif(msgs[i].msgType = aenc & (msgs[i].aencKey=msg.aencKey & msgs[i].aencMsg=msg.aencMsg)) then
          index := i;
        elsif(msgs[i].msgType = senc & (msgs[i].sencKey=msg.sencKey & msgs[i].sencMsg=msg.sencMsg)) then
          index := i;
        elsif(msgs[i].msgType = concat & (msgs[i].concatPart[1]=msg.concatPart[1] & msgs[i].concatPart[2]=msg.concatPart[2])) then
          index := i;
        endif;
      endif;
    endfor;
    return index;
  end;\n";
;;
(* generate m by its submsgs*)
let consMsgBySubs m patList =
  let i = getPatNum m patList in 
  match m with
  |`Aenc(m1,k1) -> (* submessage are m1 and k1*)
                  let numM1 = getPatNum m1 patList in (* construct_i_by_numM1_numK1 *)
                  let numK1 = getPatNum k1 patList in
                  (* let agK = match k1 with
                            |`Pk r -> sprintf "loc%sPk" r
                            |`Sk r -> sprintf "loc%sSk" r
                            |_ -> ""
                  in *)
                  sprintf "function construct%dBy%d%d(msgNo%d, msgNo%d:indexType):indexType;\n" i numM1 numK1 numM1 numK1^
                  sprintf "  var index: indexType;\n"^
                  sprintf "      ---msg : Message;\n  begin\n"^
                  sprintf "   index := 0;\n"^      
                  sprintf "   for i :indexType do\n"^
                  sprintf "     if (msgs[i].msgType = aenc) then\n"^
                  sprintf "       if (msgs[i].aencMsg = msgNo%d & msgs[i].aencKey = msgNo%d) then\n" numM1 numK1 ^
                  sprintf "         index := i;\n" ^
                  sprintf "       endif;\n" ^
                  sprintf "     endif;\n" ^
                  sprintf "   endfor;\n" ^
                  sprintf "   if (index = 0) then \n"^
                  sprintf "     msg_end := msg_end + 1;\n" ^
                  sprintf "     index := msg_end;\n" ^
                  sprintf "     msgs[index].msgType := aenc;\n" ^
                  sprintf "     msgs[index].aencMsg := msgNo%d;\n" numM1 ^
                  sprintf "     msgs[index].aencKey := msgNo%d;\n" numK1 ^
                  sprintf "     msgs[index].length := 1;\n"^
                  sprintf "   endif;\n"^
                  sprintf "   return index;\n" ^
                  sprintf "  end;\n\n" 
  |`Senc(m1,symK) -> (* submessage are m1 and symK *)
                  let numM1 = getPatNum m1 patList in (* construct_i_by_numM1_numK1 *)
                  let numK = getPatNum symK patList in
                  sprintf "function construct%dBy%d%d(msgNo%d, msgNo%d:indexType):indexType;\n" i numM1 numK numM1 numK^
                  sprintf "  var index: indexType;\n"^
                  sprintf "      ---msg : Message;\n  begin\n"^
                  sprintf "   index := 0;\n"^      
                  sprintf "   for i :indexType do\n"^
                  sprintf "     if (msgs[i].msgType = senc) then\n"^
                  sprintf "       if (msgs[i].sencMsg = msgNo%d & msgs[i].sencKey = msgNo%d) then\n" numM1 numK ^
                  sprintf "         index := i;\n" ^
                  sprintf "       endif;\n" ^
                  sprintf "     endif;\n" ^
                  sprintf "   endfor;\n" ^
                  sprintf "   if (index = 0) then \n"^
                  sprintf "     msg_end := msg_end + 1;\n" ^
                  sprintf "     index := msg_end;\n" ^
                  sprintf "     msgs[index].msgType := senc;\n" ^
                  sprintf "     msgs[index].sencMsg := msgNo%d;\n" numM1 ^
                  sprintf "     msgs[index].sencKey := msgNo%d;\n" numK ^
                  sprintf "     msgs[index].length := 1;\n"^
                  sprintf "   endif;\n"^
                  sprintf "   return index;\n" ^
                  sprintf "  end;\n"
  |`Concat msgs -> (* submessage are elements in msgs*)
                  let subMsgNo = String.concat (List.map ~f:(fun m -> sprintf "%d" (getPatNum m patList)) msgs) in
                  let msgNoStr = String.concat ~sep:"," (List.mapi ~f:(fun j m -> sprintf "msgNo%d" (j+1)) msgs) in
                  let ifStr = String.concat ~sep:" & " (List.mapi ~f:(fun j m -> sprintf "msgs[i].concatPart[%d] = msgNo%d" (j+1) (j+1) )msgs)
                  in
                  let assignStr = String.concat (List.mapi ~f:(fun j m -> sprintf "     msgs[index].concatPart[%d] := msgNo%d;\n" (j+1) (j+1)) msgs)
                  in
                  sprintf "function construct%dBy%s(%s:indexType):indexType;\n" i subMsgNo msgNoStr ^
                  sprintf "  var index : indexType;\n"^
                  sprintf "      ---msg : Message;\n  begin\n"^
                  sprintf "   index := 0;\n"^ 
                  sprintf "   for i : indexType do\n"^
                  sprintf "     if (msgs[i].msgType = concat & msgs[i].length = %d) then\n" (List.length msgs) ^
                  sprintf "       if (%s) then\n" ifStr ^
                  sprintf "         index := i;\n"^
                  sprintf "       endif;\n"^
                  sprintf "     endif;\n" ^
                  sprintf "   endfor;\n"^
                  sprintf "   if (index = 0) then \n"^
                  sprintf "     msg_end := msg_end + 1;\n" ^
                  sprintf "     index := msg_end;\n" ^
                  sprintf "     msgs[index].msgType := concat;\n" ^
                  sprintf "%s" assignStr ^
                  sprintf "     msgs[index].length := %d;\n" (List.length msgs)^
                  sprintf "   endif;\n"^
                  sprintf "   return index;\n" ^
                  sprintf "  end;\n\n"        
  | _ -> sprintf "--- Sorry, construct_function of this pattern has not been written!\n\n"
;;
let genExistCode () =
  sprintf "function exist(PatnSet:msgSet; msgNo:indexType):boolean;
  var flag:boolean;
  begin
    flag := false;
    for i:msgLen do
      if (msgNo != 0 & PatnSet.content[i] = msgNo) then 
        flag := true;
      endif;
    endfor;
    return flag;
  end;\n";
;;

(* Generating function matchAgent() code *)
let genMatchAgent () =
  sprintf "function matchAgent(Var locAg: AgentType; Var Ag: AgentType):boolean;  ---if ag equals to locAg which was derived from recieving msg, or anyAgent, then true
  var flag : boolean;
  begin
    flag := false;
    if (Ag = anyAgent) then
      flag := true;
      Ag := locAg;
    elsif (locAg = Ag) then
      flag := true;
    else
      flag := false;
    endif;
    return flag;
  end;\n\n"
;;

(* Generating function matchNonce() code *)
let genMatchNonce () =
  sprintf "function matchNonce(Var locNa: NonceType; Var Na: NonceType):boolean;  ---if Na equals to locNa which was derived from recieving msg, or anyNonce, then true
  var flag : boolean;
  begin
    flag := false;
    if (Na = anyNonce) then
      flag := true;
      Na := locNa;
    elsif (locNa = Na) then
      flag:=true;
    else
      flag := false;
    endif;
    return flag;
  end;\n\n"
;;

(* Generating function match(msg1,msg2) code *)
let rec genMatchMsg ()=
  genMatch() ^ genMatchPat() 

and genMatch () =
  sprintf "function match(var m1,m2:Message):boolean;
  var concatFlag: boolean;
      i: indexType;
  begin 
    if m1.msgType = agent & m2.msgType = agent then
	    return matchAgent(m1.ag, m2.ag); ---ag and noncePart should be initiallized as anyAgent or anyNonce (m1.ag != anyAgent & m2.ag != anyAgent &)
    elsif m1.msgType = nonce & m2.msgType = nonce then
	    return matchNonce(m1.noncePart, m2.noncePart); --- m1.noncePart != anyNonce & m2.noncePart != anyNonce &
    elsif m1.msgType = key & m2.msgType = key then
	    return (m1.k.encType = m2.k.encType) & (matchAgent(m1.k.ag, m2.k.ag));
    elsif m1.msgType = aenc & m2.msgType = aenc then
	    return match(msgs[m1.aencMsg], msgs[m2.aencMsg]) & match(msgs[m1.aencKey], msgs[m2.aencKey]);
    elsif m1.msgType = senc & m2.msgType = senc then
	    return match(msgs[m1.sencMsg], msgs[m2.sencMsg]) & match(msgs[m1.sencKey], msgs[m2.sencKey]);
    elsif (m1.msgType=concat & m2.msgType=concat) & (m1.length = m2.length)  then
      concatFlag := true;
      i := m1.length;
      while (i > 0 & concatFlag)do
        concatFlag := concatFlag & match(msgs[m1.concatPart[i]], msgs[m2.concatPart[i]]);
        i := i-1;
      end;
	    return concatFlag;
    else
	    return false;
    endif;	
  end;\n\n"

and genMatchPat () =
  sprintf "function matchPat(var m1:Message; sPatnSet: msgSet):boolean;
  var flag:boolean;
      i : indexType;
  begin
    flag := false;
    i := 1;
    while (i<sPatnSet.length+1) do
      if(match(m1,msgs[sPatnSet.content[i]])) then
        flag := true;
      endif;
      i := i+1;
    end;
    return flag;
  end;\n"
;;


(* print procedures and functions. *)
let print_procedures actions =
  let patlist = getPatList actions in    (* get all patterns from actions *)
  let non_dup = del_duplicate patlist in (* delete duplicate *)
  let non_equivalent = getEqvlMsgPattern non_dup in (* delete equivalent class *) 
  match actions with
  |`Null -> sprintf "null"
  |`Actlist arr ->let str1 = String.concat (List.mapi ~f:(fun i pat -> (genSynthCode pat (i+1) non_equivalent) ^ genIsPatCode pat (i+1) non_equivalent ^ genConstrustSpatN pat (i+1) non_equivalent) non_equivalent)
                  in
                  (*genCons / genDestruct by actions *)
                  let msgs = getMsgs actions in
                  let str2 = String.concat (List.mapi ~f:(fun i m -> genCons m (i+1) non_equivalent ^ genDestruct m (i+1) non_equivalent) non_equivalent)
                  in
                  (* print get_msgNo: procedure get_msgNo(msg:Message; Var num : indexType); *)
                  let str3 = genGet_msgNoCode () ^ genPrintMsgCode () in
                  (* print functions: inverseKey/lookUp/constructsAbyBC*)
                  let str4 = genInverseKeyCode ()^ genLookUpCode () ^ String.concat (List.map ~f:(fun pat -> consMsgBySubs pat non_equivalent) non_equivalent) in
                  str3 ^ str1 ^ str2 ^ str4 ^ genExistCode () ^genMatchAgent () ^ genMatchNonce () ^ genMatchMsg ();
  | _ ->  begin
          let str1 = String.concat (List.mapi ~f:(fun i pat -> (genSynthCode pat (i+1) non_equivalent) ^ genIsPatCode pat (i+1) non_equivalent ^ genConstrustSpatN pat (i+1) non_equivalent) non_equivalent)
          in
          let msgs = getMsgs actions in
          let str2 = String.concat (List.mapi ~f:(fun i (seq, r, m) -> genCons m (i+1) non_equivalent ^ genDestruct m (i+1) non_equivalent) msgs)
          in
          (* print get_msgNo: procedure get_msgNo(msg:Message; Var num : indexType); *)
          let str3 = genGet_msgNoCode () ^ genPrintMsgCode () in
          (* print functions: inverseKey/lookUp/constructsAbyBC*)
          let str4 = genInverseKeyCode ()^ genLookUpCode () ^ String.concat (List.map ~f:(fun pat -> consMsgBySubs pat non_equivalent) non_equivalent) in
          str3 ^ str1 ^ str2 ^ str4 ^ genExistCode () ^ genMatchAgent () ^ genMatchNonce () ^ genMatchMsg ();
          end;
;;

(*-----------------------------------------------*)
(* records of roleA and roleB; return string*)
let rec getNonces msgs =
  match msgs with
  | [] -> []
  | hd :: tl -> (getNoncesOfMsg hd) @ (getNonces tl)

and getNoncesOfMsg m =
  match m with
  |`Var n -> [n]
  |`Concat msgs -> List.concat (List.map ~f:getNoncesOfMsg msgs)
  |_ -> []
;;

let nType2Str nlist = 
  String.concat ~sep:";\n   " (List.map ~f:(fun n -> sprintf "loc%s : NonceType" n) nlist)
;;

let agType2Str rlist =
  String.concat ~sep: ";\n   " (List.map ~f:(fun r -> sprintf "loc%s : AgentType" r) rlist)
;;

(*return string*)
let rec printMurphiRecords knw nlist aglist =
  match knw with
  |`Null -> sprintf "null"
  | `Knowledge (r,m) -> let str1 = sprintf "  Role%s : record\n" r in
                        let str2 = String.concat ~sep:"\n" (List.map ~f:(fun n -> sprintf "   %s : NonceType;" n) nlist) ^ "\n" in
                        let str3 = String.concat ~sep:"\n" (List.map ~f:(fun r -> sprintf "   %s : AgentType;" r) aglist) ^ "\n" in
                        let str4 = sprintf "   %s;\n   %s;\n   st: %sStatus;\n" (nType2Str nlist) (agType2Str aglist) r in
                        let str5 = sprintf "   commit : boolean;\n" in
                        let str6 = sprintf "  end;\n" in
                        str1 ^ str2 ^ str3 ^ str4 ^ str5 ^ str6
  | `Knowledge_list knws ->String.concat (List.map ~f:(fun k -> printMurphiRecords k nlist aglist) knws)
;;

(*procedures and functions 
  rules of roleA and roleB
  rules of intruder
  ---rules of encryption/decryption/enconcat/deconcat*)
let trActionsToMurphi actions knws =
  print_procedures actions ^ (* print prcedures and functions. *)                    
  printIntruderProcedures actions knws^                                
  print_murphiRule actions knws^ (* print rules for roleA and roleB *)
  print_murphiRule_ofIntruder actions (* print rules for intruder *)
  (*encryption and decryption rules, enconcat and deconcat rules *)
;;

let print_startstate r num m knws =
  let msgOfKnws = getMsgOfRoles knws in
  let nlist = getNonces msgOfKnws in
  let rlist = getRolesFromKnws knws [] in
  String.concat (List.map ~f:(fun m1 -> if isSamePat m m1 then
                                          let atoms = getAtoms m1 in
                                          let str1 = match (m,m1) with
                                          |(`Concat msgs,`Concat msgs1) -> let strs = (List.map2_exn ~f:(fun m' m1' -> 
                                                                            match (m',m1') with
                                                                            |(`Var n,`Var n1) -> sprintf "role%s[%d].%s := %s;\n" r num n1 n                                                                            
                                                                            |(`Str role,`Str role1) -> sprintf "role%s[%d].%s := %s;\n" r num role1 role                                               
                                                                            |_ -> "error: mismatching!\n") msgs msgs1) 
                                                                          in
                                                                          (String.concat (List.map ~f:(fun s -> sprintf "  %s" s) strs)) ^ 
                                                                          sprintf "  role%s[%d].st := %s1;\n" r num r ^
                                                                          sprintf "  role%s[%d].commit := false;\n" r num
                                          |_ -> sprintf "null\n"
                                          in
                                          let str2 = String.concat (List.map ~f:(fun n -> 
                                                                    if listwithout atoms (`Var n) then sprintf "  role%s[%d].%s := anyNonce;\n" r num n
                                                                    else "" ) nlist)                                  
                                          in
                                          let str3 = String.concat (List.map ~f:(fun r1 -> 
                                                                    if listwithout atoms (`Str r1) then sprintf "  role%s[%d].%s := anyAgent;\n" r num r1
                                                                    else "") rlist)                                            
                                          in
                                          str1 ^ str2 ^ str3
                                        else sprintf "" ) msgOfKnws)
;;
(*startstate of roleA and role B*)
let rec printMuriphiStart env k =
  match env with
  |`Null -> sprintf "null"
  |`Env_agent (r,num,m) -> print_startstate r num m k;(* print startstates *)
  |`Envlist envs -> String.concat (List.map ~f:(fun e -> printMuriphiStart e k) envs)
  |_ -> sprintf "null"
;;

(* pritn startstate of arrays *)
let atoms2Str atoms recvRole = 
  String.concat ~sep:", " (List.map ~f:(fun a -> match a with
                                      |`Null -> sprintf "null"
                                      |`Var n -> sprintf "role%s[i].%s" recvRole n
                                      |`Str r -> sprintf "role%s[i].%s" recvRole r
                                      |`Pk rolename -> sprintf "role%s[i].%s" recvRole rolename
                                      |`Sk rolename -> sprintf "role%s[i].%s" recvRole rolename
                                      |`K (r1,r2) -> sprintf "role%s[i].%s, role%s[i].%s" recvRole r1 recvRole r2 (* symetric key must belong to 2 principals simultaneously *)
                                      |_ -> "" ) atoms)
;;

let rec initSpatSet actions patlist = 
  match actions with
  |`Null -> ""
  |`Act1(seq, r1, r2, n, m) ->let patNum = (getPatNum m patlist) in
                              let atoms = getAtoms m in
                              let atoms = del_duplicate atoms in
                              sprintf "  for i : role%sNums do\n" r2 ^
                              sprintf "    constructSpat%d(%s, gnum);\n" patNum (atoms2Str atoms r2) ^
                              (* sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum ^
                              sprintf "    sPat%dSet.content[sPat%dSet.length] := constructSpat%d(%s);\n" patNum patNum patNum (atoms2Str atoms r2) ^ *)
                              sprintf "  endfor;\n"
  |`Act2(seq, r1, r2, m) ->let patNum = (getPatNum m patlist) in
                           let atoms = getAtoms m in
                           let atoms = del_duplicate atoms in
                           sprintf "  for i : role%sNums do\n" r2 ^
                           sprintf "    constructSpat%d(%s, gnum);\n" patNum (atoms2Str atoms r2) ^
                           (* sprintf "    sPat%dSet.length := sPat%dSet.length + 1;\n" patNum patNum ^
                           sprintf "    sPat%dSet.content[sPat%dSet.length] := constructSpat%d(%s);\n" patNum patNum patNum (atoms2Str atoms r2) ^ *)
                           sprintf "  endfor;\n"
                              
  |`Actlist arr -> String.concat (List.map ~f:(fun a -> initSpatSet a patlist) arr)
;;

let printImpofStart actions knws =
  let rlist = getRolesFromKnws knws [] in
  let str1 = sprintf "  ---intruder.B := Bob;
  for i:chanNums do
    ch[i].empty := true;
  endfor;
  ---ch.empty := true;

  for i: indexType do
    emit[i]:=false;
  endfor;

  for i:indexType do
    msgs[i].msgType := null;
    msgs[i].length := 0;
  endfor;

  msg_end := 0;
  for i:indexType do\n"
  in
  let patlist = getPatList actions in    (* get all patterns from actions *)
  let non_dup = del_duplicate patlist in (* delete duplicate *)
  let non_equivalent = getEqvlMsgPattern non_dup in
  let str2 = String.concat (List.mapi ~f:(fun i p -> sprintf "    pat%dSet.content[i] := 0;\n" (getPatNum p non_equivalent) ^
                                                     sprintf "    sPat%dSet.content[i] := 0;\n" (getPatNum p non_equivalent)) non_equivalent)
  in
  let str3 = String.concat (List.mapi ~f:(fun i p -> sprintf "  pat%dSet.length := 0;\n" (getPatNum p non_equivalent) ^
                                                     sprintf "  sPat%dSet.length := 0;\n" (getPatNum p non_equivalent)) non_equivalent)
  in
  let kNum = getPatNum (`Pk "A") non_equivalent in
  let rNum = getPatNum (`Str "Intruder") non_equivalent in (* the init_knws of intruder should include the id of itself *)
  let str4 = sprintf "
  for i:indexType do 
    Spy_known[i] := false;
  endfor;

  msg_end:=msg_end+1;
  msgs[msg_end].msgType := key;
  msgs[msg_end].k.ag:=Intruder;
  msgs[msg_end].k.encType:=SK;
  msgs[msg_end].length := 1;
  pat%dSet.length := pat%dSet.length + 1; 
  pat%dSet.content[pat%dSet.length] :=msg_end;
  Spy_known[msg_end] := true;
  " kNum kNum kNum kNum
  in
  let str4 = String.concat (List.map ~f:(fun r -> sprintf "  for i : role%sNums do\n" r ^
                                                  sprintf "    msg_end := msg_end+1;\n    msgs[msg_end].msgType := key;\n" ^
                                                  sprintf "    msgs[msg_end].k.ag := role%s[i].%s;\n" r r^
                                                  sprintf "    msgs[msg_end].k.encType:=PK;\n    msgs[msg_end].length := 1;\n    pat%dSet.length := pat%dSet.length + 1;\n" kNum kNum ^
                                                  sprintf "    pat%dSet.content[pat%dSet.length] :=msg_end;\n" kNum kNum ^
                                                  sprintf "    Spy_known[msg_end] := true;\n"^
                                                  sprintf "  endfor;\n"
                            ) rlist)
  in
  str1 ^ str2 ^ 
  "  endfor;
  for i:indexType do 
    Spy_known[i] := false;
  endfor;\n" ^
  str3 ^ str4 ^
  sprintf "  msg_end := msg_end + 1;\n" ^
  sprintf "  msgs[msg_end].msgType := agent;\n" ^
  sprintf "  msgs[msg_end].ag := Intruder;\n" ^
  sprintf "  msgs[msg_end].length := 1;\n" ^
  sprintf "  pat%dSet.length := pat%dSet.length + 1;\n" rNum rNum ^
  sprintf "  pat%dSet.content[pat%dSet.length] := msg_end;\n" rNum rNum ^
  sprintf "  Spy_known[msg_end] := true;\n" ^

  sprintf "  msg_end := msg_end + 1;\n" ^
  sprintf "  msgs[msg_end].msgType := key;\n" ^
  sprintf "  msgs[msg_end].k.ag := Intruder;\n" ^
  sprintf "  msgs[msg_end].k.encType := PK;\n" ^
  sprintf "  msgs[msg_end].length := 1;\n" ^
  sprintf "  pat%dSet.length := pat%dSet.length + 1;\n" kNum kNum ^
  sprintf "  pat%dSet.content[pat%dSet.length] := msg_end;\n" kNum kNum ^
  sprintf "  Spy_known[msg_end] := true;\n" ^
   (initSpatSet actions non_equivalent) ^ (* initialize sample pattern Set *)
  "\n"
;;

let rec printGoal2Murphi g =
  match g with
  |`Null -> sprintf "null\n"
  |`Secretgoal (seq,m) -> printSecGoal (seq,m)
  |`Agreegoal (seq,r1,r2,m) -> printAgreeGoal (seq,r1,r2,m) 
  |`Goallist gols -> String.concat (List.map ~f:(fun g -> printGoal2Murphi g) gols)

and printSecGoal (seq,m) =
  sprintf "
invariant \"%s\"
  forall i:indexType do
    (msgs[i].msgType=nonce & msgs[i].noncePart = %s)
    ->
    Spy_known[i] = false
end;\n" seq (output_msg m)
and printAgreeGoal (seq,r1,r2,m) = 
  let mstr = (output_msg m) in
  sprintf "\ninvariant \"%s\"\n" seq ^
  sprintf "  forall i: role%sNums do\n" r2 ^
  sprintf "    role%s[i].commit = true \n    ->\n" r2 ^
  sprintf "    (exists j: role%sNums do
      ---role%s[j].commit = true &
      role%s[i].%s = role%s[j].%s
    endexists)
  endforall;\n" r1 r1 r1 mstr r2 mstr
;;

let agents2Str rlist =
  let intruStr = if listwithout rlist ("Intruder") then "Intruder, " else "" in
  intruStr ^ String.concat ~sep:", " rlist
;;

let nonce2Str nlist =
  String.concat ~sep:", " nlist
;;

(* print agents status might occur (in enum {} type )*)
let agentSStatus rlist lensOfrlist =
  String.concat ~sep:";\n  " (List.mapi ~f:(fun i r -> 
                            let len = match List.nth lensOfrlist i with
                                      |None -> 0
                                      |Some l -> l
                            in
                            let statuslist = ref [] in
                            for j = 1 to len do
                              let statu = sprintf "%s%d" r j in
                              statuslist := !statuslist @ [statu]
                            done;
                            let status = String.concat ~sep:"," !statuslist in
                            sprintf "%sStatus: enum{%s}" r status ) rlist)
;;

(*roleA : Array[roleANums] of RoleA;  ---variables of type Agents should be derivred by agents in knwss
  roleB : Array[roleBNums] of RoleB;*)
let rlistToVars rlist =
  String.concat ~sep:";\n  " (List.map ~f:(fun r -> 
                sprintf "role%s : Array[role%sNums] of Role%s" r r r) rlist)
;;

let printPatSetVars pats =
  String.concat  (List.mapi ~f:(fun i p ->sprintf "  pat%dSet: msgSet;\n" (i+1)^
                                          sprintf "  sPat%dSet: msgSet;\n" (i+1)) pats)
;;

let printMurphiConsTypeVars actions k env=
  (* print const *)
  let msgs = getMsgOfRoles k in
  let nlist = getNonces msgs in

  let rlist = getRolesFromKnws k [] in
  let rolesOfEnv = getRolesFromEnv env [] in
  let nonceOfEnv = getNonceFromEnv env [] in
  let actsOfAllRls = getActsList actions rlist in (* Get act list of each role in rlist *)
  let lensOfactStr = List.map ~f: List.length actsOfAllRls in

  let patlist = getPatList actions in    (* get all patterns from actions *)
  let non_dup = del_duplicate patlist in (* delete duplicate *)
  let pats = getEqvlMsgPattern non_dup in

  let maxMsgLen = getMaxLenMsg actions in
  let concatParts = ref "\n    concatPart: Array[msgLen] of indexType;" in

  sprintf "const\n" ^
  String.concat ~sep:"\n" (List.map ~f:(fun r -> sprintf "  role%sNum:1;" r) rlist) ^
  "
  totalFact:400;
  msgLength:10;
  chanNum:10;\n" ^

  (* print type*)
  sprintf "type
  indexType:0..totalFact;\n"^
  String.concat ~sep:"\n" (List.map ~f:(fun r -> sprintf "  role%sNums:1..role%sNum;" r r) rlist) ^
  "
  msgLen:0..msgLength;
  chanNums:1..chanNum;\n"^

  sprintf "
  AgentType : enum{%s,anyAgent}; ---Intruder 
  NonceType : enum{%s, anyNonce};  \n" (agents2Str rolesOfEnv) (nonce2Str nonceOfEnv)
  ^
  sprintf "
  EncryptType : enum{PK,SK,Symk};
  KeyType: record 
    encType: EncryptType; 
    ag: AgentType; 
  end;\n\n  %s;\n" (agentSStatus rlist lensOfactStr)
  (*AStatus : enum {A1,A2,A3}; ---the roles status should be derived from actions and the principals
  BStatus : enum {B1,B2,B3};*)
  ^"
  MsgType : enum {null,agent,nonce,key,aenc,senc,concat,hash};
  Message: record
    msgType : MsgType;
    ag : AgentType;
    noncePart : NonceType;
    k : KeyType;
    aencMsg : indexType;
    aencKey : indexType;
    sencMsg : indexType;
    sencKey : indexType;"^ !concatParts ^ "--- concatParts could be written in arrays: concatPart: Array[msgLen] of indexType" ^"
    length : indexType;
  end;
  Channel: record
    msg : Message;
    sender : AgentType;
    receiver : AgentType;
    empty : boolean;
  end;\n" ^ printMurphiRecords k nlist rlist ^ (* print records of principals *)
  "
  ---RoleIntruder: record
  ---  B : AgentType;
  ---send;

  msgSet: record
    content : Array[indexType] of indexType;
    length : indexType;
  end;

var
  ch : Array[chanNums] of Channel;\n"^
  sprintf "  %s;\n" (rlistToVars rlist )^
  "
  ---intruder    : RoleIntruder;
  msgs : Array[indexType] of Message;
  msg_end: indexType;\n"^
  sprintf "%s\n" (printPatSetVars pats) ^
  sprintf "  Spy_known: Array[indexType] of boolean;
  ---systemEvent   : array[eventNums] of Event;
  ---eve_end       : eventNums;
  emit: Array[indexType] of boolean;
  gnum : indexType;\n\n" (* global num*) 
 ;;

let output_murphiCode pocol =
  match pocol with
  |`Null -> sprintf "null\n"
  |`Pocol (k,a,env,g) -> (printMurphiConsTypeVars a k env) ^ (*print murphi const/type*)
                         (trActionsToMurphi a k) ^ (* print murphi rules *)
                         "startstate\n" ^ (* print startstate *)
                         (printMuriphiStart env k) ^ (printImpofStart a k) ^
                         "end;\n" ^
                         (printGoal2Murphi g) (* print murphi goals *)
;;

let create_file filename str =
  let outc = Out_channel.create filename in
  fprintf outc "%s" str;
  Out_channel.close outc
;;

let genCode outc value =
  match value with
  |`Null -> create_file "outputs/result.m" "null"
  |`Protocol (n,p) -> create_file "outputs/result.m" (output_murphiCode p)
;;