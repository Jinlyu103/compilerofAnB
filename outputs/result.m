const
  roleHostNum:1;
  roleGatewayNum:1;
  roleServerNum:1;
  totalFact:20;
  msgLength:15;
  chanNum:10;
type
  indexType:0..totalFact;
  roleHostNums:1..roleHostNum;
  roleGatewayNums:1..roleGatewayNum;
  roleServerNums:1..roleServerNum;
  msgLen:0..msgLength;
  chanNums:1..chanNum;

  AgentType : enum{Intruder, HostID, GatewayIP, ServerIP,anyAgent}; ---Intruder 
  NonceType : enum{Na2, Na1, Na3, Na4, anyNonce};  

  EncryptType : enum{PK,SK,Symk};
  KeyType: record 
    encType: EncryptType; 
    ag: AgentType; 
  end;

  HostStatus: enum{Host1,Host2,Host3,Host4,Host5};
  GatewayStatus: enum{Gateway1,Gateway2,Gateway3,Gateway4,Gateway5,Gateway6,Gateway7,Gateway8,Gateway9};
  ServerStatus: enum{Server1,Server2,Server3,Server4};

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
    concatPart: Array[msgLen] of indexType;--- concatParts could be written in arrays: concatPart: Array[msgLen] of indexType
    length : indexType;
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
   locNa2 : NonceType;
   locNa1 : NonceType;
   locNa3 : NonceType;
   locNa4 : NonceType;
   locHost : AgentType;
   locGateway : AgentType;
   locServer : AgentType;
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
   locNa2 : NonceType;
   locNa1 : NonceType;
   locNa3 : NonceType;
   locNa4 : NonceType;
   locHost : AgentType;
   locGateway : AgentType;
   locServer : AgentType;
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
   locNa2 : NonceType;
   locNa1 : NonceType;
   locNa3 : NonceType;
   locNa4 : NonceType;
   locHost : AgentType;
   locGateway : AgentType;
   locServer : AgentType;
   st: ServerStatus;
   commit : boolean;
  end;

  ---RoleIntruder: record
  ---  B : AgentType;
  ---send;

  msgSet: record
    content : Array[indexType] of indexType;
    length : indexType;
  end;

var
  ch : Array[chanNums] of Channel;
  roleHost : Array[roleHostNums] of RoleHost;
  roleGateway : Array[roleGatewayNums] of RoleGateway;
  roleServer : Array[roleServerNums] of RoleServer;

  ---intruder    : RoleIntruder;
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
      for i: indexType do
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
        msgs[index].length := 1;
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
   for i: indexType do
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
     msgs[index].length := 1;
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
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 2) then
       if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1] := i1;
     msgs[index].concatPart[2] := i2; 
     msgs[index].length := 2;
    endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat3: Na1.Gateway 
procedure isPat3(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat2(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
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
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 2) then
       if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1] := i1;
     msgs[index].concatPart[2] := i2; 
     msgs[index].length := 2;
    endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat4: Host.Na2 
procedure isPat4(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat2(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
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
    for i: indexType do
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
   for i : indexType do
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
     msgs[index].length := 1;
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
   lookAddPat6(Host,Na2,HostSk,msg3,i3);
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 3) then
       if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2 & msgs[i].concatPart[3] = i3) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1] := i1;
     msgs[index].concatPart[2] := i2;
     msgs[index].concatPart[3] := i3; 
     msgs[index].length := 3;
    endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat7: Host.Na2.aenc{< Host.Na2 >}sk(Host) 
procedure isPat7(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     if(msg.msgType = concat) then
        isPat2(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
        isPat6(msgs[msg.concatPart[3]],flagPart3);
       if (flagPart1 & flagPart2 & flagPart3) then 
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
    msgNum1 := msgs[msg.concatPart[1]];
    Na1 := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart[2]];
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
    msgNum1 := msgs[msg.concatPart[1]];
    Host := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
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
    msg1,msgNum1,msgNum2:Message;
  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
   HostSk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart[1]];
    msgNum2:=msgs[msg1.concatPart[2]];
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
    msgNum1 := msgs[msg.concatPart[1]];
    Host := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    Na2 := msgNum2.noncePart;
    msgNum3 := msgs[msg.concatPart[3]];
    k := msgs[msgNum3.aencKey].k;
    HostSk := k.ag;
  end;

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
    end;

  procedure printMsg(msg:Message);
    var i:indexType;
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
        put "}";
      elsif msg.msgType=senc then
        put "senc{";
        printMsg(msgs[msg.sencMsg]);
        put ",";
        printMsg(msgs[msg.sencKey]);
        put "}";
      elsif msg.msgType=concat then
        put "concat(";
        i := 1;
        while i < msg.length do
          printMsg(msgs[msg.concatPart[i]]);
          put ",";
          i := i+1;
        end;
        printMsg(msgs[msg.concatPart[i]]);
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
function lookUp(msg: Message): indexType; --- not used.
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
  end;
--- Sorry, construct_function of this pattern has not been written!

--- Sorry, construct_function of this pattern has not been written!

function construct3By12(msgNo1,msgNo2:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 2) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2) then
         index := i;       endif;     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1] := msgNo1;
     msgs[index].concatPart[2] := msgNo2;
     msgs[index].length := 2;
   endif;
   return index;
  end;

function construct4By21(msgNo1,msgNo2:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 2) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2) then
         index := i;       endif;     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1] := msgNo1;
     msgs[index].concatPart[2] := msgNo2;
     msgs[index].length := 2;
   endif;
   return index;
  end;

--- Sorry, construct_function of this pattern has not been written!

function construct6By45(msgNo4, msgNo5:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo4 & msgs[i].aencKey = msgNo5) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo4;
     msgs[index].aencKey := msgNo5;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct7By216(msgNo1,msgNo2,msgNo3:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 3) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3) then
         index := i;       endif;     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1] := msgNo1;
     msgs[index].concatPart[2] := msgNo2;
     msgs[index].concatPart[3] := msgNo3;
     msgs[index].length := 3;
   endif;
   return index;
  end;

function exist(PatnSet:msgSet; msgNo:indexType):boolean;
  var flag:boolean;
  begin
    flag := false;
    for i:msgLen do
      if (msgNo != 0 & PatnSet.content[i] = msgNo) then 
        flag := true;
      endif;
    endfor;
    return flag;
  end;
function matchAgent(Var locAg: AgentType; Var Ag: AgentType):boolean;  ---if ag equals to locAg which was derived from recieving msg, or anyAgent, then true
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
  end;

function matchNonce(Var locNa: NonceType; Var Na: NonceType):boolean;  ---if Na equals to locNa which was derived from recieving msg, or anyNonce, then true
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
  end;

function match(var m1,m2:Message):boolean;
  var concatFlag: boolean;
      i: indexType;
  begin 
    if m1.msgType = agent & m2.msgType = agent then
	    return (m1.ag != anyAgent & m2.ag != anyAgent & matchAgent(m1.ag, m2.ag)); ---ag and noncePart should be initiallized as anyAgent or anyNonce 
    elsif m1.msgType = nonce & m2.msgType = nonce then
	    return (m1.noncePart != anyNonce & m2.noncePart != anyNonce & matchNonce(m1.noncePart, m2.noncePart));
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
  end;

ruleset i:roleHostNums do
rule " roleHost1 "
roleHost[i].st = Host1 & ch[1].empty = false 
==>
var flag_pat3:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[1].msg;
   isPat3(msg, flag_pat3);
   if(flag_pat3) then
     destruct3(msg,roleHost[i].locNa1,roleHost[i].locGateway);
     if(matchNonce(roleHost[i].locNa1, roleHost[i].Na1) & matchAgent(roleHost[i].locGateway, roleHost[i].Gateway))then
       ch[1].empty:=true;
       clear ch[1].msg;
       roleHost[i].st := Host2;
     endif;
   endif;
   put "recv1. ";
   put ch[1].sender;
   put "   ";
   put ch[1].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
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
   put "send2. ";
   put ch[2].sender;
   put "   ";
   put ch[2].receiver;
   put "   msg: ";
   printMsg(ch[2].msg);
   put "\n";
end;
rule " roleHost3 "
roleHost[i].st = Host3 & ch[5].empty = false 
==>
var flag_pat7:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[5].msg;
   isPat7(msg, flag_pat7);
   if(flag_pat7) then
     destruct7(msg,roleHost[i].locServer,roleHost[i].locNa3,roleHost[i].locServer);
     if(matchAgent(roleHost[i].locServer, roleHost[i].Server) & matchNonce(roleHost[i].locNa3, roleHost[i].Na3) & matchAgent(roleHost[i].locServer, roleHost[i].Server))then
       ch[5].empty:=true;
       clear ch[5].msg;
       roleHost[i].st := Host4;
     endif;
   endif;
   put "recv3. ";
   put ch[5].sender;
   put "   ";
   put ch[5].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleHost4 "
roleHost[i].st = Host4 & ch[6].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleHost[i].Host,roleHost[i].locNa3,roleHost[i].Host,msg,msgNo);
   ch[6].empty := false;
   ch[6].msg := msg;
   ch[6].sender := roleHost[i].Host;
   ch[6].receiver := Intruder;
   roleHost[i].st := Host5;
   put "send4. ";
   put ch[6].sender;
   put "   ";
   put ch[6].receiver;
   put "   msg: ";
   printMsg(ch[6].msg);
   put "\n";
end;
rule " roleHost5 "
roleHost[i].st = Host5 & ch[9].empty = false 
==>
var flag_pat7:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[9].msg;
   isPat7(msg, flag_pat7);
   if(flag_pat7) then
     destruct7(msg,roleHost[i].locServer,roleHost[i].locNa4,roleHost[i].locServer);
     if(matchAgent(roleHost[i].locServer, roleHost[i].Server) & matchNonce(roleHost[i].locNa4, roleHost[i].Na4) & matchAgent(roleHost[i].locServer, roleHost[i].Server))then
       ch[9].empty:=true;
       clear ch[9].msg;
       roleHost[i].st := Host1;
     endif;
   endif;
   put "recv5. ";
   put ch[9].sender;
   put "   ";
   put ch[9].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
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
   put "send1. ";
   put ch[1].sender;
   put "   ";
   put ch[1].receiver;
   put "   msg: ";
   printMsg(ch[1].msg);
   put "\n";
end;
rule " roleGateway2 "
roleGateway[i].st = Gateway2 & ch[2].empty = false 
==>
var flag_pat7:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[2].msg;
   isPat7(msg, flag_pat7);
   if(flag_pat7) then
     destruct7(msg,roleGateway[i].locHost,roleGateway[i].locNa2,roleGateway[i].locHost);
     if(matchAgent(roleGateway[i].locHost, roleGateway[i].Host) & matchNonce(roleGateway[i].locNa2, roleGateway[i].Na2) & matchAgent(roleGateway[i].locHost, roleGateway[i].Host))then
       ch[2].empty:=true;
       clear ch[2].msg;
       roleGateway[i].st := Gateway3;
     endif;
   endif;
   put "recv2. ";
   put ch[2].sender;
   put "   ";
   put ch[2].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleGateway3 "
roleGateway[i].st = Gateway3 & ch[3].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleGateway[i].Host,roleGateway[i].locNa2,roleGateway[i].Host,msg,msgNo);
   ch[3].empty := false;
   ch[3].msg := msg;
   ch[3].sender := roleGateway[i].Gateway;
   ch[3].receiver := Intruder;
   roleGateway[i].st := Gateway4;
   put "send3. ";
   put ch[3].sender;
   put "   ";
   put ch[3].receiver;
   put "   msg: ";
   printMsg(ch[3].msg);
   put "\n";
end;
rule " roleGateway4 "
roleGateway[i].st = Gateway4 & ch[4].empty = false 
==>
var flag_pat7:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[4].msg;
   isPat7(msg, flag_pat7);
   if(flag_pat7) then
     destruct7(msg,roleGateway[i].locServer,roleGateway[i].locNa3,roleGateway[i].locServer);
     if(matchAgent(roleGateway[i].locServer, roleGateway[i].Server) & matchNonce(roleGateway[i].locNa3, roleGateway[i].Na3) & matchAgent(roleGateway[i].locServer, roleGateway[i].Server))then
       ch[4].empty:=true;
       clear ch[4].msg;
       roleGateway[i].st := Gateway5;
     endif;
   endif;
   put "recv4. ";
   put ch[4].sender;
   put "   ";
   put ch[4].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleGateway5 "
roleGateway[i].st = Gateway5 & ch[5].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleGateway[i].Server,roleGateway[i].locNa3,roleGateway[i].Server,msg,msgNo);
   ch[5].empty := false;
   ch[5].msg := msg;
   ch[5].sender := roleGateway[i].Gateway;
   ch[5].receiver := Intruder;
   roleGateway[i].st := Gateway6;
   put "send5. ";
   put ch[5].sender;
   put "   ";
   put ch[5].receiver;
   put "   msg: ";
   printMsg(ch[5].msg);
   put "\n";
end;
rule " roleGateway6 "
roleGateway[i].st = Gateway6 & ch[6].empty = false 
==>
var flag_pat7:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[6].msg;
   isPat7(msg, flag_pat7);
   if(flag_pat7) then
     destruct7(msg,roleGateway[i].locHost,roleGateway[i].locNa3,roleGateway[i].locHost);
     if(matchAgent(roleGateway[i].locHost, roleGateway[i].Host) & matchNonce(roleGateway[i].locNa3, roleGateway[i].Na3) & matchAgent(roleGateway[i].locHost, roleGateway[i].Host))then
       ch[6].empty:=true;
       clear ch[6].msg;
       roleGateway[i].st := Gateway7;
     endif;
   endif;
   put "recv6. ";
   put ch[6].sender;
   put "   ";
   put ch[6].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleGateway7 "
roleGateway[i].st = Gateway7 & ch[7].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleGateway[i].Host,roleGateway[i].locNa3,roleGateway[i].Host,msg,msgNo);
   ch[7].empty := false;
   ch[7].msg := msg;
   ch[7].sender := roleGateway[i].Gateway;
   ch[7].receiver := Intruder;
   roleGateway[i].st := Gateway8;
   put "send7. ";
   put ch[7].sender;
   put "   ";
   put ch[7].receiver;
   put "   msg: ";
   printMsg(ch[7].msg);
   put "\n";
end;
rule " roleGateway8 "
roleGateway[i].st = Gateway8 & ch[8].empty = false 
==>
var flag_pat7:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[8].msg;
   isPat7(msg, flag_pat7);
   if(flag_pat7) then
     destruct7(msg,roleGateway[i].locServer,roleGateway[i].locNa4,roleGateway[i].locServer);
     if(matchAgent(roleGateway[i].locServer, roleGateway[i].Server) & matchNonce(roleGateway[i].locNa4, roleGateway[i].Na4) & matchAgent(roleGateway[i].locServer, roleGateway[i].Server))then
       ch[8].empty:=true;
       clear ch[8].msg;
       roleGateway[i].st := Gateway9;
     endif;
   endif;
   put "recv8. ";
   put ch[8].sender;
   put "   ";
   put ch[8].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleGateway9 "
roleGateway[i].st = Gateway9 & ch[9].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleGateway[i].Server,roleGateway[i].locNa4,roleGateway[i].Server,msg,msgNo);
   ch[9].empty := false;
   ch[9].msg := msg;
   ch[9].sender := roleGateway[i].Gateway;
   ch[9].receiver := Intruder;
   roleGateway[i].st := Gateway1;
   put "send9. ";
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
roleServer[i].st = Server1 & ch[3].empty = false 
==>
var flag_pat7:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[3].msg;
   isPat7(msg, flag_pat7);
   if(flag_pat7) then
     destruct7(msg,roleServer[i].locHost,roleServer[i].locNa2,roleServer[i].locHost);
     if(matchAgent(roleServer[i].locHost, roleServer[i].Host) & matchNonce(roleServer[i].locNa2, roleServer[i].Na2) & matchAgent(roleServer[i].locHost, roleServer[i].Host))then
       ch[3].empty:=true;
       clear ch[3].msg;
       roleServer[i].st := Server2;
     endif;
   endif;
   put "recv1. ";
   put ch[3].sender;
   put "   ";
   put ch[3].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleServer2 "
roleServer[i].st = Server2 & ch[4].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleServer[i].Server,roleServer[i].Na3,roleServer[i].Server,msg,msgNo);
   ch[4].empty := false;
   ch[4].msg := msg;
   ch[4].sender := roleServer[i].Server;
   ch[4].receiver := Intruder;
   roleServer[i].st := Server3;
   put "send2. ";
   put ch[4].sender;
   put "   ";
   put ch[4].receiver;
   put "   msg: ";
   printMsg(ch[4].msg);
   put "\n";
end;
rule " roleServer3 "
roleServer[i].st = Server3 & ch[7].empty = false 
==>
var flag_pat7:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[7].msg;
   isPat7(msg, flag_pat7);
   if(flag_pat7) then
     destruct7(msg,roleServer[i].locHost,roleServer[i].locNa3,roleServer[i].locHost);
     if(matchAgent(roleServer[i].locHost, roleServer[i].Host) & matchNonce(roleServer[i].locNa3, roleServer[i].Na3) & matchAgent(roleServer[i].locHost, roleServer[i].Host))then
       ch[7].empty:=true;
       clear ch[7].msg;
       roleServer[i].st := Server4;
     endif;
   endif;
   put "recv3. ";
   put ch[7].sender;
   put "   ";
   put ch[7].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleServer4 "
roleServer[i].st = Server4 & ch[8].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleServer[i].Server,roleServer[i].Na4,roleServer[i].Server,msg,msgNo);
   ch[8].empty := false;
   ch[8].msg := msg;
   ch[8].sender := roleServer[i].Server;
   ch[8].receiver := Intruder;
   roleServer[i].st := Server1;
   put "send4. ";
   put ch[8].sender;
   put "   ";
   put ch[8].receiver;
   put "   msg: ";
   printMsg(ch[8].msg);
   put "\n";
   roleServer[i].commit := true;
end;
endruleset;


---rule of intruder to get msg from ch[1] 
rule "intruderGetMsgFromCh[1]" 
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
      ch[1].empty := true;
      clear ch[1].msg;
    endif;
  end;

---rule of intruder to get msg from ch[2] 
rule "intruderGetMsgFromCh[2]" 
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
      ch[2].empty := true;
      clear ch[2].msg;
    endif;
  end;

---rule of intruder to get msg from ch[3] 
rule "intruderGetMsgFromCh[3]" 
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
      ch[3].empty := true;
      clear ch[3].msg;
    endif;
  end;

---rule of intruder to get msg from ch[4] 
rule "intruderGetMsgFromCh[4]" 
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
      ch[4].empty := true;
      clear ch[4].msg;
    endif;
  end;

---rule of intruder to get msg from ch[5] 
rule "intruderGetMsgFromCh[5]" 
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
      ch[5].empty := true;
      clear ch[5].msg;
    endif;
  end;

---rule of intruder to get msg from ch[6] 
rule "intruderGetMsgFromCh[6]" 
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
      ch[6].empty := true;
      clear ch[6].msg;
    endif;
  end;

---rule of intruder to get msg from ch[7] 
rule "intruderGetMsgFromCh[7]" 
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
      ch[7].empty := true;
      clear ch[7].msg;
    endif;
  end;

---rule of intruder to get msg from ch[8] 
rule "intruderGetMsgFromCh[8]" 
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
      ch[8].empty := true;
      clear ch[8].msg;
    endif;
  end;

---rule of intruder to get msg from ch[9] 
rule "intruderGetMsgFromCh[9]" 
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
      ch[9].empty := true;
      clear ch[9].msg;
    endif;
  end;

---rule of intruder to emit msg into ch[1].
ruleset i: msgLen do
  ruleset j: roleHostNums do
    rule "intruderEmitMsgIntoCh[1]"
      ch[1].empty=true & i <= pat3Set.length & pat3Set.content[i] != 0 & Spy_known[pat3Set.content[i]]
      ==>
      begin
        if (!emit[pat3Set.content[i]]) then  --- & msgs[msgs[pat3Set.content[i]].aencKey].k.ag=roleHost[j].Host
          clear ch[1];
          ch[1].msg:=msgs[pat3Set.content[i]];
          ch[1].sender:=Intruder;
          ch[1].receiver:=roleHost[j].Host;
          ch[1].empty:=false;
          emit[pat3Set.content[i]] := true;
          put "intruderEmitMsgIntoCh[1] \n";
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

---rule of intruder to emit msg into ch[2].
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsgIntoCh[2]"
      ch[2].empty=true & i <= pat7Set.length & pat7Set.content[i] != 0 & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]]) then  --- & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=roleGateway[j].Gateway
          clear ch[2];
          ch[2].msg:=msgs[pat7Set.content[i]];
          ch[2].sender:=Intruder;
          ch[2].receiver:=roleGateway[j].Gateway;
          ch[2].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "intruderEmitMsgIntoCh[2] \n";
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

---rule of intruder to emit msg into ch[3].
ruleset i: msgLen do
  ruleset j: roleServerNums do
    rule "intruderEmitMsgIntoCh[3]"
      ch[3].empty=true & i <= pat7Set.length & pat7Set.content[i] != 0 & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]]) then  --- & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=roleServer[j].Server
          clear ch[3];
          ch[3].msg:=msgs[pat7Set.content[i]];
          ch[3].sender:=Intruder;
          ch[3].receiver:=roleServer[j].Server;
          ch[3].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "intruderEmitMsgIntoCh[3] \n";
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

---rule of intruder to emit msg into ch[4].
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsgIntoCh[4]"
      ch[4].empty=true & i <= pat7Set.length & pat7Set.content[i] != 0 & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]]) then  --- & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=roleGateway[j].Gateway
          clear ch[4];
          ch[4].msg:=msgs[pat7Set.content[i]];
          ch[4].sender:=Intruder;
          ch[4].receiver:=roleGateway[j].Gateway;
          ch[4].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "intruderEmitMsgIntoCh[4] \n";
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

---rule of intruder to emit msg into ch[5].
ruleset i: msgLen do
  ruleset j: roleHostNums do
    rule "intruderEmitMsgIntoCh[5]"
      ch[5].empty=true & i <= pat7Set.length & pat7Set.content[i] != 0 & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]]) then  --- & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=roleHost[j].Host
          clear ch[5];
          ch[5].msg:=msgs[pat7Set.content[i]];
          ch[5].sender:=Intruder;
          ch[5].receiver:=roleHost[j].Host;
          ch[5].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "intruderEmitMsgIntoCh[5] \n";
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

---rule of intruder to emit msg into ch[6].
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsgIntoCh[6]"
      ch[6].empty=true & i <= pat7Set.length & pat7Set.content[i] != 0 & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]]) then  --- & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=roleGateway[j].Gateway
          clear ch[6];
          ch[6].msg:=msgs[pat7Set.content[i]];
          ch[6].sender:=Intruder;
          ch[6].receiver:=roleGateway[j].Gateway;
          ch[6].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "intruderEmitMsgIntoCh[6] \n";
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

---rule of intruder to emit msg into ch[7].
ruleset i: msgLen do
  ruleset j: roleServerNums do
    rule "intruderEmitMsgIntoCh[7]"
      ch[7].empty=true & i <= pat7Set.length & pat7Set.content[i] != 0 & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]]) then  --- & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=roleServer[j].Server
          clear ch[7];
          ch[7].msg:=msgs[pat7Set.content[i]];
          ch[7].sender:=Intruder;
          ch[7].receiver:=roleServer[j].Server;
          ch[7].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "intruderEmitMsgIntoCh[7] \n";
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

---rule of intruder to emit msg into ch[8].
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsgIntoCh[8]"
      ch[8].empty=true & i <= pat7Set.length & pat7Set.content[i] != 0 & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]]) then  --- & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=roleGateway[j].Gateway
          clear ch[8];
          ch[8].msg:=msgs[pat7Set.content[i]];
          ch[8].sender:=Intruder;
          ch[8].receiver:=roleGateway[j].Gateway;
          ch[8].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "intruderEmitMsgIntoCh[8] \n";
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

---rule of intruder to emit msg into ch[9].
ruleset i: msgLen do
  ruleset j: roleHostNums do
    rule "intruderEmitMsgIntoCh[9]"
      ch[9].empty=true & i <= pat7Set.length & pat7Set.content[i] != 0 & Spy_known[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]]) then  --- & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=roleHost[j].Host
          clear ch[9];
          ch[9].msg:=msgs[pat7Set.content[i]];
          ch[9].sender:=Intruder;
          ch[9].receiver:=roleHost[j].Host;
          ch[9].empty:=false;
          emit[pat7Set.content[i]] := true;
          put "intruderEmitMsgIntoCh[9] \n";
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

ruleset i:msgLen do 
  rule "deconcat 3"	---pat3
    i<=pat3Set.length & pat3Set.content[i] != 0 & Spy_known[pat3Set.content[i]] &
    !(Spy_known[msgs[pat3Set.content[i]].concatPart[1]] & Spy_known[msgs[pat3Set.content[i]].concatPart[2]])
    ==>
    var msgPat1,msgPat2:indexType;
        flag_pat1,flag_pat2:boolean;
    begin
      if (!Spy_known[msgs[pat3Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat3Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat3Set.content[i]].concatPart[1];
        isPat1(msgs[msgPat1],flag_pat1);
        if (flag_pat1) then
          if(!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat3Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat3Set.content[i]].concatPart[2]]:=true;
        msgPat2 := msgs[pat3Set.content[i]].concatPart[2];
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

ruleset i0: msgLen do
  ruleset i1: msgLen do 
    rule "enconcat 3"	---pat3
      i0<=pat1Set.length & Spy_known[pat1Set.content[i0]] &
      i1<=pat2Set.length & Spy_known[pat2Set.content[i1]] &
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

ruleset i:msgLen do 
  rule "deconcat 4"	---pat4
    i<=pat4Set.length & pat4Set.content[i] != 0 & Spy_known[pat4Set.content[i]] &
    !(Spy_known[msgs[pat4Set.content[i]].concatPart[1]] & Spy_known[msgs[pat4Set.content[i]].concatPart[2]])
    ==>
    var msgPat2,msgPat1:indexType;
        flag_pat2,flag_pat1:boolean;
    begin
      if (!Spy_known[msgs[pat4Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat4Set.content[i]].concatPart[1]]:=true;
        msgPat2 := msgs[pat4Set.content[i]].concatPart[1];
        isPat2(msgs[msgPat2],flag_pat2);
        if (flag_pat2) then
          if(!exist(pat2Set,msgPat2)) then
             pat2Set.length:=pat2Set.length+1;
             pat2Set.content[pat2Set.length] := msgPat2;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat4Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat4Set.content[i]].concatPart[2]]:=true;
        msgPat1 := msgs[pat4Set.content[i]].concatPart[2];
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

ruleset i0: msgLen do
  ruleset i1: msgLen do 
    rule "enconcat 4"	---pat4
      i0<=pat2Set.length & Spy_known[pat2Set.content[i0]] &
      i1<=pat1Set.length & Spy_known[pat1Set.content[i1]] &
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
ruleset i:msgLen do 
  rule "decrypt 6"	---pat6
    i<=pat6Set.length & pat6Set.content[i] != 0 & Spy_known[pat6Set.content[i]] &
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

ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "encrypt 6"	---pat6
      i<=pat4Set.length & pat4Set.content[i] != 0 & Spy_known[pat4Set.content[i]] &
      j<=pat5Set.length & pat5Set.content[j] != 0 & Spy_known[pat5Set.content[j]] &
      !Spy_known[construct6By45(pat4Set.content[i],pat5Set.content[j])]
      ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat5Set.content[j]].k.encType=PK) then
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

ruleset i:msgLen do 
  rule "deconcat 7"	---pat7
    i<=pat7Set.length & pat7Set.content[i] != 0 & Spy_known[pat7Set.content[i]] &
    !(Spy_known[msgs[pat7Set.content[i]].concatPart[1]] & Spy_known[msgs[pat7Set.content[i]].concatPart[2]])
    ==>
    var msgPat2,msgPat1:indexType;
        flag_pat2,flag_pat1:boolean;
    begin
      if (!Spy_known[msgs[pat7Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat7Set.content[i]].concatPart[1]]:=true;
        msgPat2 := msgs[pat7Set.content[i]].concatPart[1];
        isPat2(msgs[msgPat2],flag_pat2);
        if (flag_pat2) then
          if(!exist(pat2Set,msgPat2)) then
             pat2Set.length:=pat2Set.length+1;
             pat2Set.content[pat2Set.length] := msgPat2;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat7Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat7Set.content[i]].concatPart[2]]:=true;
        msgPat1 := msgs[pat7Set.content[i]].concatPart[2];
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

ruleset i0: msgLen do
  ruleset i1: msgLen do
  ruleset i2: msgLen do 
    rule "enconcat 7"	---pat7
      i0<=pat2Set.length & Spy_known[pat2Set.content[i0]] &
      i1<=pat1Set.length & Spy_known[pat1Set.content[i1]] &
      i2<=pat6Set.length & Spy_known[pat6Set.content[i2]] &
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
  roleHost[1].Gateway := GatewayIP;
  roleHost[1].Na2 := Na2;
  roleHost[1].st := Host1;
  roleHost[1].commit := false;
  roleHost[1].Na1 := anyNonce;
  roleHost[1].Na3 := anyNonce;
  roleHost[1].Na4 := anyNonce;
  roleHost[1].Server := anyAgent;
  roleGateway[1].Host := HostID;
  roleGateway[1].Server := ServerIP;
  roleGateway[1].Gateway := GatewayIP;
  roleGateway[1].Na1 := Na1;
  roleGateway[1].st := Gateway1;
  roleGateway[1].commit := false;
  roleGateway[1].Na2 := anyNonce;
  roleGateway[1].Na3 := anyNonce;
  roleGateway[1].Na4 := anyNonce;
  roleServer[1].Host := HostID;
  roleServer[1].Gateway := GatewayIP;
  roleServer[1].Server := ServerIP;
  roleServer[1].Na3 := Na3;
  roleServer[1].Na4 := Na4;
  roleServer[1].st := Server1;
  roleServer[1].commit := false;
  roleServer[1].Na2 := anyNonce;
  roleServer[1].Na1 := anyNonce;
  ---intruder.B := Bob;
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
  for i:indexType do
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
  for i : roleHostNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleHost[i].Host;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat5Set.length := pat5Set.length + 1;
    pat5Set.content[pat5Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleGatewayNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleGateway[i].Gateway;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat5Set.length := pat5Set.length + 1;
    pat5Set.content[pat5Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleServerNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleServer[i].Server;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat5Set.length := pat5Set.length + 1;
    pat5Set.content[pat5Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;

end;

invariant "auth1"
  forall i: roleGatewayNums do
    roleGateway[i].commit = true 
    ->
    (exists j: roleHostNums do
      ---roleHost[j].commit = true &
      roleHost[i].Na1 = roleGateway[j].Na1
    endexists)
  endforall;

invariant "auth2"
  forall i: roleGatewayNums do
    roleGateway[i].commit = true 
    ->
    (exists j: roleHostNums do
      ---roleHost[j].commit = true &
      roleHost[i].Na2 = roleGateway[j].Na2
    endexists)
  endforall;

invariant "auth3"
  forall i: roleServerNums do
    roleServer[i].commit = true 
    ->
    (exists j: roleHostNums do
      ---roleHost[j].commit = true &
      roleHost[i].Na3 = roleServer[j].Na3
    endexists)
  endforall;
