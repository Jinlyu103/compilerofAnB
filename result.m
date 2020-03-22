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

  AgentType : enum{ServerIP, GatewayIP, HostID}; 
  NonceType : enum{Na3, Na2, Na1};  

  EncryptType : enum{PK,SK,Symk};
  KeyType: record 
    encType: EncryptType; 
    ag: AgentType; 
  end;

  HostStatus: enum{Host1,Host2,Host3,Host4};
  GatewayStatus: enum{Gateway1,Gateway2,Gateway3,Gateway4,Gateway5,Gateway6,Gateway7,Gateway8};
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
  end;
  Channel: record
    msg : Message;
    sender : AgentType;
    receiver : AgentType;
    empty : boolean;
  end;
  RoleHost : record
   Host : AgentType;
   Gateway : AgentType;
   Na1 : NonceType;
   loc_Na1 : NonceType;
   loc_Na2 : NonceType;
   loc_Na3 : NonceType;
   loc_Host : AgentType;
   loc_Gateway : AgentType;
   loc_Server : AgentType;
   st: HostStatus;
  end;
  RoleGateway : record
   Host : AgentType;
   Server : AgentType;
   Gateway : AgentType;
   loc_Na1 : NonceType;
   loc_Na2 : NonceType;
   loc_Na3 : NonceType;
   loc_Host : AgentType;
   loc_Gateway : AgentType;
   loc_Server : AgentType;
   st: GatewayStatus;
  end;
  RoleServer : record
   Host : AgentType;
   Gateway : AgentType;
   Server : AgentType;
   Na2 : NonceType;
   Na3 : NonceType;
   loc_Na1 : NonceType;
   loc_Na2 : NonceType;
   loc_Na3 : NonceType;
   loc_Host : AgentType;
   loc_Gateway : AgentType;
   loc_Server : AgentType;
   st: ServerStatus;
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
  roleServer : Array[roleServerNums] of RoleServer

  intruder    : RoleIntruder;
  msgs : Array[indexType] of Message;
  msg_end: indexType;

  pat1Set: msgSet;  ---patnSet should be derived from pats we got from actions
  pat2Set: msgSet;
  pat3Set: msgSet;
  pat4Set: msgSet;
  pat5Set: msgSet;
  pat6Set: msgSet;
  pat7Set: msgSet;
  pat8Set: msgSet;

  Spy_known: Array[indexType] of boolean;
  systemEvent   : array[eventNums] of Event;
  eve_end       : eventNums;
  emit: Array[indexType] of boolean;

---pat1: Na3 
procedure lookAddPat1(Na3:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: msgLen do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=Na3) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=Na3; 
      endif;
      num:=index;
      msg:=msgs[index];
  end;
---pat1: Na3 
procedure isPat1(msg:Message; Var flag:boolean);

  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce) then
      flag1 := true;
    endif;
    flag := flag1;
  end;
---pat2: Server 
procedure lookAddPat2(Server:AgentType; Var msg:Message; Var num : indexType);
 Var index : indexType;
 begin
   index:=0;
   for i: msgLen do
    if (msgs[i].msgType = agent) then
      if (msgs[i].ag = Server) then
        index:=i;
      endif;
    endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := agent;

     msgs[index].ag:=Server; 
   endif;
   num:=index;
   msg:=msgs[index];
  end;
---pat2: Server 
procedure isPat2(msg:Message; Var flag:boolean);

  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = agent) then
      flag1 := true;
    endif;
    flag := flag1;
  end;
---pat3: Server.Na3 
procedure lookAddPat3(Server:AgentType; Na3:NonceType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat0(null,msg1,i1);
   lookAddPat1(Na3,msg2,i2);
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
---pat3: Server.Na3 
procedure isPat3(msg:Message; Var flag:boolean);

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
---pat5: aenc{< Server.Na3 >}sk(Server) 
procedure lookAddPat5(Server:AgentType; Na3:NonceType; ; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat3(Server, Na3,msg1,i1);
   lookAddPat4(null,msg2,i2);
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
---pat5: aenc{< Server.Na3 >}sk(Server) 
procedure isPat5(msg:Message; Var flag:boolean);

  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat3(msgs[msg.aencMsg],flagPart1);
      isPat4(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;
---pat6: Server.Na3.aenc{< Server.Na3 >}sk(Server) 
procedure lookAddPat6(Server:AgentType; Na3:NonceType; Server:AgentType; Na3:NonceType; ; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat0(null,msg1,i1);
   lookAddPat1(Na3,msg2,i2);
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
---pat6: Server.Na3.aenc{< Server.Na3 >}sk(Server) 
procedure isPat6(msg:Message; Var flag:boolean);

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
procedure cons1(Host:AgentType; Na1:NonceType; Host:AgentType; Na1:NonceType; ; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(Host, Na1, Host, Na1, ,msg,num);
  end;
procedure cons2(Host:AgentType; Na1:NonceType; Host:AgentType; Na1:NonceType; ; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(Host, Na1, Host, Na1, ,msg,num);
  end;
procedure cons3(Server:AgentType; Na2:NonceType; Server:AgentType; Na2:NonceType; ; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(Server, Na2, Server, Na2, ,msg,num);
  end;
procedure cons4(Server:AgentType; Na2:NonceType; Host:AgentType; Na2:NonceType; ; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(Server, Na2, Host, Na2, ,msg,num);
  end;
procedure cons5(Host:AgentType; Na2:NonceType; Host:AgentType; Na2:NonceType; ; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(Host, Na2, Host, Na2, ,msg,num);
  end;
procedure cons6(Host:AgentType; Na2:NonceType; Host:AgentType; Na2:NonceType; ; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(Host, Na2, Host, Na2, ,msg,num);
  end;
procedure cons7(Server:AgentType; Na3:NonceType; Server:AgentType; Na3:NonceType; ; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(Server, Na3, Server, Na3, ,msg,num);
  end;
procedure cons8(Server:AgentType; Na3:NonceType; Server:AgentType; Na3:NonceType; ; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(Server, Na3, Server, Na3, ,msg,num);
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
function construct3By21(msgNo2,msgNo1:indexType):indexType;
  var index : indexType;
      locServer:AgentType;
      locNa3:NonceType;
      msg : Message;
  begin
     index := 0;
     locServer:= msgs[msgNo2].ag;
     locNa3:= msgs[msgNo1].noncePart;
     lookAddPat3(locServer,locNa3,msg,index);
   return index;
  end;
function construct5By34(msgNo3,msgNo4:indexType):indexType;
  var index : indexType;
      locServer:AgentType;
      locNa3:NonceType;
      k_ag : AgentType;
      msg : Message;
  begin
   index := 0;
   locServer:= msgs[msgs[msgNo3].concatPart1].ag;
   locNa3:= msgs[msgs[msgNo3].concatPart2].noncePart;
   k_ag := msgs[msgNo4].k.ag;
   lookAddPat5(locServer,locNa3,k_ag,msg,index);
   return index;
  end;
function construct6By21(msgNo2,msgNo1:indexType):indexType;
  var index : indexType;
      locServer:AgentType;
      locNa3:NonceType;
      locServer:AgentType;
      locNa3:NonceType;
      ;
      msg : Message;
  begin
     index := 0;
     locServer:= msgs[msgNo2].ag;
     locNa3:= msgs[msgNo1].noncePart;
     locServer:= msgs[msgNo2].ag;
     locNa3:= msgs[msgNo1].noncePart;
     ;
     lookAddPat6(locServer,locNa3,locServer,locNa3,,msg,index);
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
roleHost[i].st = Host1 & ch[1].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons1(roleHost[i].Host,roleHost[i].Na1,roleHost[i].Host,roleHost[i].Na1,null,msg,msgNo);
   ch[1].empty := false;
   ch[1].msg := msg;
   ch[1].sender := roleHost[i].Host;
   ch[1].receiver := roleHost[i].loc_;
   roleHost[i].st := Host2;
   put "1. ";
   put ch[1].sender;
   put "   ";
   put ch[1].receiver;
   put "   msg: ";
   printMsg(ch[1].msg);
   put "\n";
   eve_end := eve_end +1 ;
   systemEvent[eve_end].eveType := send; ;
   systemEvent[eve_end].sender := ch[1].sender ;
   systemEvent[eve_end].receiver := ch[1].receiver ;
   systemEvent[eve_end].msg := ch[1].msg ;
end;
rule " roleHost2 "
roleHost[i].st = Host2 & ch[2].empty = false & ch[2].receiver = roleHost[i].Host
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[2].msg;
   destruct2(msg,roleHost[i].loc_Server,roleHost[i].loc_Na2,roleHost[i].loc_Host,roleHost[i].loc_Na2,null);
   eve_end:= eve_end + 1 ;
   systemEvent[eve_end].eveType := receive;
   systemEvent[eve_end].sender := roleHost[i].loc_A;
   systemEvent[eve_end].receiver := ch[2].receiver;
   systemEvent[eve_end].msg := ch[2].msg;
   if(roleHost[i].loc_Host=roleHost[i].Host&null)then
     ch[2].empty:=true;
     roleHost[i].st := Host3;
   endif;
end;
rule " roleHost3 "
roleHost[i].st = Host3 & ch[3].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons3(roleHost[i].Host,roleHost[i].loc_Na2,roleHost[i].Host,roleHost[i].loc_Na2,null,msg,msgNo);
   ch[3].empty := false;
   ch[3].msg := msg;
   ch[3].sender := roleHost[i].Host;
   ch[3].receiver := roleHost[i].loc_;
   roleHost[i].st := Host4;
   put "3. ";
   put ch[3].sender;
   put "   ";
   put ch[3].receiver;
   put "   msg: ";
   printMsg(ch[3].msg);
   put "\n";
   eve_end := eve_end +1 ;
   systemEvent[eve_end].eveType := send; ;
   systemEvent[eve_end].sender := ch[3].sender ;
   systemEvent[eve_end].receiver := ch[3].receiver ;
   systemEvent[eve_end].msg := ch[3].msg ;
end;
rule " roleHost4 "
roleHost[i].st = Host4 & ch[4].empty = false & ch[4].receiver = roleHost[i].Host
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[4].msg;
   destruct4(msg,roleHost[i].loc_Server,roleHost[i].loc_Na3,roleHost[i].loc_Server,roleHost[i].loc_Na3,null);
   eve_end:= eve_end + 1 ;
   systemEvent[eve_end].eveType := receive;
   systemEvent[eve_end].sender := roleHost[i].loc_A;
   systemEvent[eve_end].receiver := ch[4].receiver;
   systemEvent[eve_end].msg := ch[4].msg;
   if(null)then
     ch[4].empty:=true;
     roleHost[i].st := Host1;
   endif;
end;
endruleset;

ruleset i:roleGatewayNums do
rule " roleGateway1 "
roleGateway[i].st = Gateway1 & ch[1].empty = false & ch[1].receiver = roleGateway[i].Gateway
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[1].msg;
   destruct1(msg,roleGateway[i].loc_Host,roleGateway[i].loc_Na1,roleGateway[i].loc_Host,roleGateway[i].loc_Na1,null);
   eve_end:= eve_end + 1 ;
   systemEvent[eve_end].eveType := receive;
   systemEvent[eve_end].sender := roleGateway[i].loc_A;
   systemEvent[eve_end].receiver := ch[1].receiver;
   systemEvent[eve_end].msg := ch[1].msg;
   if(roleGateway[i].loc_Host=roleGateway[i].Host&roleGateway[i].loc_Host=roleGateway[i].Host&null)then
     ch[1].empty:=true;
     roleGateway[i].st := Gateway2;
   endif;
end;
rule " roleGateway2 "
roleGateway[i].st = Gateway2 & ch[2].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons2(roleGateway[i].Host,roleGateway[i].loc_Na1,roleGateway[i].Host,roleGateway[i].loc_Na1,null,msg,msgNo);
   ch[2].empty := false;
   ch[2].msg := msg;
   ch[2].sender := roleGateway[i].Gateway;
   ch[2].receiver := roleGateway[i].loc_;
   roleGateway[i].st := Gateway3;
   put "2. ";
   put ch[2].sender;
   put "   ";
   put ch[2].receiver;
   put "   msg: ";
   printMsg(ch[2].msg);
   put "\n";
   eve_end := eve_end +1 ;
   systemEvent[eve_end].eveType := send; ;
   systemEvent[eve_end].sender := ch[2].sender ;
   systemEvent[eve_end].receiver := ch[2].receiver ;
   systemEvent[eve_end].msg := ch[2].msg ;
end;
rule " roleGateway3 "
roleGateway[i].st = Gateway3 & ch[3].empty = false & ch[3].receiver = roleGateway[i].Gateway
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[3].msg;
   destruct3(msg,roleGateway[i].loc_Server,roleGateway[i].loc_Na2,roleGateway[i].loc_Server,roleGateway[i].loc_Na2,null);
   eve_end:= eve_end + 1 ;
   systemEvent[eve_end].eveType := receive;
   systemEvent[eve_end].sender := roleGateway[i].loc_A;
   systemEvent[eve_end].receiver := ch[3].receiver;
   systemEvent[eve_end].msg := ch[3].msg;
   if(roleGateway[i].loc_Server=roleGateway[i].Server&roleGateway[i].loc_Server=roleGateway[i].Server&null)then
     ch[3].empty:=true;
     roleGateway[i].st := Gateway4;
   endif;
end;
rule " roleGateway4 "
roleGateway[i].st = Gateway4 & ch[4].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons4(roleGateway[i].Server,roleGateway[i].loc_Na2,roleGateway[i].Host,roleGateway[i].loc_Na2,null,msg,msgNo);
   ch[4].empty := false;
   ch[4].msg := msg;
   ch[4].sender := roleGateway[i].Gateway;
   ch[4].receiver := roleGateway[i].loc_;
   roleGateway[i].st := Gateway5;
   put "4. ";
   put ch[4].sender;
   put "   ";
   put ch[4].receiver;
   put "   msg: ";
   printMsg(ch[4].msg);
   put "\n";
   eve_end := eve_end +1 ;
   systemEvent[eve_end].eveType := send; ;
   systemEvent[eve_end].sender := ch[4].sender ;
   systemEvent[eve_end].receiver := ch[4].receiver ;
   systemEvent[eve_end].msg := ch[4].msg ;
end;
rule " roleGateway5 "
roleGateway[i].st = Gateway5 & ch[5].empty = false & ch[5].receiver = roleGateway[i].Gateway
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[5].msg;
   destruct5(msg,roleGateway[i].loc_Host,roleGateway[i].loc_Na2,roleGateway[i].loc_Host,roleGateway[i].loc_Na2,null);
   eve_end:= eve_end + 1 ;
   systemEvent[eve_end].eveType := receive;
   systemEvent[eve_end].sender := roleGateway[i].loc_A;
   systemEvent[eve_end].receiver := ch[5].receiver;
   systemEvent[eve_end].msg := ch[5].msg;
   if(roleGateway[i].loc_Host=roleGateway[i].Host&roleGateway[i].loc_Host=roleGateway[i].Host&null)then
     ch[5].empty:=true;
     roleGateway[i].st := Gateway6;
   endif;
end;
rule " roleGateway6 "
roleGateway[i].st = Gateway6 & ch[6].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons6(roleGateway[i].Host,roleGateway[i].loc_Na2,roleGateway[i].Host,roleGateway[i].loc_Na2,null,msg,msgNo);
   ch[6].empty := false;
   ch[6].msg := msg;
   ch[6].sender := roleGateway[i].Gateway;
   ch[6].receiver := roleGateway[i].loc_;
   roleGateway[i].st := Gateway7;
   put "6. ";
   put ch[6].sender;
   put "   ";
   put ch[6].receiver;
   put "   msg: ";
   printMsg(ch[6].msg);
   put "\n";
   eve_end := eve_end +1 ;
   systemEvent[eve_end].eveType := send; ;
   systemEvent[eve_end].sender := ch[6].sender ;
   systemEvent[eve_end].receiver := ch[6].receiver ;
   systemEvent[eve_end].msg := ch[6].msg ;
end;
rule " roleGateway7 "
roleGateway[i].st = Gateway7 & ch[7].empty = false & ch[7].receiver = roleGateway[i].Gateway
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[7].msg;
   destruct7(msg,roleGateway[i].loc_Server,roleGateway[i].loc_Na3,roleGateway[i].loc_Server,roleGateway[i].loc_Na3,null);
   eve_end:= eve_end + 1 ;
   systemEvent[eve_end].eveType := receive;
   systemEvent[eve_end].sender := roleGateway[i].loc_A;
   systemEvent[eve_end].receiver := ch[7].receiver;
   systemEvent[eve_end].msg := ch[7].msg;
   if(roleGateway[i].loc_Server=roleGateway[i].Server&roleGateway[i].loc_Server=roleGateway[i].Server&null)then
     ch[7].empty:=true;
     roleGateway[i].st := Gateway8;
   endif;
end;
rule " roleGateway8 "
roleGateway[i].st = Gateway8 & ch[8].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons8(roleGateway[i].Server,roleGateway[i].loc_Na3,roleGateway[i].Server,roleGateway[i].loc_Na3,null,msg,msgNo);
   ch[8].empty := false;
   ch[8].msg := msg;
   ch[8].sender := roleGateway[i].Gateway;
   ch[8].receiver := roleGateway[i].loc_;
   roleGateway[i].st := Gateway1;
   put "8. ";
   put ch[8].sender;
   put "   ";
   put ch[8].receiver;
   put "   msg: ";
   printMsg(ch[8].msg);
   put "\n";
   eve_end := eve_end +1 ;
   systemEvent[eve_end].eveType := send; ;
   systemEvent[eve_end].sender := ch[8].sender ;
   systemEvent[eve_end].receiver := ch[8].receiver ;
   systemEvent[eve_end].msg := ch[8].msg ;
end;
endruleset;

ruleset i:roleServerNums do
rule " roleServer1 "
roleServer[i].st = Server1 & ch[1].empty = false & ch[1].receiver = roleServer[i].Server
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[1].msg;
   destruct1(msg,roleServer[i].loc_Host,roleServer[i].loc_Na1,roleServer[i].loc_Host,roleServer[i].loc_Na1,null);
   eve_end:= eve_end + 1 ;
   systemEvent[eve_end].eveType := receive;
   systemEvent[eve_end].sender := roleServer[i].loc_A;
   systemEvent[eve_end].receiver := ch[1].receiver;
   systemEvent[eve_end].msg := ch[1].msg;
   if(roleServer[i].loc_Host=roleServer[i].Host&roleServer[i].loc_Host=roleServer[i].Host&null)then
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
   cons2(roleServer[i].Server,roleServer[i].Na2,roleServer[i].Server,roleServer[i].Na2,null,msg,msgNo);
   ch[2].empty := false;
   ch[2].msg := msg;
   ch[2].sender := roleServer[i].Server;
   ch[2].receiver := roleServer[i].loc_;
   roleServer[i].st := Server3;
   put "2. ";
   put ch[2].sender;
   put "   ";
   put ch[2].receiver;
   put "   msg: ";
   printMsg(ch[2].msg);
   put "\n";
   eve_end := eve_end +1 ;
   systemEvent[eve_end].eveType := send; ;
   systemEvent[eve_end].sender := ch[2].sender ;
   systemEvent[eve_end].receiver := ch[2].receiver ;
   systemEvent[eve_end].msg := ch[2].msg ;
end;
rule " roleServer3 "
roleServer[i].st = Server3 & ch[3].empty = false & ch[3].receiver = roleServer[i].Server
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[3].msg;
   destruct3(msg,roleServer[i].loc_Host,roleServer[i].loc_Na2,roleServer[i].loc_Host,roleServer[i].loc_Na2,null);
   eve_end:= eve_end + 1 ;
   systemEvent[eve_end].eveType := receive;
   systemEvent[eve_end].sender := roleServer[i].loc_A;
   systemEvent[eve_end].receiver := ch[3].receiver;
   systemEvent[eve_end].msg := ch[3].msg;
   if(roleServer[i].loc_Host=roleServer[i].Host&roleServer[i].loc_Na2=roleServer[i].Na2&roleServer[i].loc_Host=roleServer[i].Host&roleServer[i].loc_Na2=roleServer[i].Na2&null)then
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
   cons4(roleServer[i].Server,roleServer[i].Na3,roleServer[i].Server,roleServer[i].Na3,null,msg,msgNo);
   ch[4].empty := false;
   ch[4].msg := msg;
   ch[4].sender := roleServer[i].Server;
   ch[4].receiver := roleServer[i].loc_;
   roleServer[i].st := Server1;
   put "4. ";
   put ch[4].sender;
   put "   ";
   put ch[4].receiver;
   put "   msg: ";
   printMsg(ch[4].msg);
   put "\n";
   eve_end := eve_end +1 ;
   systemEvent[eve_end].eveType := send; ;
   systemEvent[eve_end].sender := ch[4].sender ;
   systemEvent[eve_end].receiver := ch[4].receiver ;
   systemEvent[eve_end].msg := ch[4].msg ;
end;
endruleset;


---rule of intruder to get msg1 
rule "intruderGetMsg1" 
  ch[1].empty = false
  ==>
  var flag_pat6:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[1].msg;
    get_msgNo(msg, msgNo);
    isPat6(msg,flag_pat6);
    if (flag_pat6) then
      if(!exist(pat6Set,msgNo)) then
        pat6Set.length:=pat6Set.length+1;
        pat6Set.content[pat6Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[1].empty := true;
  end;

---rule of intruder to emit msg1.
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsg1"
      ch[1].empty=true & i <= pat6Set.length & Spy_known[pat6Set.content[i]]
      ==>
      begin
        if (!emit[pat6Set.content[i]] & msgs[msgs[pat6Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[1];
          ch[1].msg:=msgs[pat6Set.content[i]];
          ch[1].sender:=Intruder;
          ch[1].receiver:=roleB[j].B;
          ch[1].empty:=false;
          emit[pat6Set.content[i]] := true;
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
  var flag_pat6:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[2].msg;
    get_msgNo(msg, msgNo);
    isPat6(msg,flag_pat6);
    if (flag_pat6) then
      if(!exist(pat6Set,msgNo)) then
        pat6Set.length:=pat6Set.length+1;
        pat6Set.content[pat6Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[2].empty := true;
  end;

---rule of intruder to emit msg2.
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsg2"
      ch[2].empty=true & i <= pat6Set.length & Spy_known[pat6Set.content[i]]
      ==>
      begin
        if (!emit[pat6Set.content[i]] & msgs[msgs[pat6Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[2];
          ch[2].msg:=msgs[pat6Set.content[i]];
          ch[2].sender:=Intruder;
          ch[2].receiver:=roleA[j].A;
          ch[2].empty:=false;
          emit[pat6Set.content[i]] := true;
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
  var flag_pat6:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[3].msg;
    get_msgNo(msg, msgNo);
    isPat6(msg,flag_pat6);
    if (flag_pat6) then
      if(!exist(pat6Set,msgNo)) then
        pat6Set.length:=pat6Set.length+1;
        pat6Set.content[pat6Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[3].empty := true;
  end;

---rule of intruder to emit msg3.
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsg3"
      ch[3].empty=true & i <= pat6Set.length & Spy_known[pat6Set.content[i]]
      ==>
      begin
        if (!emit[pat6Set.content[i]] & msgs[msgs[pat6Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[3];
          ch[3].msg:=msgs[pat6Set.content[i]];
          ch[3].sender:=Intruder;
          ch[3].receiver:=roleB[j].B;
          ch[3].empty:=false;
          emit[pat6Set.content[i]] := true;
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
  var flag_pat6:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[4].msg;
    get_msgNo(msg, msgNo);
    isPat6(msg,flag_pat6);
    if (flag_pat6) then
      if(!exist(pat6Set,msgNo)) then
        pat6Set.length:=pat6Set.length+1;
        pat6Set.content[pat6Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[4].empty := true;
  end;

---rule of intruder to emit msg4.
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsg4"
      ch[4].empty=true & i <= pat6Set.length & Spy_known[pat6Set.content[i]]
      ==>
      begin
        if (!emit[pat6Set.content[i]] & msgs[msgs[pat6Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[4];
          ch[4].msg:=msgs[pat6Set.content[i]];
          ch[4].sender:=Intruder;
          ch[4].receiver:=roleA[j].A;
          ch[4].empty:=false;
          emit[pat6Set.content[i]] := true;
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
  var flag_pat6:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[5].msg;
    get_msgNo(msg, msgNo);
    isPat6(msg,flag_pat6);
    if (flag_pat6) then
      if(!exist(pat6Set,msgNo)) then
        pat6Set.length:=pat6Set.length+1;
        pat6Set.content[pat6Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[5].empty := true;
  end;

---rule of intruder to emit msg5.
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsg5"
      ch[5].empty=true & i <= pat6Set.length & Spy_known[pat6Set.content[i]]
      ==>
      begin
        if (!emit[pat6Set.content[i]] & msgs[msgs[pat6Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[5];
          ch[5].msg:=msgs[pat6Set.content[i]];
          ch[5].sender:=Intruder;
          ch[5].receiver:=roleB[j].B;
          ch[5].empty:=false;
          emit[pat6Set.content[i]] := true;
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
  var flag_pat6:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[6].msg;
    get_msgNo(msg, msgNo);
    isPat6(msg,flag_pat6);
    if (flag_pat6) then
      if(!exist(pat6Set,msgNo)) then
        pat6Set.length:=pat6Set.length+1;
        pat6Set.content[pat6Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[6].empty := true;
  end;

---rule of intruder to emit msg6.
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsg6"
      ch[6].empty=true & i <= pat6Set.length & Spy_known[pat6Set.content[i]]
      ==>
      begin
        if (!emit[pat6Set.content[i]] & msgs[msgs[pat6Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[6];
          ch[6].msg:=msgs[pat6Set.content[i]];
          ch[6].sender:=Intruder;
          ch[6].receiver:=roleA[j].A;
          ch[6].empty:=false;
          emit[pat6Set.content[i]] := true;
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
  var flag_pat6:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[7].msg;
    get_msgNo(msg, msgNo);
    isPat6(msg,flag_pat6);
    if (flag_pat6) then
      if(!exist(pat6Set,msgNo)) then
        pat6Set.length:=pat6Set.length+1;
        pat6Set.content[pat6Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[7].empty := true;
  end;

---rule of intruder to emit msg7.
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsg7"
      ch[7].empty=true & i <= pat6Set.length & Spy_known[pat6Set.content[i]]
      ==>
      begin
        if (!emit[pat6Set.content[i]] & msgs[msgs[pat6Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[7];
          ch[7].msg:=msgs[pat6Set.content[i]];
          ch[7].sender:=Intruder;
          ch[7].receiver:=roleB[j].B;
          ch[7].empty:=false;
          emit[pat6Set.content[i]] := true;
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
  var flag_pat6:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[8].msg;
    get_msgNo(msg, msgNo);
    isPat6(msg,flag_pat6);
    if (flag_pat6) then
      if(!exist(pat6Set,msgNo)) then
        pat6Set.length:=pat6Set.length+1;
        pat6Set.content[pat6Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[8].empty := true;
  end;

---rule of intruder to emit msg8.
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsg8"
      ch[8].empty=true & i <= pat6Set.length & Spy_known[pat6Set.content[i]]
      ==>
      begin
        if (!emit[pat6Set.content[i]] & msgs[msgs[pat6Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[8];
          ch[8].msg:=msgs[pat6Set.content[i]];
          ch[8].sender:=Intruder;
          ch[8].receiver:=roleA[j].A;
          ch[8].empty:=false;
          emit[pat6Set.content[i]] := true;
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
--- enconcat and deconcat rules for pat: concat(Server.Na3)

ruleset i:indexType do 
  rule "deconcat 3"	---pat3
    i<=pat3Set.length & Spy_known[pat3Set.content[i]] &
    !(Spy_known[msgs[pat3Set.content[i]].concatPart1] & Spy_known[msgs[pat3Set.content[i]].concatPart2])
    ==>
    var msgPat2,msgPat1:indexType;
        flag_pat2,flag_pat1:boolean;
    begin
      if (!Spy_known[msgs[pat3Set.content[i]].concatPart1]) then
        Spy_known[msgs[pat3Set.content[i]].concatPart1]:=true;
        msgPat2 := msgs[pat3Set.content[i]].concatPart1;
        isPat2(msgs[msgPat2],flag_pat2);
        if (flag_pat2) then
          if(!exist(pat2Set,msgPat2)) then
             pat2Set.length:=pat2Set.length+1;
             pat2Set.content[pat2Set.length] := msgPat2;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat3Set.content[i]].concatPart2]) then
        Spy_known[msgs[pat3Set.content[i]].concatPart2]:=true;
        msgPat1 := msgs[pat3Set.content[i]].concatPart2;
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

ruleset i:indexType do 
  ruleset j:indexType do 
    rule "enconcat 3"	---pat3
      i<=pat2Set.length & Spy_known[pat2Set.content[i]] &
      j<=pat1Set.length & Spy_known[pat1Set.content[j]] &
      !Spy_known[construct3By21(pat2Set.content[i],pat1Set.content[j])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct3By21(pat2Set.content[i],pat1Set.content[j]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat3Set,concatMsgNo)) then
          pat3Set.length:=pat3Set.length+1;
          pat3Set.content[pat3Set.length]:=concatMsgNo;
        endif;
      end;
  endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc(Server.Na3,sk(Server)), for intruder
ruleset i:indexType do 
  rule "decrypt 5"	---pat5
    i<=pat5Set.length & Spy_known[pat5Set.content[i]] &
    !Spy_known[msgs[pat5Set.content[i]].aencMsg]
    ==>
    var key_inv:Message;
	msgPat3:indexType;
	flag_pat3:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat5Set.content[i]].aencKey]);
      if (key_inv.k.ag = Intruder) then
        Spy_known[msgs[pat5Set.content[i]].aencMsg]:=true;
        msgPat3:=msgs[pat5Set.content[i]].aencMsg;
        isPat3(msgs[msgPat3],flag_pat3);
        if (flag_pat3) then
          if (!exist(pat3Set,msgPat3)) then
            pat3Set.length:=pat3Set.length+1;
            pat3Set.content[pat3Set.length]:=msgPat3;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:indexType do 
  ruleset j:indexType do 
    rule "encrypt 5"	---pat5
      i<=pat3Set.length & Spy_known[pat3Set.content[i]] &
      j<=pat4Set.length & Spy_known[pat4Set.content[j]] &
      !Spy_known[construct5By34(pat3Set.content[i],pat4Set.content[j])]
      ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat4Set.content[j]].k.ag=intruder.B) then
          encMsgNo := construct5By34(pat3Set.content[i],pat4Set.content[j]);
          if (!exist(pat5Set,encMsgNo)) then
            pat5Set.length := pat5Set.length+1;
            pat5Set.content[pat5Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(Server.Na3.aenc{< Server.Na3 >}sk(Server))

ruleset i:indexType do 
  rule "deconcat 6"	---pat6
    i<=pat6Set.length & Spy_known[pat6Set.content[i]] &
    !(Spy_known[msgs[pat6Set.content[i]].concatPart1] & Spy_known[msgs[pat6Set.content[i]].concatPart2])
    ==>
    var msgPat2,msgPat1:indexType;
        flag_pat2,flag_pat1:boolean;
    begin
      if (!Spy_known[msgs[pat6Set.content[i]].concatPart1]) then
        Spy_known[msgs[pat6Set.content[i]].concatPart1]:=true;
        msgPat2 := msgs[pat6Set.content[i]].concatPart1;
        isPat2(msgs[msgPat2],flag_pat2);
        if (flag_pat2) then
          if(!exist(pat2Set,msgPat2)) then
             pat2Set.length:=pat2Set.length+1;
             pat2Set.content[pat2Set.length] := msgPat2;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat6Set.content[i]].concatPart2]) then
        Spy_known[msgs[pat6Set.content[i]].concatPart2]:=true;
        msgPat1 := msgs[pat6Set.content[i]].concatPart2;
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

ruleset i:indexType do 
  ruleset j:indexType do 
    rule "enconcat 6"	---pat6
      i<=pat2Set.length & Spy_known[pat2Set.content[i]] &
      j<=pat1Set.length & Spy_known[pat1Set.content[j]] &
      !Spy_known[construct6By21(pat2Set.content[i],pat1Set.content[j])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct6By21(pat2Set.content[i],pat1Set.content[j]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat6Set,concatMsgNo)) then
          pat6Set.length:=pat6Set.length+1;
          pat6Set.content[pat6Set.length]:=concatMsgNo;
        endif;
      end;
  endruleset;
endruleset;

startstate
  roleHost[1].Host := HostID;
  roleHost[1].Gateway := GatewayIP;
  roleHost[1].Na1 := Na1;
  roleHost[1].st := Host1;
  roleGateway[1].Host := HostID;
  roleGateway[1].Server := ServerIP;
  roleGateway[1].Gateway := GatewayIP;
  roleGateway[1].st := Gateway1;
  roleServer[1].Host := HostID;
  roleServer[1].Gateway := GatewayIP;
  roleServer[1].Server := ServerIP;
  roleServer[1].Na2 := Na2;
  roleServer[1].Na3 := Na3;
  roleServer[1].st := Server1;
  intruder.B := Bob;
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

  msg_end := msg_end+1;  
  msgs[msg_end].msgType := key;
  msgs[msg_end].k.ag:=Bob;
  msgs[msg_end].k.encType:=PK;

  pat4Set.length := pat4Set.length + 1; 
  pat4Set.content[pat4Set.length] :=msg_end;
  Spy_known[msg_end] := true;
  
  eve_end := 0;  
  for i:eventNums do
     systemEvent[i].eveType := empty;
  endfor;
end;

invariant "sec1"
  forall i:msgLen do
    (msgs[i].msgType=nonce & msgs[i].noncePart = Na1)
    ->
    Spy_known[i] = false
end;

invariant "auth1"   
  forall i:eventNums do
      (systemEvent[i].eveType = receive & 
       systemEvent[i].receiver = Host & 
       systemEvent[i].sender = Gateway &
       msgContains(systemEvent[i].msg,Na1) )
      -> 
      (exists j:eventNums do
      (systemEvent[j].eveType = send &
      systemEvent[j].receiver = systemEvent[i].receiver &
      systemEvent[j].sender = systemEvent[i].sender &
      systemEvent[j].msg.msgType = systemEvent[i].msg.msgType &      
      ---systemEvent[j].msg.ag =systemEvent[i].sender &
      systemEvent[j].msg.ag = systemEvent[i].msg.ag &
      systemEvent[j].msg.k.encType = systemEvent[i].msg.k.encType &
      systemEvent[j].msg.k.ag = systemEvent[i].msg.k.ag &
      systemEvent[j].msg.noncePart = systemEvent[i].msg.noncePart &
      systemEvent[j].msg.aencMsg = systemEvent[i].msg.aencMsg &
      systemEvent[j].msg.aencKey = systemEvent[i].msg.aencKey &
      systemEvent[j].msg.sencMsg = systemEvent[i].msg.sencMsg &
      systemEvent[j].msg.sencKey = systemEvent[i].msg.sencKey &
      systemEvent[j].msg.concatPart1 = systemEvent[i].msg.concatPart1 &
      systemEvent[j].msg.concatPart2 = systemEvent[i].msg.concatPart2
     )endexists)
endforall
invariant "auth2"   
  forall i:eventNums do
      (systemEvent[i].eveType = receive & 
       systemEvent[i].receiver = Host & 
       systemEvent[i].sender = Server &
       msgContains(systemEvent[i].msg,Na2) )
      -> 
      (exists j:eventNums do
      (systemEvent[j].eveType = send &
      systemEvent[j].receiver = systemEvent[i].receiver &
      systemEvent[j].sender = systemEvent[i].sender &
      systemEvent[j].msg.msgType = systemEvent[i].msg.msgType &      
      ---systemEvent[j].msg.ag =systemEvent[i].sender &
      systemEvent[j].msg.ag = systemEvent[i].msg.ag &
      systemEvent[j].msg.k.encType = systemEvent[i].msg.k.encType &
      systemEvent[j].msg.k.ag = systemEvent[i].msg.k.ag &
      systemEvent[j].msg.noncePart = systemEvent[i].msg.noncePart &
      systemEvent[j].msg.aencMsg = systemEvent[i].msg.aencMsg &
      systemEvent[j].msg.aencKey = systemEvent[i].msg.aencKey &
      systemEvent[j].msg.sencMsg = systemEvent[i].msg.sencMsg &
      systemEvent[j].msg.sencKey = systemEvent[i].msg.sencKey &
      systemEvent[j].msg.concatPart1 = systemEvent[i].msg.concatPart1 &
      systemEvent[j].msg.concatPart2 = systemEvent[i].msg.concatPart2
     )endexists)
endforall