---Murphi Code:
const
  roleANum:1;
  roleBNum:1;
  totalFact:20;
  chanNum:3;
  eventNum:30;
type
  indexType:0..totalFact;
  roleANums:1..roleANum;
  roleBNums:1..roleBNum;
  msgLen:0..totalFact;
  chanNums:1..chanNum;
  eventNums:0..eventNum;
  AgentType : enum{Alice,Bob,intruderType};
  NonceType : enum{Na,Nb};
  EncryptType : enum{PK,SK,Symk};
  KeyType: record 
    encType: EncryptType; 
    ag: AgentType; 
  end;
  AStatus : enum {A1,A2,A3};
  BStatus : enum {B1,B2,B3};
  MsgType : enum {null,agent,nonce,key,aenc,senc,concat,hash};
  Message: record
    msgType : MsgType;
    ag : AgentType;
    noncePart : NonceType;
    k : KeyType;
    aencMsg : indexType;
    aencKey : indexType;
    sencMsg : indexType;
    sencKey : indexType;
    concatPart1 : indexType;
    concatPart2 : indexType;
  end;
  Channel: record
    msg : Message;
    sender : AgentType;
    receiver : AgentType;
    empty : boolean;
  end;

  RoleA : record
   A : AgentType;
   B : AgentType;
   Na : NonceType;
   loc_Na : NonceType;
   loc_Nb : NonceType;
   loc_A : AgentType; -----???? 1
   st : AStatus;
  end;
  RoleB : record
   B : AgentType;
   Nb : NonceType;
   loc_Na : NonceType;
   loc_Nb : NonceType;
   loc_A : AgentType; -----???? 2
   loc_B : AgentType; -----???? 2
   st : BStatus;
  end;

  RoleIntruder: record	-----???3
	  B : AgentType;
    ---st: IntruderStatus;
  end;

  msgSet: record
    content : Array[msgLen] of indexType;
    length : msgLen;
  end;

  Event: record	        --- ???12
    eveType 	: boolean; ---true means sender/false means recieve
    sender  : AgentType;
    receiver: AgentType;
    msg	: Message;
  end;

var
  ch : Array[chanNums] of Channel;
  roleA : Array[roleANums] of RoleA;
  roleB : Array[roleBNums] of RoleB;
  intruder    : RoleIntruder; ----???3
  msgs : Array[indexType] of Message;
  msg_end: indexType;

  pat1Set: msgSet;
  pat2Set: msgSet;
  pat3Set: msgSet;
  pat4Set: msgSet;
  pat5Set: msgSet;
  pat6Set: msgSet;
  pat7Set: msgSet;
  pat8Set: msgSet;

  Spy_known: Array[indexType] of boolean;
  emit          : Array[indexType] of boolean; ---???6
  systemEvent   : array[eventNums] of Event;   ---???12

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
---pat3: A 
procedure isPat3(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = agent) then
      flag1 := true;
    endif;
    flag := flag1;
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
---pat7: Nb 
procedure isPat7(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---pat6: pk(A) 
procedure lookAddPat6(A:AgentType; Var msg:Message; Var num : indexType);
 Var index : indexType;
 begin
   index:=0;
   for i: msgLen do
     if (msgs[i].msgType = key) then
       if (msgs[i].k.encType = PK & msgs[i].k.ag = A) then
         index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := key;
     msgs[index].k.encType:=PK; 
     msgs[index].k.ag:=A; 
   endif;
   num:=index;
   msg:=msgs[index];
  end;
---pat6: pk(A) 
procedure isPat6(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = key) then
      if (msg.k.encType = PK) then
        flag1 := true;
      endif;
    endif;
    flag := flag1;
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
---pat2: Na.A 
procedure isPat2(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = concat) then 
      if (msgs[msg.concatPart1].msgType=nonce & msgs[msg.concatPart2].msgType=agent) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
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
---pat5: Na.Nb 
procedure isPat5(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = concat) then 
      if (msgs[msg.concatPart1].msgType=nonce & msgs[msg.concatPart2].msgType=nonce) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
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
---pat1: aenc{ < Na.A > }pk(B) 
procedure isPat1(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat2(msgs[msg.aencMsg],flagPart1);
      isPat6(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
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
---pat4: aenc{ < Na.Nb > }pk(A) 
procedure isPat4(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat5(msgs[msg.aencMsg],flagPart1);
      isPat6(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
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
---pat8: aenc{ < Nb > }pk(B) 
procedure isPat8(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat7(msgs[msg.aencMsg],flagPart1);
      isPat6(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;
procedure cons1(Na:NonceType; A:AgentType; B:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;
    lookAddPat1(Na, A, B,msg,num);
  end;
procedure destruct1(msg:Message; Var Na:NonceType; Var A:AgentType; Var B:AgentType);
  var k1:KeyType;
      msg1,msgNum1,msgNum2:Message;
  begin
    clear msg1;
    k1 := msgs[msg.aencKey].k;
    B := k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart1];
    msgNum2:=msgs[msg1.concatPart2];
    Na:=msgNum1.noncePart;
    A:=msgNum2.ag;
  end;
procedure cons2(Na:NonceType; Nb:NonceType; A:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;
    lookAddPat4(Na, Nb, A,msg,num);
  end;
procedure destruct2(msg:Message; Var Na:NonceType; Var Nb:NonceType; Var A:AgentType);
  var k1:KeyType;
      msg1,msgNum1,msgNum2:Message;
  begin
    clear msg1;
    k1 := msgs[msg.aencKey].k;
    A := k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart1];
    msgNum2:=msgs[msg1.concatPart2];
    Na:=msgNum1.noncePart;
    Nb:=msgNum2.noncePart;
  end;
procedure cons3(Nb:NonceType; B:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;
    lookAddPat8(Nb, B,msg,num);
  end;
procedure destruct3(msg:Message; Var Nb:NonceType; Var B:AgentType);
  var k1:KeyType;
      msg1,msgNum1,msgNum2:Message;
  begin
    clear msg1;
    k1 := msgs[msg.aencKey].k;
    B := k1.ag;
    msg1:=msgs[msg.aencMsg];
    Nb:=msg1.noncePart;
  end;
procedure get_msgNo(msg:Message; Var num:indexType);
  var index:indexType;
  begin
    index:=0;
    for i: msgLen do
      if (msgs[i].msgType = msg.msgType) then
        if ( (msg.msgType=agent & msgs[i].ag=msg.ag)
          | (msg.msgType=nonce & msgs[i].noncePart=msg.noncePart)
          | (msg.msgType=key & (msgs[i].k.encType=msg.k.encType & msgs[i].k.ag=msg.k.ag))
          | (msg.msgType=aenc & (msgs[i].aencMsg=msg.aencMsg & msgs[i].aencKey=msg.aencKey))
          | (msg.msgType=senc & (msgs[i].sencMsg=msg.sencMsg & msgs[i].sencKey=msg.sencKey))
          ) then 
          index:=i;
        endif;
      endif;
    endfor;
    num := index;
  end;
procedure printMsg(msg:Message);
  begin
    if msg.msgType=null then
      put "null\n";
     elsif msg.msgType=agent then
      put msg.ag;
     elsif msg.msgType=nonce then
      put msg.noncePart;
     elsif msg.msgType=key then
      if msg.k.encType=PK then
        put "PK(";
         put msg.k.ag;
         put ")";
       elsif msg.k.encType=SK then
        put "SK(";
         put msg.k.ag;
         put ")";
       elsif msg.k.encType=Symk then
        put "SymK(";
         put msg.k.ag;
         put ")";
       endif;
    elsif msg.msgType=aenc then
      put "aenc{";
      printMsg(msgs[msg.aencMsg]);
      put ",";
      printMsg(msgs[msg.aencKey]);
      put "}\n";
    elsif msg.msgType=senc then
      put "senc{";
      printMsg(msgs[msg.sencMsg]);
      put ",";
      printMsg(msgs[msg.sencKey]);
      put "}\n";
    elsif msg.msgType=concat then
      put "concat{";
      printMsg(msgs[msg.concatPart1]);
      put ",";
      printMsg(msgs[msg.concatPart2]);
      put"}\n";
    endif;
  end;
function inverseKey(msgK:Message):Message;
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
  end;
function lookUp(msg: Message): indexType;
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
        elsif(msgs[i].msgType = concat & (msgs[i].concatPart1=msg.concatPart1 & msgs[i].concatPart2=msg.concatPart2)) then
          index := i;
        endif;
      endif;
    endfor;
    return index;
  end;
function construct1By26(msgNo2,msgNo6:indexType):indexType;
  var index : indexType;
      locNa:NonceType;
      locA:AgentType;
      k_ag : AgentType;
      msg : Message;
  begin
   index := 0;
   locNa:= msgs[msgs[msgNo2].concatPart1].noncePart;
   locA:= msgs[msgs[msgNo2].concatPart2].ag;
   k_ag := msgs[msgNo6].k.ag;
   lookAddPat1(locNa,locA,k_ag,msg,index);
   return index;
  end;
function construct2By73(msgNo7,msgNo3:indexType):indexType;
  var index : indexType;
      locNa:NonceType;
      locA:AgentType;
      msg : Message;
  begin
     index := 0;
     locNa:= msgs[msgNo7].noncePart;
     locA:= msgs[msgNo3].ag;
     lookAddPat2(locNa,locA,msg,index);
   return index;
  end;
function construct4By56(msgNo5,msgNo6:indexType):indexType;
  var index : indexType;
      locNa:NonceType;
      locNb:NonceType;
      k_ag : AgentType;
      msg : Message;
  begin
   index := 0;
   locNa:= msgs[msgs[msgNo5].concatPart1].noncePart;
   locNb:= msgs[msgs[msgNo5].concatPart2].noncePart;
   k_ag := msgs[msgNo6].k.ag;
   lookAddPat4(locNa,locNb,k_ag,msg,index);
   return index;
  end;
function construct5By77(msgNo7_1,msgNo7_2:indexType):indexType;
  var index : indexType;
      locNa:NonceType;
      locNb:NonceType;
      msg : Message;
  begin
     index := 0;
     locNa:= msgs[msgNo7_1].noncePart;
     locNb:= msgs[msgNo7_2].noncePart;
     lookAddPat5(locNa,locNb,msg,index);
   return index;
  end;
function construct8By76(msgNo7,msgNo6:indexType):indexType;
  var index : indexType;
      locNb:NonceType;
      k_ag : AgentType;
      msg : Message;
  begin
   index := 0;
   locNb:= msgs[msgs[msgNo7].concatPart1].noncePart;
   k_ag := msgs[msgNo6].k.ag;
   lookAddPat8(locNb,k_ag,msg,index);
   return index;
  end;
function exist(PatnSet:msgSet; msgNo:indexType):boolean;
  var flag:boolean;
  begin
    flag := false;
    for i:indexType do
      if (PatnSet.content[i] = msgNo) then 
         flag := true;
      endif; 
    endfor;    return flag;
  end;

---some problems happen to rules of A and B
ruleset i:roleANums do
rule " roleA1 "
roleA[i].st = A1 & ch[1].empty = true 
==>
var msg:Message;
    msgNo:indexType;
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
    msgNo:indexType;
begin
   clear msg;
   msg := ch[2].msg;
   destruct2(msg,roleA[i].loc_Na,roleA[i].loc_Nb,roleA[i].loc_A);
   if(roleA[i].loc_Na=roleA[i].Na&roleA[i].loc_A=roleA[i].A)then
     ch[2].empty:=true;
     roleA[i].st := A3;
   endif;
end;
rule " roleA3 "
roleA[i].st = A3 & ch[3].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons3(roleA[i].loc_Nb,roleA[i].B,msg,msgNo);
   ch[3].empty := false;
   ch[3].msg := msg;
   ch[3].sender := roleA[i].A;
   ch[3].receiver := roleA[i].B;
   roleA[i].st := A1;
   put "3. A -> I\n";
   printMsg(ch[3].msg);
end;
endruleset;
ruleset i:roleBNums do
rule " roleB1 "
roleB[i].st = B1 & ch[1].empty = false & ch[1].receiver = roleB[i].B
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[1].msg;
   destruct1(msg,roleB[i].loc_Na,roleB[i].loc_A,roleB[i].loc_B);
   if(roleB[i].loc_B=roleB[i].B)then
     ch[1].empty:=true;
     roleB[i].st := B2;
   endif;
end;
rule " roleB2 "
roleB[i].st = B2 & ch[2].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons2(roleB[i].loc_Na,roleB[i].Nb,roleB[i].loc_A,msg,msgNo);
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
    msgNo:indexType;
begin
   clear msg;
   msg := ch[3].msg;
   destruct3(msg,roleB[i].loc_Nb,roleB[i].loc_B);
   if(roleB[i].loc_Nb=roleB[i].Nb&roleB[i].loc_B=roleB[i].B)then
     ch[3].empty:=true;
     roleB[i].st := B1;
   endif;
end;
endruleset;
---rule of intruder to get msg1.
rule "intruderGetMsg1" 
  ch[1].empty = false
  ==>
  var flag_pat1:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[1].msg;
    get_msgNo(msg, msgNo);
    isPat1(msg,flag_pat1);
    if (flag_pat1) then
      if(!exist(pat1Set,msgNo)) then
        pat1Set.length:=pat1Set.length+1;
        pat1Set.content[pat1Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[1].empty := true;
    ---intruder.st := gotmsg1; ---???4
  end;

---rule of intruder to emit msg1.
ruleset i: msgLen do
  ruleset j: roleBNums do ----???5
    rule "intruderEmitMsg1"
      ch[1].empty=true & i <= pat1Set.length & Spy_known[pat1Set.content[i]]
      ==>
      begin
        if (!emit[pat1Set.content[i]] & msgs[msgs[pat1Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[1];
          ch[1].msg:=msgs[pat1Set.content[i]];
          ch[1].sender:=intruderType;
          ch[1].receiver:=roleB[j].B; ---???7
          ch[1].empty:=false;
          emit[pat1Set.content[i]] := true;
          ---intruder.st:=emitted1; 	----???4
          put "ch[1]: I->B\n";
          printMsg(ch[1].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg2.
rule "intruderGetMsg2" 
  ch[2].empty = false
  ==>
  var flag_pat4:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[2].msg;
    get_msgNo(msg, msgNo);
    isPat4(msg,flag_pat4);
    if (flag_pat4) then
      if(!exist(pat4Set,msgNo)) then
        pat4Set.length:=pat4Set.length+1;
        pat4Set.content[pat4Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[2].empty := true;
    ----intruder.st := gotmsg2;		---???4
  end;

---rule of intruder to emit msg2.
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsg2"
      ch[2].empty=true & i <= pat4Set.length & Spy_known[pat4Set.content[i]]
      ==>
      begin
        if (!emit[pat4Set.content[i]] & msgs[msgs[pat4Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[2];
          ch[2].msg:=msgs[pat4Set.content[i]];
          ch[2].sender:=intruderType;
          ch[2].receiver:=roleA[j].A;
          ch[2].empty:=false;
          emit[pat4Set.content[i]] := true;
          ----intruder.st:=emitted2;			---???4
          put "ch[2]: I->A\n";
          printMsg(ch[2].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg3.
rule "intruderGetMsg3" 
  ch[3].empty = false
  ==>
  var flag_pat8:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[3].msg;
    get_msgNo(msg, msgNo);
    isPat8(msg,flag_pat8);
    if (flag_pat8) then
      if(!exist(pat8Set,msgNo)) then
        pat8Set.length:=pat8Set.length+1;
        pat8Set.content[pat8Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[3].empty := true;
    ---intruder.st := gotmsg3;---???4
  end;

---rule of intruder to emit msg3.
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsg3"
      ch[3].empty=true & i <= pat8Set.length & Spy_known[pat8Set.content[i]]
      ==>
      begin
        if (!emit[pat8Set.content[i]] & msgs[msgs[pat8Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[3];
          ch[3].msg:=msgs[pat8Set.content[i]];
          ch[3].sender:=intruderType;
          ch[3].receiver:=roleB[j].B;
          ch[3].empty:=false;
          emit[pat8Set.content[i]] := true;
          ---intruder.st:=emitted3;-------???4
          put "ch[3]: I->B\n";
          printMsg(ch[3].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;
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
 ----   end; ---???8
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
    ---end;---?8
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
  ---  end;---?8
  endruleset;
endruleset;

startstate
  roleA[1].A := Alice;   ---???10
  roleA[1].B := intruderType;
  roleA[1].Na := Na;
  roleA[1].st := A1;
  roleB[1].B := Bob;
  roleB[1].Nb := Nb;
  roleB[1].st := B1;

  for i:msgLen do
    pat1Set.content[i] := 0;
    pat2Set.content[i] := 0;
    pat3Set.content[i] := 0;
    pat4Set.content[i] := 0;
    pat5Set.content[i] := 0;
    pat6Set.content[i] := 0;
    pat7Set.content[i] := 0;
    pat8Set.content[i] := 0; 
  endfor;
end;
invariant "sec1"
  forall i:msgLen do ----???11
    (msgs[i].msgType=nonce & msgs[i].noncePart = Nb)
     ->
      Spy_known[i] = false
end;
invariant "sec2"
  forall i:msgLen do
    (msgs[i].msgType=nonce & msgs[i].noncePart = Na)
     ->
      Spy_known[i] = false
end;

/*
invariant "auth1"
  forall i:eventNums do  ----???12
    forall j:eventNums do 
      (systemEvent[i].eveType = false &  ---???13
       systemEvent[i].msg.noncePart = Na) 
      ->
      (systemEvent[i].eveType = true & 
      systemEvent[i].receiver = systemEvent[j].receiver &
      systemEvent[i].msg.noncePart = systemEvent[j].msg.noncePart) 
end;
*/
