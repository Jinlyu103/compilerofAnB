---Murphi Code:
type -----
RoleA : record
 A : AgentType;
 B : AgentType;
 Na : NonceType;
 st : AStatus;
end;
RoleB : record
 B : AgentType;
 Nb : NonceType;
 st : BStatus;
end;
---pat1: aenc{ < Na.A > }pk(B) 
procedure lookAddPat1(Na:NonceType; A:AgentType; B:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
    index:=0;
   lookAddPat2(Na, A,msg1,i1);
   lookAddPat6(B,msg2,i2);
   for i : msgLen do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg:=i1; 
     msgs[index].aencKey:=i2; 
   endif;
   num:=index;
   msg:=msgs[index];
 end;
---pat2: Na.A 
procedure lookAddPat2(Na:NonceType; A:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat7(Na,msg1,i1);
   lookAddPat3(A,msg2,i2);
   for i : msgLen do
     if (msgs[i].msgType = concat) then
       if (msgs[i].concatPart1 = i1 & msgs[i].concatPart2 = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart1:=i1; 
     msgs[index].concatPart2:=i2; 
   endif;
   num:=index;
   msg:=msgs[index];
 end;
---pat3: A 
procedure lookAddPat3(A:AgentType; Var msg:Message; Var num : indexType);
 Var index : indexType;
 begin
   index:=0;
   for i: msgLen do
     if (msgs[i].msgType = agent) then
       if (msgs[i].ag = A) then
         index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := agent;
     msgs[index].ag:=A; 
   endif;
   num:=index;
   msg:=msgs[index];
  end;
---pat4: aenc{ < Na.Nb > }pk(A) 
procedure lookAddPat4(Na:NonceType; Nb:NonceType; A:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
    index:=0;
   lookAddPat5(Na, Nb,msg1,i1);
   lookAddPat6(A,msg2,i2);
   for i : msgLen do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg:=i1; 
     msgs[index].aencKey:=i2; 
   endif;
   num:=index;
   msg:=msgs[index];
 end;
---pat5: Na.Nb 
procedure lookAddPat5(Na:NonceType; Nb:NonceType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat7(Na,msg1,i1);
   lookAddPat7(Nb,msg2,i2);
   for i : msgLen do
     if (msgs[i].msgType = concat) then
       if (msgs[i].concatPart1 = i1 & msgs[i].concatPart2 = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart1:=i1; 
     msgs[index].concatPart2:=i2; 
   endif;
   num:=index;
   msg:=msgs[index];
 end;
---pat6: pk(A) 
procedure lookAddPat6(A:AgentType; Var msg:Message; Var num : indexType);
 Var index : indexType;
 begin
   index:=0;
   for i: msgLen do
     if (msgs[i].msgType = key) then
       if (msgs[i].k.encTyp = PK & msgs[i].k.ag = A) then
         index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := key;
     msgs[index].k.encTyp:=PK; 
     msgs[index].k.ag:=A; 
   endif;
   num:=index;
   msg:=msgs[index];
  end;
---pat7: Nb 
procedure lookAddPat7(Nb:NonceType; Var msg:Message; Var num : indexType);
 Var index : indexType;
 begin
   index:=0;
   for i: msgLen do
     if(msgs[i].msgType=nonce) then
       if(msgs[i].noncePart=Nb) then
         index:=i
       endif;
     endif
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := nonce;
     msgs[index].noncePart:=Nb; 
   endif;
   num:=index;
   msg:=msgs[index];
  end;
---pat8: aenc{ < Nb > }pk(B) 
procedure lookAddPat8(Nb:NonceType; B:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat7(Nb,msg1,i1);
   lookAddPat6(B,msg2,i2);
   for i : msgLen do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg:=i1; 
     msgs[index].aencKey:=i2; 
   endif;
   num:=index;
   msg:=msgs[index];
 end;
rule " roleA1 "
roleA[i].st = A1 & ch[1].empty = true 
==>
var msg:Message;
    msgNo:IndexType;
begin
   clear msg;
   cons1(roleA[i].Na,roleA[i].A,roleA[i].B,msg,msgNo);
   ch[1].empty := false;
   ch[1].msg := msg;
   ch[1].sender := roleA[i].A;
   ch[1].receiver := roleA[i].B;
   roleA[i].st := A2;
   put "1. A -> I\n";
   printMsg(ch[1].msg);
end;
rule " roleA2 "
roleA[i].st = A2 & ch[2].empty = false & ch[2].receiver = roleA[i].A
==>
var msg:Message;
    msgNo:IndexType;
begin
   clear msg;
   msg := ch[2].msg;
   destruct2(msg,roleAloc_Na,roleAloc_Nb,roleAloc_A);
   if(roleAloc_Na=roleA[i].Na&roleAloc_A=roleA[i].A)then
     ch[2].empty:=true;
     roleA[i].st := A3;
   endif;
end;
rule " roleA3 "
roleA[i].st = A3 & ch[3].empty = true 
==>
var msg:Message;
    msgNo:IndexType;
begin
   clear msg;
   cons3(roleAloc_Nb,roleA[i].B,msg,msgNo);
   ch[3].empty := false;
   ch[3].msg := msg;
   ch[3].sender := roleA[i].A;
   ch[3].receiver := roleA[i].B;
   roleA[i].st := A1;
   put "3. A -> I\n";
   printMsg(ch[3].msg);
end;
rule " roleB1 "
roleB[i].st = B1 & ch[1].empty = false & ch[1].receiver = roleB[i].B
==>
var msg:Message;
    msgNo:IndexType;
begin
   clear msg;
   msg := ch[1].msg;
   destruct1(msg,roleBloc_Na,roleBloc_A,roleBloc_B);
   if(roleBloc_B=roleB[i].B)then
     ch[1].empty:=true;
     roleB[i].st := B2;
   endif;
end;
rule " roleB2 "
roleB[i].st = B2 & ch[2].empty = true 
==>
var msg:Message;
    msgNo:IndexType;
begin
   clear msg;
   cons2(roleBloc_Na,roleB[i].Nb,roleBloc_A,msg,msgNo);
   ch[2].empty := false;
   ch[2].msg := msg;
   ch[2].sender := roleB[i].B;
   ch[2].receiver := roleB[i].B;
   roleB[i].st := B3;
   put "2. B -> I\n";
   printMsg(ch[2].msg);
end;
rule " roleB3 "
roleB[i].st = B3 & ch[3].empty = false & ch[3].receiver = roleB[i].B
==>
var msg:Message;
    msgNo:IndexType;
begin
   clear msg;
   msg := ch[3].msg;
   destruct3(msg,roleBloc_Nb,roleBloc_B);
   if(roleBloc_Nb=roleB[i].Nb&roleBloc_B=roleB[i].B)then
     ch[3].empty:=true;
     roleB[i].st := B1;
   endif;
end;
--- encrypt and decrypt rules of pat: aenc(Na.A,pk(B)), for intruder
ruleset i:indexType do 
  rule "decrypt 1"	---pat1
    i<=pat1Set.length & Spy_known[pat1Set.content[i]] &
    !Spy_known[msgs[pat1Set.content[i]].aencMsg]
    ==>
    var key_inv:Message;
	msgPat2:indexType;
	flag_pat2:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat1Set.content[i]].aencKey]);
      if (key_inv.k.ag = intruderType) then
        Spy_known[msgs[pat1Set.content[i]].aencMsg]:=true;
        msgPat2:=msgs[pat1Set.content[i]].aencMsg;
        isPat2(msgs[msgPat2],flag_pat2);
        if (flag_pat2) then
          if (!exist(pat2Set,msgPat2)) then
            pat2Set.length:=pat2Set.length+1;
            pat2Set.content[pat2Set.length]:=msgPat2;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:indexType do 
  ruleset j:indexType do 
    rule "encrypt 1"	---pat1
      i<=pat2Set.length & Spy_known[pat2Set.content[i]] &
      j<=pat6Set.length & Spy_known[pat6Set.content[j]] &
      !Spy_known[construct1By26(pat2Set.content[i],pat6Set.content[j])]
      ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat6Set.content[j]].k.ag=intruder.B) then
          encMsgNo := construct1By26(pat2Set.content[i],pat6Set.content[j]);
          if (!exist(pat1Set,encMsgNo)) then
            pat1Set.length := pat1Set.length+1;
            pat1Set.content[pat1Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
    end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(Na.A)

ruleset i:indexType do 
  rule "deconcat 2"	---pat2
    i<=pat2Set.length & Spy_known[pat2Set.content[i]] &
    !(Spy_known[msgs[pat2Set.content[i]].concatPart1] & Spy_known[msgs[pat2Set.content[i]].concatPart2])
    ==>
    var msgPat7,msgPat3:indexType;
        flag_pat7,flag_pat3:boolean;
    begin
      if (!Spy_known[msgs[pat2Set.content[i]].concatPart1]) then
        Spy_known[msgs[pat2Set.content[i]].concatPart1]:=true;
        msgPat7 := msgs[pat2Set.content[i]].concatPart1;
        isPat7(msgs[msgPat7],flag_pat7);
        if (flag_pat7) then
          if(!exist(pat7Set,msgPat7)) then
             pat7Set.length:=pat7Set.length+1;
             pat7Set.content[pat7Set.length] := msgPat7;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat2Set.content[i]].concatPart2]) then
        Spy_known[msgs[pat2Set.content[i]].concatPart2]:=true;
        msgPat3 := msgs[pat2Set.content[i]].concatPart2;
        isPat3(msgs[msgPat3],flag_pat3);
        if (flag_pat3) then
          if(!exist(pat3Set,msgPat3)) then
             pat3Set.length:=pat3Set.length+1;
             pat3Set.content[pat3Set.length] := msgPat3;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:indexType do 
  ruleset j:indexType do 
    rule "enconcat 2"	---pat2
      i<=pat7Set.length & Spy_known[pat7Set.content[i]] &
      j<=pat3Set.length & Spy_known[pat3Set.content[j]] &
      !Spy_known[construct2By73(pat7Set.content[i],pat3Set.content[j])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct2By73(pat7Set.content[i],pat3Set.content[j]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat2Set,concatMsgNo)) then
          pat2Set.length:=pat2Set.length+1;
          pat2Set.content[pat2Set.length]:=concatMsgNo;
        endif;
      end;
  endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc(Na.Nb,pk(A)), for intruder
ruleset i:indexType do 
  rule "decrypt 4"	---pat4
    i<=pat4Set.length & Spy_known[pat4Set.content[i]] &
    !Spy_known[msgs[pat4Set.content[i]].aencMsg]
    ==>
    var key_inv:Message;
	msgPat5:indexType;
	flag_pat5:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat4Set.content[i]].aencKey]);
      if (key_inv.k.ag = intruderType) then
        Spy_known[msgs[pat4Set.content[i]].aencMsg]:=true;
        msgPat5:=msgs[pat4Set.content[i]].aencMsg;
        isPat5(msgs[msgPat5],flag_pat5);
        if (flag_pat5) then
          if (!exist(pat5Set,msgPat5)) then
            pat5Set.length:=pat5Set.length+1;
            pat5Set.content[pat5Set.length]:=msgPat5;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:indexType do 
  ruleset j:indexType do 
    rule "encrypt 4"	---pat4
      i<=pat5Set.length & Spy_known[pat5Set.content[i]] &
      j<=pat6Set.length & Spy_known[pat6Set.content[j]] &
      !Spy_known[construct4By56(pat5Set.content[i],pat6Set.content[j])]
      ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat6Set.content[j]].k.ag=intruder.B) then
          encMsgNo := construct4By56(pat5Set.content[i],pat6Set.content[j]);
          if (!exist(pat4Set,encMsgNo)) then
            pat4Set.length := pat4Set.length+1;
            pat4Set.content[pat4Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
    end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(Na.Nb)

ruleset i:indexType do 
  rule "deconcat 5"	---pat5
    i<=pat5Set.length & Spy_known[pat5Set.content[i]] &
    !(Spy_known[msgs[pat5Set.content[i]].concatPart1] & Spy_known[msgs[pat5Set.content[i]].concatPart2])
    ==>
    var msgPat11,msgPat12:indexType;
        flag_pat11,flag_pat12:boolean;
    begin
      if (!Spy_known[msgs[pat5Set.content[i]].concatPart1]) then
        Spy_known[msgs[pat5Set.content[i]].concatPart1]:=true;
        msgPat11 := msgs[pat5Set.content[i]].concatPart1;
        isPat7(msgs[msgPat11],flag_pat11);
        if (flag_pat11) then
          if(!exist(pat7Set,msgPat11)) then
             pat7Set.length:=pat7Set.length+1;
             pat7Set.content[pat7Set.length] := msgPat11;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat5Set.content[i]].concatPart2]) then
        Spy_known[msgs[pat5Set.content[i]].concatPart2]:=true;
        msgPat12 := msgs[pat5Set.content[i]].concatPart2;
        isPat7(msgs[msgPat12],flag_pat12);
        if (flag_pat12) then
          if(!exist(pat7Set,msgPat12)) then
             pat7Set.length:=pat7Set.length+1;
             pat7Set.content[pat7Set.length] := msgPat12;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:indexType do 
  ruleset j:indexType do 
    rule "enconcat 5"	---pat5
      i<=pat7Set.length & Spy_known[pat7Set.content[i]] &
      j<=pat7Set.length & Spy_known[pat7Set.content[j]] &
      i != j & 
      !Spy_known[construct5By77(pat7Set.content[i],pat7Set.content[j])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct5By77(pat7Set.content[i],pat7Set.content[j]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat5Set,concatMsgNo)) then
          pat5Set.length:=pat5Set.length+1;
          pat5Set.content[pat5Set.length]:=concatMsgNo;
        endif;
      end;
  endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc(Nb,pk(B)), for intruder
ruleset i:indexType do 
  rule "decrypt 8"	---pat8
    i<=pat8Set.length & Spy_known[pat8Set.content[i]] &
    !Spy_known[msgs[pat8Set.content[i]].aencMsg]
    ==>
    var key_inv:Message;
	msgPat7:indexType;
	flag_pat7:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat8Set.content[i]].aencKey]);
      if (key_inv.k.ag = intruderType) then
        Spy_known[msgs[pat8Set.content[i]].aencMsg]:=true;
        msgPat7:=msgs[pat8Set.content[i]].aencMsg;
        isPat7(msgs[msgPat7],flag_pat7);
        if (flag_pat7) then
          if (!exist(pat7Set,msgPat7)) then
            pat7Set.length:=pat7Set.length+1;
            pat7Set.content[pat7Set.length]:=msgPat7;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:indexType do 
  ruleset j:indexType do 
    rule "encrypt 8"	---pat8
      i<=pat7Set.length & Spy_known[pat7Set.content[i]] &
      j<=pat6Set.length & Spy_known[pat6Set.content[j]] &
      !Spy_known[construct8By76(pat7Set.content[i],pat6Set.content[j])]
      ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat6Set.content[j]].k.ag=intruder.B) then
          encMsgNo := construct8By76(pat7Set.content[i],pat6Set.content[j]);
          if (!exist(pat8Set,encMsgNo)) then
            pat8Set.length := pat8Set.length+1;
            pat8Set.content[pat8Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
    end;
  endruleset;
endruleset;

startstate
  A[1].A = Alice;
  A[1].B = Intruder;
  A[1].Na = A1Na;
  A[1].st = A1;
  B[1].B = Bob;
  B[1].Nb = B1Nb;
  B[1].st = B1;
end;

