const
  roleHostNum:1;
  roleGatewayNum:1;
  roleServerNum:1;
  totalFact:20;
  chanNum:3;
  eventNum:30;
type
  indexType:0..totalFact;
  roleHostNums:1..roleHostNum;
  roleGatewayNums:1..roleGatewayNum;
  roleServerNums:1..roleServerNum;
  msgLen:0..totalFact;
  chanNums:1..chanNum;
  eventNums:0..eventNum;

  AgentType : enum{HostID, Intruder, ServerIP, GatewayIP}; 
  NonceType : enum{Na2, Na1, Na3, Na4};  

  EncryptType : enum{PK,SK,Symk};
  KeyType: record 
    encType: EncryptType; 
    ag: AgentType; 
  end;

  HostStatus: enum{Host1,Host2,Host3,Host4,Host5};
  GatewayStatus: enum{Gateway1,Gateway2,Gateway3,Gateway4,Gateway5,Gateway6,Gateway7,Gateway8,Gateway9};
  ServerStatus: enum{Server1,Server2,Server3,Server4};

  MsgType : enum {null,agent,nonce,key,aenc,senc,concat,hash};
  EveType : enum {empty,send,receive};
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
    concatPart3 : indexType;
  end;
  Channel: record
    msg : Message;
    sender : AgentType;
    receiver : AgentType;
    empty : boolean;
  end;
  RoleHost : record
   Na2 : NonceType;
   Na1 : NonceType;
   Na3 : NonceType;
   Na4 : NonceType;
   Host : AgentType;
   Gateway : AgentType;
   Server : AgentType;
   loc_Na2 : NonceType;
   loc_Na1 : NonceType;
   loc_Na3 : NonceType;
   loc_Na4 : NonceType;
   loc_Host : AgentType;
   loc_Gateway : AgentType;
   loc_Server : AgentType;
   st: HostStatus;
   commit : boolean;
  end;
  RoleGateway : record
   Na2 : NonceType;
   Na1 : NonceType;
   Na3 : NonceType;
   Na4 : NonceType;
   Host : AgentType;
   Gateway : AgentType;
   Server : AgentType;
   loc_Na2 : NonceType;
   loc_Na1 : NonceType;
   loc_Na3 : NonceType;
   loc_Na4 : NonceType;
   loc_Host : AgentType;
   loc_Gateway : AgentType;
   loc_Server : AgentType;
   st: GatewayStatus;
   commit : boolean;
  end;
  RoleServer : record
   Na2 : NonceType;
   Na1 : NonceType;
   Na3 : NonceType;
   Na4 : NonceType;
   Host : AgentType;
   Gateway : AgentType;
   Server : AgentType;
   loc_Na2 : NonceType;
   loc_Na1 : NonceType;
   loc_Na3 : NonceType;
   loc_Na4 : NonceType;
   loc_Host : AgentType;
   loc_Gateway : AgentType;
   loc_Server : AgentType;
   st: ServerStatus;
   commit : boolean;
  end;

  RoleIntruder: record
    B : AgentType;
  end;

  msgSet: record
    content : Array[msgLen] of indexType;
    length : msgLen;
  end;

  Event: record
    eveType : EveType;
    sender  : AgentType;
    receiver: AgentType;
    msg	: Message;
  end;

var
  ch : Array[chanNums] of Channel;
  roleHost : Array[roleHostNums] of RoleHost;
  roleGateway : Array[roleGatewayNums] of RoleGateway;
  roleServer : Array[roleServerNums] of RoleServer;

  intruder    : RoleIntruder;
  msgs : Array[indexType] of Message;
  msg_end: indexType;
  
  pat1Set: msgSet;
  pat2Set: msgSet;
  pat3Set: msgSet;
  pat4Set: msgSet;
  pat5Set: msgSet;
  pat6Set: msgSet;
  pat7Set: msgSet;

  
  Spy_known: Array[indexType] of boolean;
  ---systemEvent   : array[eventNums] of Event;
  ---eve_end       : eventNums;
  emit: Array[indexType] of boolean;

---pat1: Na1 
procedure lookAddPat1(Na1:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: msgLen do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=Na1) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=Na1; 
      endif;
      num:=index;
      msg:=msgs[index];
  end;
---pat1: Na1 
procedure isPat1(msg:Message; Var flag:boolean);

  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce) then
      flag1 := true;
    endif;
    flag := flag1;
  end;
---pat2: Gateway 
procedure lookAddPat2(Gateway:AgentType; Var msg:Message; Var num : indexType);
 Var index : indexType;
 begin
   index:=0;
   for i: msgLen do
    if (msgs[i].msgType = agent) then
      if (msgs[i].ag = Gateway) then
        index:=i;
      endif;
    endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := agent;

     msgs[index].ag:=Gateway; 
   endif;
   num:=index;
   msg:=msgs[index];
  end;
---pat2: Gateway 
procedure isPat2(msg:Message; Var flag:boolean);

  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = agent) then
      flag1 := true;
    endif;
    flag := flag1;
  end;
---pat3: Na1.Gateway 
procedure lookAddPat3(Na1:NonceType; Gateway:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat1(Na1,msg1,i1);
   lookAddPat2(Gateway,msg2,i2);
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
     msgs[index].concatPart1 := i1;
     msgs[index].concatPart2 := i2; 
   endif;
   num:=index;
   msg:=msgs[index];
  end;
---pat3: Na1.Gateway 
procedure isPat3(msg:Message; Var flag:boolean);

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
---pat4: Host.Na2 
procedure lookAddPat4(Host:AgentType; Na2:NonceType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat2(Host,msg1,i1);
   lookAddPat1(Na2,msg2,i2);
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
     msgs[index].concatPart1 := i1;
     msgs[index].concatPart2 := i2; 
   endif;
   num:=index;
   msg:=msgs[index];
  end;
---pat4: Host.Na2 
procedure isPat4(msg:Message; Var flag:boolean);

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
---pat5: sk(Host) 
procedure lookAddPat5(HostSk :AgentType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    index:=0;
    for i: msgLen do
      if (msgs[i].msgType = key) then
        if (msgs[i].k.encType = SK & msgs[i].k.ag = HostSk) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType:=SK; 
      msgs[index].k.ag:=HostSk;
    endif;
    num:=index;
    msg:=msgs[index];
  end;
---pat5: sk(Host) 
procedure isPat5(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = key) then
      if (msg.k.encType = SK) then
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;
---pat6: aenc{< Host.Na2 >}sk(Host) 
procedure lookAddPat6(Host:AgentType; Na2:NonceType; HostSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat4(Host, Na2,msg1,i1);
   lookAddPat5(HostSk,msg2,i2);
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
---pat6: aenc{< Host.Na2 >}sk(Host) 
procedure isPat6(msg:Message; Var flag:boolean);

  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat4(msgs[msg.aencMsg],flagPart1);
      isPat5(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;
---pat7: Host.Na2.aenc{< Host.Na2 >}sk(Host) 
procedure lookAddPat7(Host:AgentType; Na2:NonceType; HostSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3 : Message;
      index,i1,i2,i3 : indexType;
  begin
   index:=0;
   lookAddPat2(Host,msg1,i1);
   lookAddPat1(Na2,msg2,i2);
   lookAddPat6(Host,Na2,Host,msg3,i3);
   for i : msgLen do
     if (msgs[i].msgType = concat) then
       if (msgs[i].concatPart1 = i1 & msgs[i].concatPart2 = i2 & msgs[i].concatPart3 = i3) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart1 := i1;
     msgs[index].concatPart2 := i2;
     msgs[index].concatPart3 := i3; 
   endif;
   num:=index;
   msg:=msgs[index];
  end;
---pat7: Host.Na2.aenc{< Host.Na2 >}sk(Host) 
procedure isPat7(msg:Message; Var flag:boolean);

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
procedure cons1(Na1:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat1(Na1,msg,num);
  end;
procedure cons2(Gateway:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat2(Gateway,msg,num);
  end;
procedure cons3(Na1:NonceType; Gateway:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat3(Na1, Gateway,msg,num);
  end;
procedure destruct3(msg:Message; Var Na1:NonceType; Var Gateway:AgentType);
  Var msgNum1,msgNum2: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart1];
    Na1 := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart2];
    Gateway := msgNum2.ag;
  end;
procedure cons4(Host:AgentType; Na2:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat4(Host, Na2,msg,num);
  end;
procedure destruct4(msg:Message; Var Host:AgentType; Var Na2:NonceType);
  Var msgNum1,msgNum2: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart1];
    Host := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart2];
    Na2 := msgNum2.noncePart;
  end;
procedure cons5(HostSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat5(HostSk,msg,num);
  end;
procedure cons6(Host:AgentType; Na2:NonceType; HostSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(Host, Na2, HostSk,msg,num);
  end;
procedure destruct6(msg:Message; Var Host:AgentType; Var Na2:NonceType; Var HostSk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2:Message;  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
    HostSk := k1.ag;
    msg1:=msgs[msg.aencMsg];
     msgNum1:=msgs[msg1.concatPart1];
    msgNum2:=msgs[msg1.concatPart2];
    Host:=msgNum1.ag;
    Na2:=msgNum2.noncePart;
  end;
procedure cons7(Host:AgentType; Na2:NonceType; HostSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat7(Host, Na2, HostSk,msg,num);
  end;
procedure destruct7(msg:Message; Var Host:AgentType; Var Na2:NonceType; Var HostSk:AgentType);
  Var msgNum1,msgNum2,msgNum3: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart1];
    Host := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart2];
    Na2 := msgNum2.noncePart;
    msgNum3 := msgs[msg.concatPart3];
    k := msgs[msgNum3.aencKey].k;
    HostSk := k.ag;
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
        put "concat(";
        printMsg(msgs[msg.concatPart1]);
        put ",";
        printMsg(msgs[msg.concatPart2]);
        put")";
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
---Sorry, the compilation process is not written!

---Sorry, the compilation process is not written!

function construct3By12(msgNo1,msgNo2:indexType):indexType;
  var index : indexType;
      locNa1:NonceType;
      locGateway:AgentType;
      msg : Message;
  begin
     index := 0;
     locNa1:= msgs[msgNo1].noncePart;
     locGateway:= msgs[msgNo2].ag;
     lookAddPat3(locNa1,locGateway,msg,index);
   return index;
  end;
function construct4By21(msgNo1,msgNo2:indexType):indexType;
  var index : indexType;
      locHost:AgentType;
      locNa2:NonceType;
      msg : Message;
  begin
     index := 0;
     locHost:= msgs[msgNo1].ag;
     locNa2:= msgs[msgNo2].noncePart;
     lookAddPat4(locHost,locNa2,msg,index);
   return index;
  end;
---Sorry, the compilation process is not written!

function construct6By45(msgNo4,msgNo5:indexType):indexType;
  var index : indexType;
      locHost:AgentType;
      locNa2:NonceType;
      locHostSk:AgentType;
      k_ag : AgentType;
      msg : Message;
  begin
   index := 0;
   locHost:= msgs[msgs[msgNo4].concatPart1].ag;
   locNa2:= msgs[msgs[msgNo4].concatPart2].noncePart;
   ;
;
   lookAddPat6(locHost,locNa2,locHostSk,msg,index);
   return index;
  end;
function construct7By216(msgNo1,msgNo2,msgNo3:indexType):indexType;
  var index : indexType;
      locHost:AgentType;
      locNa2:NonceType;
      locHostSk:AgentType;
      msg : Message;
  begin
     index := 0;
     locHost:= msgs[msgNo1].ag;
     locNa2:= msgs[msgNo2].noncePart;
     locHost:= msgs[msgNo3].k.ag;
     lookAddPat7(locHost,locNa2,locHostSk,msg,index);
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
    endfor;
    return flag;
  end;
function msgContains(msg1: Message; Na: NonceType):boolean;  ---if msg1 contains msg2 then return true else return false
  var flag : boolean;
  begin
    flag := false;
    if (msg1.msgType = nonce) then
      if (msg1.noncePart = Na) then
        flag := true;
      endif;
    elsif (msg1.msgType = aenc) then
      flag := msgContains(msgs[msg1.aencMsg],Na);
    elsif (msg1.msgType = senc) then
      flag := msgContains(msgs[msg1.sencMsg],Na);
    elsif (msg1.msgType = concat) then
      if (msgContains(msgs[msg1.concatPart1],Na) | msgContains(msgs[msg1.concatPart2],Na)) then
        flag := true;
      endif;
    endif;
    return flag;
  end;
ruleset i:roleHostNums do
rule " roleHost1 "
roleHost[i].st = Host1 & ch[1].empty = false ---& ch[1].receiver = roleHost[i].Host
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[1].msg;
   destruct3(msg,roleHost[i].loc_Na1,roleHost[i].loc_Gateway);
   if(roleHost[i].loc_Gateway=roleHost[i].Gateway)then
     ch[1].empty:=true;
     roleHost[i].st := Host2;
   endif;
end;
rule " roleHost2 "
roleHost[i].st = Host2 & ch[2].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleHost[i].Host,roleHost[i].Na2,roleHost[i].Host,msg,msgNo);
   ch[2].empty := false;
   ch[2].msg := msg;
   ch[2].sender := roleHost[i].Host;
   ch[2].receiver := Intruder;
   roleHost[i].st := Host3;
   put "2. ";
   put ch[2].sender;
   put "   ";
   put ch[2].receiver;
   put "   msg: ";
   printMsg(ch[2].msg);
   put "\n";
end;
rule " roleHost3 "
roleHost[i].st = Host3 & ch[3].empty = false ---& ch[3].receiver = roleHost[i].Host
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[3].msg;
   destruct7(msg,roleHost[i].loc_Server,roleHost[i].loc_Na3,roleHost[i].loc_Server);
   if(roleHost[i].loc_Server=roleHost[i].Server)then
     ch[3].empty:=true;
     roleHost[i].st := Host4;
   endif;
end;
rule " roleHost4 "
roleHost[i].st = Host4 & ch[4].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleHost[i].Host,roleHost[i].loc_Na3,roleHost[i].Host,msg,msgNo);
   ch[4].empty := false;
   ch[4].msg := msg;
   ch[4].sender := roleHost[i].Host;
   ch[4].receiver := Intruder;
   roleHost[i].st := Host5;
   put "4. ";
   put ch[4].sender;
   put "   ";
   put ch[4].receiver;
   put "   msg: ";
   printMsg(ch[4].msg);
   put "\n";
end;
rule " roleHost5 "
roleHost[i].st = Host5 & ch[5].empty = false ---& ch[5].receiver = roleHost[i].Host
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[5].msg;
   destruct7(msg,roleHost[i].loc_Server,roleHost[i].loc_Na4,roleHost[i].loc_Server);
   if(roleHost[i].loc_Server=roleHost[i].Server)then
     ch[5].empty:=true;
     roleHost[i].st := Host1;
   endif;
   roleHost[i].commit := true;
end;
endruleset;

ruleset i:roleGatewayNums do
rule " roleGateway1 "
roleGateway[i].st = Gateway1 & ch[1].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons3(roleGateway[i].Na1,roleGateway[i].Gateway,msg,msgNo);
   ch[1].empty := false;
   ch[1].msg := msg;
   ch[1].sender := roleGateway[i].Gateway;
   ch[1].receiver := Intruder;
   roleGateway[i].st := Gateway2;
   put "1. ";
   put ch[1].sender;
   put "   ";
   put ch[1].receiver;
   put "   msg: ";
   printMsg(ch[1].msg);
   put "\n";
end;
rule " roleGateway2 "
roleGateway[i].st = Gateway2 & ch[2].empty = false ---& ch[2].receiver = roleGateway[i].Gateway
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[2].msg;
   destruct7(msg,roleGateway[i].loc_Host,roleGateway[i].loc_Na2,roleGateway[i].loc_Host);
   if(roleGateway[i].loc_Host=roleGateway[i].Host&roleGateway[i].loc_Host=roleGateway[i].Host)then
     ch[2].empty:=true;
     roleGateway[i].st := Gateway3;
   endif;
end;
rule " roleGateway3 "
roleGateway[i].st = Gateway3 & ch[3].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleGateway[i].Host,roleGateway[i].loc_Na2,roleGateway[i].Host,msg,msgNo);
   ch[3].empty := false;
   ch[3].msg := msg;
   ch[3].sender := roleGateway[i].Gateway;
   ch[3].receiver := Intruder;
   roleGateway[i].st := Gateway4;
   put "3. ";
   put ch[3].sender;
   put "   ";
   put ch[3].receiver;
   put "   msg: ";
   printMsg(ch[3].msg);
   put "\n";
end;
rule " roleGateway4 "
roleGateway[i].st = Gateway4 & ch[4].empty = false ---& ch[4].receiver = roleGateway[i].Gateway
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[4].msg;
   destruct7(msg,roleGateway[i].loc_Server,roleGateway[i].loc_Na3,roleGateway[i].loc_Server);
   if(roleGateway[i].loc_Server=roleGateway[i].Server&roleGateway[i].loc_Server=roleGateway[i].Server)then
     ch[4].empty:=true;
     roleGateway[i].st := Gateway5;
   endif;
end;
rule " roleGateway5 "
roleGateway[i].st = Gateway5 & ch[5].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleGateway[i].Server,roleGateway[i].loc_Na3,roleGateway[i].Server,msg,msgNo);
   ch[5].empty := false;
   ch[5].msg := msg;
   ch[5].sender := roleGateway[i].Gateway;
   ch[5].receiver := Intruder;
   roleGateway[i].st := Gateway6;
   put "5. ";
   put ch[5].sender;
   put "   ";
   put ch[5].receiver;
   put "   msg: ";
   printMsg(ch[5].msg);
   put "\n";
end;
rule " roleGateway6 "
roleGateway[i].st = Gateway6 & ch[6].empty = false ---& ch[6].receiver = roleGateway[i].Gateway
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[6].msg;
   destruct7(msg,roleGateway[i].loc_Host,roleGateway[i].loc_Na3,roleGateway[i].loc_Host);
   if(roleGateway[i].loc_Host=roleGateway[i].Host&roleGateway[i].loc_Host=roleGateway[i].Host)then
     ch[6].empty:=true;
     roleGateway[i].st := Gateway7;
   endif;
end;
rule " roleGateway7 "
roleGateway[i].st = Gateway7 & ch[7].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleGateway[i].Host,roleGateway[i].loc_Na3,roleGateway[i].Host,msg,msgNo);
   ch[7].empty := false;
   ch[7].msg := msg;
   ch[7].sender := roleGateway[i].Gateway;
   ch[7].receiver := Intruder;
   roleGateway[i].st := Gateway8;
   put "7. ";
   put ch[7].sender;
   put "   ";
   put ch[7].receiver;
   put "   msg: ";
   printMsg(ch[7].msg);
   put "\n";
end;
rule " roleGateway8 "
roleGateway[i].st = Gateway8 & ch[8].empty = false ---& ch[8].receiver = roleGateway[i].Gateway
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[8].msg;
   destruct7(msg,roleGateway[i].loc_Server,roleGateway[i].loc_Na4,roleGateway[i].loc_Server);
   if(roleGateway[i].loc_Server=roleGateway[i].Server&roleGateway[i].loc_Server=roleGateway[i].Server)then
     ch[8].empty:=true;
     roleGateway[i].st := Gateway9;
   endif;
end;
rule " roleGateway9 "
roleGateway[i].st = Gateway9 & ch[9].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleGateway[i].Server,roleGateway[i].loc_Na4,roleGateway[i].Server,msg,msgNo);
   ch[9].empty := false;
   ch[9].msg := msg;
   ch[9].sender := roleGateway[i].Gateway;
   ch[9].receiver := Intruder;
   roleGateway[i].st := Gateway1;
   put "9. ";
   put ch[9].sender;
   put "   ";
   put ch[9].receiver;
   put "   msg: ";
   printMsg(ch[9].msg);
   put "\n";
   roleGateway[i].commit := true;
end;
endruleset;

ruleset i:roleServerNums do
rule " roleServer1 "
roleServer[i].st = Server1 & ch[1].empty = false ---& ch[1].receiver = roleServer[i].Server
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[1].msg;
   destruct7(msg,roleServer[i].loc_Host,roleServer[i].loc_Na2,roleServer[i].loc_Host);
   if(roleServer[i].loc_Host=roleServer[i].Host&roleServer[i].loc_Host=roleServer[i].Host)then
     ch[1].empty:=true;
     roleServer[i].st := Server2;
   endif;
end;
rule " roleServer2 "
roleServer[i].st = Server2 & ch[2].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleServer[i].Server,roleServer[i].Na3,roleServer[i].Server,msg,msgNo);
   ch[2].empty := false;
   ch[2].msg := msg;
   ch[2].sender := roleServer[i].Server;
   ch[2].receiver := Intruder;
   roleServer[i].st := Server3;
   put "2. ";
   put ch[2].sender;
   put "   ";
   put ch[2].receiver;
   put "   msg: ";
   printMsg(ch[2].msg);
   put "\n";
end;
rule " roleServer3 "
roleServer[i].st = Server3 & ch[3].empty = false ---& ch[3].receiver = roleServer[i].Server
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[3].msg;
   destruct7(msg,roleServer[i].loc_Host,roleServer[i].loc_Na3,roleServer[i].loc_Host);
   if(roleServer[i].loc_Host=roleServer[i].Host&roleServer[i].loc_Na3=roleServer[i].Na3&roleServer[i].loc_Host=roleServer[i].Host)then
     ch[3].empty:=true;
     roleServer[i].st := Server4;
   endif;
end;
rule " roleServer4 "
roleServer[i].st = Server4 & ch[4].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleServer[i].Server,roleServer[i].Na4,roleServer[i].Server,msg,msgNo);
   ch[4].empty := false;
   ch[4].msg := msg;
   ch[4].sender := roleServer[i].Server;
   ch[4].receiver := Intruder;
   roleServer[i].st := Server1;
   put "4. ";
   put ch[4].sender;
   put "   ";
   put ch[4].receiver;
   put "   msg: ";
   printMsg(ch[4].msg);
   put "\n";
   roleServer[i].commit := true;
end;
endruleset;


---rule of intruder to get msg1 
rule "intruderGetMsg1" 
  ch[1].empty = false
  ==>
  var flag_pat3:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[1].msg;
    get_msgNo(msg, msgNo);
    isPat3(msg,flag_pat3);
    if (flag_pat3) then
      if(!exist(pat3Set,msgNo)) then
        pat3Set.length:=pat3Set.length+1;
        pat3Set.content[pat3Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[1].empty := true;
  end;

---rule of intruder to emit msg1.
ruleset i: msgLen do
  ruleset j: roleHostNums do
    rule "intruderEmitMsg1"
      ch[1].empty=true & i <= pat3Set.length & Spy_known[pat3Set.content[i]]
      ==>
      begin
        if (!emit[pat3Set.content[i]] & msgs[msgs[pat3Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[1];
          ch[1].msg:=msgs[pat3Set.content[i]];
          ch[1].sender:=Intruder;
          ch[1].receiver:=roleHost[j].Host;
          ch[1].empty:=false;
          emit[pat3Set.content[i]] := true;
          put "1. ";
          put ch[1].sender;
          put "   ";
          put ch[1].receiver;
          put "   msg: ";
          printMsg(ch[1].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg2 
rule "intruderGetMsg2" 
  ch[2].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[2].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[2].empty := true;
  end;

---rule of intruder to emit msg2.
ruleset i: msgLen do
  ruleset j: roleHostNums do
    rule "intruderEmitMsg2"
      ch[2].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[2];
          ch[2].msg:=msgs[pat7Set.content[i]];
          ch[2].sender:=Intruder;
          ch[2].receiver:=roleHost[j].Host;
          ch[2].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "2. ";
          put ch[2].sender;
          put "   ";
          put ch[2].receiver;
          put "   msg: ";
          printMsg(ch[2].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg3 
rule "intruderGetMsg3" 
  ch[3].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[3].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[3].empty := true;
  end;

---rule of intruder to emit msg3.
ruleset i: msgLen do
  ruleset j: roleHostNums do
    rule "intruderEmitMsg3"
      ch[3].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[3];
          ch[3].msg:=msgs[pat7Set.content[i]];
          ch[3].sender:=Intruder;
          ch[3].receiver:=roleHost[j].Host;
          ch[3].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "3. ";
          put ch[3].sender;
          put "   ";
          put ch[3].receiver;
          put "   msg: ";
          printMsg(ch[3].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg4 
rule "intruderGetMsg4" 
  ch[4].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[4].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[4].empty := true;
  end;

---rule of intruder to emit msg4.
ruleset i: msgLen do
  ruleset j: roleHostNums do
    rule "intruderEmitMsg4"
      ch[4].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[4];
          ch[4].msg:=msgs[pat7Set.content[i]];
          ch[4].sender:=Intruder;
          ch[4].receiver:=roleHost[j].Host;
          ch[4].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "4. ";
          put ch[4].sender;
          put "   ";
          put ch[4].receiver;
          put "   msg: ";
          printMsg(ch[4].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg5 
rule "intruderGetMsg5" 
  ch[5].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[5].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[5].empty := true;
  end;

---rule of intruder to emit msg5.
ruleset i: msgLen do
  ruleset j: roleHostNums do
    rule "intruderEmitMsg5"
      ch[5].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[5];
          ch[5].msg:=msgs[pat7Set.content[i]];
          ch[5].sender:=Intruder;
          ch[5].receiver:=roleHost[j].Host;
          ch[5].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "5. ";
          put ch[5].sender;
          put "   ";
          put ch[5].receiver;
          put "   msg: ";
          printMsg(ch[5].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg6 
rule "intruderGetMsg6" 
  ch[6].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[6].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[6].empty := true;
  end;

---rule of intruder to emit msg6.
ruleset i: msgLen do
  ruleset j: roleHostNums do
    rule "intruderEmitMsg6"
      ch[6].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[6];
          ch[6].msg:=msgs[pat7Set.content[i]];
          ch[6].sender:=Intruder;
          ch[6].receiver:=roleHost[j].Host;
          ch[6].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "6. ";
          put ch[6].sender;
          put "   ";
          put ch[6].receiver;
          put "   msg: ";
          printMsg(ch[6].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg7 
rule "intruderGetMsg7" 
  ch[7].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[7].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[7].empty := true;
  end;

---rule of intruder to emit msg7.
ruleset i: msgLen do
  ruleset j: roleHostNums do
    rule "intruderEmitMsg7"
      ch[7].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[7];
          ch[7].msg:=msgs[pat7Set.content[i]];
          ch[7].sender:=Intruder;
          ch[7].receiver:=roleHost[j].Host;
          ch[7].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "7. ";
          put ch[7].sender;
          put "   ";
          put ch[7].receiver;
          put "   msg: ";
          printMsg(ch[7].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg8 
rule "intruderGetMsg8" 
  ch[8].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[8].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[8].empty := true;
  end;

---rule of intruder to emit msg8.
ruleset i: msgLen do
  ruleset j: roleHostNums do
    rule "intruderEmitMsg8"
      ch[8].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[8];
          ch[8].msg:=msgs[pat7Set.content[i]];
          ch[8].sender:=Intruder;
          ch[8].receiver:=roleHost[j].Host;
          ch[8].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "8. ";
          put ch[8].sender;
          put "   ";
          put ch[8].receiver;
          put "   msg: ";
          printMsg(ch[8].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg9 
rule "intruderGetMsg9" 
  ch[9].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[9].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[9].empty := true;
  end;

---rule of intruder to emit msg9.
ruleset i: msgLen do
  ruleset j: roleHostNums do
    rule "intruderEmitMsg9"
      ch[9].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[9];
          ch[9].msg:=msgs[pat7Set.content[i]];
          ch[9].sender:=Intruder;
          ch[9].receiver:=roleHost[j].Host;
          ch[9].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "9. ";
          put ch[9].sender;
          put "   ";
          put ch[9].receiver;
          put "   msg: ";
          printMsg(ch[9].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;


---rule of intruder to get msg1 
rule "intruderGetMsg1" 
  ch[1].empty = false
  ==>
  var flag_pat3:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[1].msg;
    get_msgNo(msg, msgNo);
    isPat3(msg,flag_pat3);
    if (flag_pat3) then
      if(!exist(pat3Set,msgNo)) then
        pat3Set.length:=pat3Set.length+1;
        pat3Set.content[pat3Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[1].empty := true;
  end;

---rule of intruder to emit msg1.
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsg1"
      ch[1].empty=true & i <= pat3Set.length & Spy_known[pat3Set.content[i]]
      ==>
      begin
        if (!emit[pat3Set.content[i]] & msgs[msgs[pat3Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[1];
          ch[1].msg:=msgs[pat3Set.content[i]];
          ch[1].sender:=Intruder;
          ch[1].receiver:=roleGateway[j].Gateway;
          ch[1].empty:=false;
          emit[pat3Set.content[i]] := true;
          put "1. ";
          put ch[1].sender;
          put "   ";
          put ch[1].receiver;
          put "   msg: ";
          printMsg(ch[1].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg2 
rule "intruderGetMsg2" 
  ch[2].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[2].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[2].empty := true;
  end;

---rule of intruder to emit msg2.
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsg2"
      ch[2].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[2];
          ch[2].msg:=msgs[pat7Set.content[i]];
          ch[2].sender:=Intruder;
          ch[2].receiver:=roleGateway[j].Gateway;
          ch[2].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "2. ";
          put ch[2].sender;
          put "   ";
          put ch[2].receiver;
          put "   msg: ";
          printMsg(ch[2].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg3 
rule "intruderGetMsg3" 
  ch[3].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[3].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[3].empty := true;
  end;

---rule of intruder to emit msg3.
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsg3"
      ch[3].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[3];
          ch[3].msg:=msgs[pat7Set.content[i]];
          ch[3].sender:=Intruder;
          ch[3].receiver:=roleGateway[j].Gateway;
          ch[3].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "3. ";
          put ch[3].sender;
          put "   ";
          put ch[3].receiver;
          put "   msg: ";
          printMsg(ch[3].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg4 
rule "intruderGetMsg4" 
  ch[4].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[4].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[4].empty := true;
  end;

---rule of intruder to emit msg4.
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsg4"
      ch[4].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[4];
          ch[4].msg:=msgs[pat7Set.content[i]];
          ch[4].sender:=Intruder;
          ch[4].receiver:=roleGateway[j].Gateway;
          ch[4].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "4. ";
          put ch[4].sender;
          put "   ";
          put ch[4].receiver;
          put "   msg: ";
          printMsg(ch[4].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg5 
rule "intruderGetMsg5" 
  ch[5].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[5].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[5].empty := true;
  end;

---rule of intruder to emit msg5.
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsg5"
      ch[5].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[5];
          ch[5].msg:=msgs[pat7Set.content[i]];
          ch[5].sender:=Intruder;
          ch[5].receiver:=roleGateway[j].Gateway;
          ch[5].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "5. ";
          put ch[5].sender;
          put "   ";
          put ch[5].receiver;
          put "   msg: ";
          printMsg(ch[5].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg6 
rule "intruderGetMsg6" 
  ch[6].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[6].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[6].empty := true;
  end;

---rule of intruder to emit msg6.
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsg6"
      ch[6].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[6];
          ch[6].msg:=msgs[pat7Set.content[i]];
          ch[6].sender:=Intruder;
          ch[6].receiver:=roleGateway[j].Gateway;
          ch[6].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "6. ";
          put ch[6].sender;
          put "   ";
          put ch[6].receiver;
          put "   msg: ";
          printMsg(ch[6].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg7 
rule "intruderGetMsg7" 
  ch[7].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[7].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[7].empty := true;
  end;

---rule of intruder to emit msg7.
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsg7"
      ch[7].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[7];
          ch[7].msg:=msgs[pat7Set.content[i]];
          ch[7].sender:=Intruder;
          ch[7].receiver:=roleGateway[j].Gateway;
          ch[7].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "7. ";
          put ch[7].sender;
          put "   ";
          put ch[7].receiver;
          put "   msg: ";
          printMsg(ch[7].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg8 
rule "intruderGetMsg8" 
  ch[8].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[8].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[8].empty := true;
  end;

---rule of intruder to emit msg8.
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsg8"
      ch[8].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[8];
          ch[8].msg:=msgs[pat7Set.content[i]];
          ch[8].sender:=Intruder;
          ch[8].receiver:=roleGateway[j].Gateway;
          ch[8].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "8. ";
          put ch[8].sender;
          put "   ";
          put ch[8].receiver;
          put "   msg: ";
          printMsg(ch[8].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg9 
rule "intruderGetMsg9" 
  ch[9].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[9].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[9].empty := true;
  end;

---rule of intruder to emit msg9.
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsg9"
      ch[9].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[9];
          ch[9].msg:=msgs[pat7Set.content[i]];
          ch[9].sender:=Intruder;
          ch[9].receiver:=roleGateway[j].Gateway;
          ch[9].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "9. ";
          put ch[9].sender;
          put "   ";
          put ch[9].receiver;
          put "   msg: ";
          printMsg(ch[9].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;


---rule of intruder to get msg1 
rule "intruderGetMsg1" 
  ch[1].empty = false
  ==>
  var flag_pat3:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[1].msg;
    get_msgNo(msg, msgNo);
    isPat3(msg,flag_pat3);
    if (flag_pat3) then
      if(!exist(pat3Set,msgNo)) then
        pat3Set.length:=pat3Set.length+1;
        pat3Set.content[pat3Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[1].empty := true;
  end;

---rule of intruder to emit msg1.
ruleset i: msgLen do
  ruleset j: roleServerNums do
    rule "intruderEmitMsg1"
      ch[1].empty=true & i <= pat3Set.length & Spy_known[pat3Set.content[i]]
      ==>
      begin
        if (!emit[pat3Set.content[i]] & msgs[msgs[pat3Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[1];
          ch[1].msg:=msgs[pat3Set.content[i]];
          ch[1].sender:=Intruder;
          ch[1].receiver:=roleServer[j].Server;
          ch[1].empty:=false;
          emit[pat3Set.content[i]] := true;
          put "1. ";
          put ch[1].sender;
          put "   ";
          put ch[1].receiver;
          put "   msg: ";
          printMsg(ch[1].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg2 
rule "intruderGetMsg2" 
  ch[2].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[2].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[2].empty := true;
  end;

---rule of intruder to emit msg2.
ruleset i: msgLen do
  ruleset j: roleServerNums do
    rule "intruderEmitMsg2"
      ch[2].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[2];
          ch[2].msg:=msgs[pat7Set.content[i]];
          ch[2].sender:=Intruder;
          ch[2].receiver:=roleServer[j].Server;
          ch[2].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "2. ";
          put ch[2].sender;
          put "   ";
          put ch[2].receiver;
          put "   msg: ";
          printMsg(ch[2].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg3 
rule "intruderGetMsg3" 
  ch[3].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[3].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[3].empty := true;
  end;

---rule of intruder to emit msg3.
ruleset i: msgLen do
  ruleset j: roleServerNums do
    rule "intruderEmitMsg3"
      ch[3].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[3];
          ch[3].msg:=msgs[pat7Set.content[i]];
          ch[3].sender:=Intruder;
          ch[3].receiver:=roleServer[j].Server;
          ch[3].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "3. ";
          put ch[3].sender;
          put "   ";
          put ch[3].receiver;
          put "   msg: ";
          printMsg(ch[3].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg4 
rule "intruderGetMsg4" 
  ch[4].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[4].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[4].empty := true;
  end;

---rule of intruder to emit msg4.
ruleset i: msgLen do
  ruleset j: roleServerNums do
    rule "intruderEmitMsg4"
      ch[4].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[4];
          ch[4].msg:=msgs[pat7Set.content[i]];
          ch[4].sender:=Intruder;
          ch[4].receiver:=roleServer[j].Server;
          ch[4].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "4. ";
          put ch[4].sender;
          put "   ";
          put ch[4].receiver;
          put "   msg: ";
          printMsg(ch[4].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg5 
rule "intruderGetMsg5" 
  ch[5].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[5].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[5].empty := true;
  end;

---rule of intruder to emit msg5.
ruleset i: msgLen do
  ruleset j: roleServerNums do
    rule "intruderEmitMsg5"
      ch[5].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[5];
          ch[5].msg:=msgs[pat7Set.content[i]];
          ch[5].sender:=Intruder;
          ch[5].receiver:=roleServer[j].Server;
          ch[5].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "5. ";
          put ch[5].sender;
          put "   ";
          put ch[5].receiver;
          put "   msg: ";
          printMsg(ch[5].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg6 
rule "intruderGetMsg6" 
  ch[6].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[6].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[6].empty := true;
  end;

---rule of intruder to emit msg6.
ruleset i: msgLen do
  ruleset j: roleServerNums do
    rule "intruderEmitMsg6"
      ch[6].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[6];
          ch[6].msg:=msgs[pat7Set.content[i]];
          ch[6].sender:=Intruder;
          ch[6].receiver:=roleServer[j].Server;
          ch[6].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "6. ";
          put ch[6].sender;
          put "   ";
          put ch[6].receiver;
          put "   msg: ";
          printMsg(ch[6].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg7 
rule "intruderGetMsg7" 
  ch[7].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[7].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[7].empty := true;
  end;

---rule of intruder to emit msg7.
ruleset i: msgLen do
  ruleset j: roleServerNums do
    rule "intruderEmitMsg7"
      ch[7].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[7];
          ch[7].msg:=msgs[pat7Set.content[i]];
          ch[7].sender:=Intruder;
          ch[7].receiver:=roleServer[j].Server;
          ch[7].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "7. ";
          put ch[7].sender;
          put "   ";
          put ch[7].receiver;
          put "   msg: ";
          printMsg(ch[7].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg8 
rule "intruderGetMsg8" 
  ch[8].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[8].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[8].empty := true;
  end;

---rule of intruder to emit msg8.
ruleset i: msgLen do
  ruleset j: roleServerNums do
    rule "intruderEmitMsg8"
      ch[8].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[8];
          ch[8].msg:=msgs[pat7Set.content[i]];
          ch[8].sender:=Intruder;
          ch[8].receiver:=roleServer[j].Server;
          ch[8].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "8. ";
          put ch[8].sender;
          put "   ";
          put ch[8].receiver;
          put "   msg: ";
          printMsg(ch[8].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to get msg9 
rule "intruderGetMsg9" 
  ch[9].empty = false
  ==>
  var flag_pat7:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[9].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7);
    if (flag_pat7) then
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[9].empty := true;
  end;

---rule of intruder to emit msg9.
ruleset i: msgLen do
  ruleset j: roleServerNums do
    rule "intruderEmitMsg9"
      ch[9].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]] & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[9];
          ch[9].msg:=msgs[pat7Set.content[i]];
          ch[9].sender:=Intruder;
          ch[9].receiver:=roleServer[j].Server;
          ch[9].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "9. ";
          put ch[9].sender;
          put "   ";
          put ch[9].receiver;
          put "   msg: ";
          printMsg(ch[9].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(Na1.Gateway)

ruleset i:indexType do 
  rule "deconcat 3"	---pat3
    i<=pat3Set.length & Spy_known[pat3Set.content[i]] &
    !(Spy_known[msgs[pat3Set.content[i]].concatPart1] & Spy_known[msgs[pat3Set.content[i]].concatPart2])
    ==>
    var msgPat1,msgPat2:indexType;
        flag_pat1,flag_pat2:boolean;
    begin
      if (!Spy_known[msgs[pat3Set.content[i]].concatPart1]) then
        Spy_known[msgs[pat3Set.content[i]].concatPart1]:=true;
        msgPat1 := msgs[pat3Set.content[i]].concatPart1;
        isPat1(msgs[msgPat1],flag_pat1);
        if (flag_pat1) then
          if(!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat3Set.content[i]].concatPart2]) then
        Spy_known[msgs[pat3Set.content[i]].concatPart2]:=true;
        msgPat2 := msgs[pat3Set.content[i]].concatPart2;
        isPat2(msgs[msgPat2],flag_pat2);
        if (flag_pat2) then
          if(!exist(pat2Set,msgPat2)) then
             pat2Set.length:=pat2Set.length+1;
             pat2Set.content[pat2Set.length] := msgPat2;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i0: indexType do
  ruleset i1: indexType do 
    rule "enconcat 3"	---pat3
      i0<=pat1Set.length & Spy_known[pat1Set.content[i0]] &
      i1<=pat2Set.length & Spy_known[pat2Set.content[i1]] &
      !(pat1Set.content[i0] = pat2Set.content[i1]) & 
      !Spy_known[construct3By12(pat1Set.content[i0],pat2Set.content[i1])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct3By12(pat1Set.content[i0],pat2Set.content[i1]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat3Set,concatMsgNo)) then
          pat3Set.length:=pat3Set.length+1;
          pat3Set.content[pat3Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(Host.Na2)

ruleset i:indexType do 
  rule "deconcat 4"	---pat4
    i<=pat4Set.length & Spy_known[pat4Set.content[i]] &
    !(Spy_known[msgs[pat4Set.content[i]].concatPart1] & Spy_known[msgs[pat4Set.content[i]].concatPart2])
    ==>
    var msgPat2,msgPat1:indexType;
        flag_pat2,flag_pat1:boolean;
    begin
      if (!Spy_known[msgs[pat4Set.content[i]].concatPart1]) then
        Spy_known[msgs[pat4Set.content[i]].concatPart1]:=true;
        msgPat2 := msgs[pat4Set.content[i]].concatPart1;
        isPat2(msgs[msgPat2],flag_pat2);
        if (flag_pat2) then
          if(!exist(pat2Set,msgPat2)) then
             pat2Set.length:=pat2Set.length+1;
             pat2Set.content[pat2Set.length] := msgPat2;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat4Set.content[i]].concatPart2]) then
        Spy_known[msgs[pat4Set.content[i]].concatPart2]:=true;
        msgPat1 := msgs[pat4Set.content[i]].concatPart2;
        isPat1(msgs[msgPat1],flag_pat1);
        if (flag_pat1) then
          if(!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat1;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i0: indexType do
  ruleset i1: indexType do 
    rule "enconcat 4"	---pat4
      i0<=pat2Set.length & Spy_known[pat2Set.content[i0]] &
      i1<=pat1Set.length & Spy_known[pat1Set.content[i1]] &
      !(pat2Set.content[i0] = pat1Set.content[i1]) & 
      !Spy_known[construct4By21(pat2Set.content[i0],pat1Set.content[i1])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct4By21(pat2Set.content[i0],pat1Set.content[i1]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat4Set,concatMsgNo)) then
          pat4Set.length:=pat4Set.length+1;
          pat4Set.content[pat4Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc(Host.Na2,sk(Host)), for intruder
ruleset i:indexType do 
  rule "decrypt 6"	---pat6
    i<=pat6Set.length & Spy_known[pat6Set.content[i]] &
    !Spy_known[msgs[pat6Set.content[i]].aencMsg]
    ==>
    var key_inv:Message;
	msgPat4:indexType;
	flag_pat4:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat6Set.content[i]].aencKey]);
      if (key_inv.k.ag = Intruder) then
        Spy_known[msgs[pat6Set.content[i]].aencMsg]:=true;
        msgPat4:=msgs[pat6Set.content[i]].aencMsg;
        isPat4(msgs[msgPat4],flag_pat4);
        if (flag_pat4) then
          if (!exist(pat4Set,msgPat4)) then
            pat4Set.length:=pat4Set.length+1;
            pat4Set.content[pat4Set.length]:=msgPat4;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:indexType do 
  ruleset j:indexType do 
    rule "encrypt 6"	---pat6
      i<=pat4Set.length & Spy_known[pat4Set.content[i]] &
      j<=pat5Set.length & Spy_known[pat5Set.content[j]] &
      !Spy_known[construct6By45(pat4Set.content[i],pat5Set.content[j])]
      ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat5Set.content[j]].k.ag=intruder.B) then
          encMsgNo := construct6By45(pat4Set.content[i],pat5Set.content[j]);
          if (!exist(pat6Set,encMsgNo)) then
            pat6Set.length := pat6Set.length+1;
            pat6Set.content[pat6Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(Host.Na2.aenc{< Host.Na2 >}sk(Host))

ruleset i:indexType do 
  rule "deconcat 7"	---pat7
    i<=pat7Set.length & Spy_known[pat7Set.content[i]] &
    !(Spy_known[msgs[pat7Set.content[i]].concatPart1] & Spy_known[msgs[pat7Set.content[i]].concatPart2])
    ==>
    var msgPat2,msgPat1:indexType;
        flag_pat2,flag_pat1:boolean;
    begin
      if (!Spy_known[msgs[pat7Set.content[i]].concatPart1]) then
        Spy_known[msgs[pat7Set.content[i]].concatPart1]:=true;
        msgPat2 := msgs[pat7Set.content[i]].concatPart1;
        isPat2(msgs[msgPat2],flag_pat2);
        if (flag_pat2) then
          if(!exist(pat2Set,msgPat2)) then
             pat2Set.length:=pat2Set.length+1;
             pat2Set.content[pat2Set.length] := msgPat2;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat7Set.content[i]].concatPart2]) then
        Spy_known[msgs[pat7Set.content[i]].concatPart2]:=true;
        msgPat1 := msgs[pat7Set.content[i]].concatPart2;
        isPat1(msgs[msgPat1],flag_pat1);
        if (flag_pat1) then
          if(!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat1;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i0: indexType do
  ruleset i1: indexType do
  ruleset i2: indexType do 
    rule "enconcat 7"	---pat7
      i0<=pat2Set.length & Spy_known[pat2Set.content[i0]] &
      i1<=pat1Set.length & Spy_known[pat1Set.content[i1]] &
      i2<=pat6Set.length & Spy_known[pat6Set.content[i2]] &
      !(pat2Set.content[i0] = pat1Set.content[i1] = pat6Set.content[i2]) & 
      !Spy_known[construct7By216(pat2Set.content[i0],pat1Set.content[i1],pat6Set.content[i2])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct7By216(pat2Set.content[i0],pat1Set.content[i1],pat6Set.content[i2]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat7Set,concatMsgNo)) then
          pat7Set.length:=pat7Set.length+1;
          pat7Set.content[pat7Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;
endruleset;

startstate
  roleHost[1].Host := HostID;
  roleHost[1].Gateway := Intruder;
  roleHost[1].Na2 := Na2;
  roleHost[1].st := Host1;
  roleHost[1].commit := false;
  roleGateway[1].Host := HostID;
  roleGateway[1].Server := ServerIP;
  roleGateway[1].Gateway := GatewayIP;
  roleGateway[1].Na1 := Na1;
  roleGateway[1].st := Gateway1;
  roleGateway[1].commit := false;
  roleServer[1].Host := HostID;
  roleServer[1].Gateway := GatewayIP;
  roleServer[1].Server := ServerIP;
  roleServer[1].Na3 := Na3;
  roleServer[1].Na4 := Na4;
  roleServer[1].st := Server1;
  roleServer[1].commit := false;
  ---intruder.B := Bob;
  for i:chanNums do
    ch[i].empty := true;
  endfor;

  for i: indexType do
    emit[i]:=false;
  endfor;

  for i:indexType do
    msgs[i].msgType := null;
  endfor;

  msg_end := 0;
  for i:msgLen do
    pat1Set.content[i] := 0;
    pat2Set.content[i] := 0;
    pat3Set.content[i] := 0;
    pat4Set.content[i] := 0;
    pat5Set.content[i] := 0;
    pat6Set.content[i] := 0;
    pat7Set.content[i] := 0;
  endfor;
  for i:indexType do 
    Spy_known[i] := false;
  endfor;
  pat1Set.length := 0;
  pat2Set.length := 0;
  pat3Set.length := 0;
  pat4Set.length := 0;
  pat5Set.length := 0;
  pat6Set.length := 0;
  pat7Set.length := 0;

  msg_end := msg_end+1;  
  msgs[msg_end].msgType := key;
  msgs[msg_end].k.ag:=Bob;
  msgs[msg_end].k.encType:=PK;

  pat5Set.length := pat5Set.length + 1; 
  pat5Set.content[pat5Set.length] :=msg_end;
  Spy_known[msg_end] := true;
  
  ---eve_end := 0;  
  ---for i:eventNums do
  ---   systemEvent[i].eveType := empty;
  ---endfor;
end;

invariant "sec1"
  forall i:msgLen do
    (msgs[i].msgType=nonce & msgs[i].noncePart = Na1)
    ->
    Spy_known[i] = false
end;

invariant "auth1"
  forall i: roleGatewayNums do
    roleGateway[i].commit = true 
    ->
    (exists j: roleHostNums do
      roleHost[j].commit = true & roleHost[i].Na1 = roleGateway[j].Na1
    endexists)
  endforall;

invariant "auth2"
  forall i: roleGatewayNums do
    roleGateway[i].commit = true 
    ->
    (exists j: roleHostNums do
      roleHost[j].commit = true & roleHost[i].Na2 = roleGateway[j].Na2
    endexists)
  endforall;

invariant "auth3"
  forall i: roleServerNums do
    roleServer[i].commit = true 
    ->
    (exists j: roleHostNums do
      roleHost[j].commit = true & roleHost[i].Na3 = roleServer[j].Na3
    endexists)
  endforall;
