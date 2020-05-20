const
  roleHostNum:1;
  roleGatewayNum:1;
  roleServerNum:1;
  totalFact:30;
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
  NonceType : enum{Na, HostIP, secSK, anyNonce};  

  EncryptType : enum{PK,SK,Symk};
  KeyType: record 
    encType: EncryptType; 
    ag: AgentType; 
  end;

  HostStatus: enum{Host1,Host2,Host3,Host4};
  GatewayStatus: enum{Gateway1,Gateway2,Gateway3,Gateway4,Gateway5,Gateway6,Gateway7,Gateway8};
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
   r : NonceType;
   HostIP : NonceType;
   hostipsk : NonceType;
   Host : AgentType;
   Gateway : AgentType;
   Server : AgentType;
   locr : NonceType;
   locHostIP : NonceType;
   lochostipsk : NonceType;
   locHost : AgentType;
   locGateway : AgentType;
   locServer : AgentType;
   st: HostStatus;
   commit : boolean;
  end;
  RoleGateway : record
   r : NonceType;
   HostIP : NonceType;
   hostipsk : NonceType;
   Host : AgentType;
   Gateway : AgentType;
   Server : AgentType;
   locr : NonceType;
   locHostIP : NonceType;
   lochostipsk : NonceType;
   locHost : AgentType;
   locGateway : AgentType;
   locServer : AgentType;
   st: GatewayStatus;
   commit : boolean;
  end;
  RoleServer : record
   r : NonceType;
   HostIP : NonceType;
   hostipsk : NonceType;
   Host : AgentType;
   Gateway : AgentType;
   Server : AgentType;
   locr : NonceType;
   locHostIP : NonceType;
   lochostipsk : NonceType;
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
  pat8Set: msgSet;
  pat9Set: msgSet;
  pat10Set: msgSet;
  pat11Set: msgSet;
  pat12Set: msgSet;
  pat13Set: msgSet;
  pat14Set: msgSet;
  pat15Set: msgSet;
  pat16Set: msgSet;

  gatewayCh1Pat : indexType; ---according to the actions
  serverCh2Pat  : indexType;
  gatewayCh3Pat : indexType;
  hostCh4Pat    : indexType;
  gatewayCh5Pat : indexType;
  serverCh6Pat  : indexType;
  gatewayCh7Pat : indexType;
  hostCh8Pat    : indexType;

  
  Spy_known: Array[indexType] of boolean;
  ---systemEvent   : array[eventNums] of Event;
  ---eve_end       : eventNums;
  emit: Array[indexType] of boolean;

---pat1: Host 
procedure lookAddPat1(Host:AgentType; Var msg:Message; Var num : indexType);
 Var index : indexType;
 begin
   index:=0;
   for i: indexType do
    if (msgs[i].msgType = agent) then
      if (msgs[i].ag = Host) then
        index:=i;
      endif;
    endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := agent;
     msgs[index].ag:=Host; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat1: Host 
procedure isPat1(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = agent) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---pat2: Host.Gateway 
procedure lookAddPat2(Host:AgentType; Gateway:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat1(Host,msg1,i1);
   lookAddPat1(Gateway,msg2,i2);
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

---pat2: Host.Gateway 
procedure isPat2(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---pat3: sk(Host) 
procedure lookAddPat3(HostSk :AgentType; Var msg:Message; Var num : indexType);
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

---pat3: sk(Host) 
procedure isPat3(msg:Message; Var flag:boolean);
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

---pat4: aenc{< Host.Gateway >}sk(Host) 
procedure lookAddPat4(Host:AgentType; Gateway:AgentType; HostSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat2(Host, Gateway,msg1,i1);
   lookAddPat3(HostSk,msg2,i2);
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

---pat4: aenc{< Host.Gateway >}sk(Host) 
procedure isPat4(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat2(msgs[msg.aencMsg],flagPart1);
      isPat3(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---pat5: Host.Gateway.aenc{< Host.Gateway >}sk(Host) 
procedure lookAddPat5(Host:AgentType; Gateway:AgentType; HostSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3 : Message;
      index,i1,i2,i3 : indexType;
  begin
   index:=0;
   lookAddPat1(Host,msg1,i1);
   lookAddPat1(Gateway,msg2,i2);
   lookAddPat4(Host,Gateway,HostSk,msg3,i3);
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

---pat5: Host.Gateway.aenc{< Host.Gateway >}sk(Host) 
procedure isPat5(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
        isPat4(msgs[msg.concatPart[3]],flagPart3);
       if (flagPart1 & flagPart2 & flagPart3) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---pat6: r 
procedure lookAddPat6(r:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=r) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=r; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;

---pat6: r 
procedure isPat6(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---pat7: Host.r.Server 
procedure lookAddPat7(Host:AgentType; r:NonceType; Server:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3 : Message;
      index,i1,i2,i3 : indexType;
  begin
   index:=0;
   lookAddPat1(Host,msg1,i1);
   lookAddPat6(r,msg2,i2);
   lookAddPat1(Server,msg3,i3);
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

---pat7: Host.r.Server 
procedure isPat7(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat6(msgs[msg.concatPart[2]],flagPart2);
        isPat1(msgs[msg.concatPart[3]],flagPart3);
       if (flagPart1 & flagPart2 & flagPart3) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---pat8: aenc{< Host.r.Server >}sk(Server) 
procedure lookAddPat8(Host:AgentType; r:NonceType; Server:AgentType; ServerSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat7(Host, r, Server,msg1,i1);
   lookAddPat3(ServerSk,msg2,i2);
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

---pat8: aenc{< Host.r.Server >}sk(Server) 
procedure isPat8(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat7(msgs[msg.aencMsg],flagPart1);
      isPat3(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---pat9: Host.r.Server.aenc{< Host.r.Server >}sk(Server) 
procedure lookAddPat9(Host:AgentType; r:NonceType; Server:AgentType; ServerSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3, msg4 : Message;
      index,i1,i2,i3,i4 : indexType;
  begin
   index:=0;
   lookAddPat1(Host,msg1,i1);
   lookAddPat6(r,msg2,i2);
   lookAddPat1(Server,msg3,i3);
   lookAddPat8(Host,r,Server,ServerSk,msg4,i4);
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 4) then
       if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2 & msgs[i].concatPart[3] = i3 & msgs[i].concatPart[4] = i4) then
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
     msgs[index].concatPart[4] := i4; 
     msgs[index].length := 4;
    endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat9: Host.r.Server.aenc{< Host.r.Server >}sk(Server) 
procedure isPat9(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3,flagPart4: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     flagPart4 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat6(msgs[msg.concatPart[2]],flagPart2);
        isPat1(msgs[msg.concatPart[3]],flagPart3);
        isPat8(msgs[msg.concatPart[4]],flagPart4);
       if (flagPart1 & flagPart2 & flagPart3 & flagPart4) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---pat10: Host.r 
procedure lookAddPat10(Host:AgentType; r:NonceType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat1(Host,msg1,i1);
   lookAddPat6(r,msg2,i2);
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

---pat10: Host.r 
procedure isPat10(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat6(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---pat11: aenc{< Host.r >}sk(Host) 
procedure lookAddPat11(Host:AgentType; r:NonceType; HostSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat10(Host, r,msg1,i1);
   lookAddPat3(HostSk,msg2,i2);
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

---pat11: aenc{< Host.r >}sk(Host) 
procedure isPat11(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat10(msgs[msg.aencMsg],flagPart1);
      isPat3(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---pat12: Host.r.aenc{< Host.r >}sk(Host) 
procedure lookAddPat12(Host:AgentType; r:NonceType; HostSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3 : Message;
      index,i1,i2,i3 : indexType;
  begin
   index:=0;
   lookAddPat1(Host,msg1,i1);
   lookAddPat6(r,msg2,i2);
   lookAddPat11(Host,r,HostSk,msg3,i3);
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

---pat12: Host.r.aenc{< Host.r >}sk(Host) 
procedure isPat12(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat6(msgs[msg.concatPart[2]],flagPart2);
        isPat11(msgs[msg.concatPart[3]],flagPart3);
       if (flagPart1 & flagPart2 & flagPart3) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---pat13: aenc{< hostipsk >}pk(Host) 
procedure lookAddPat13(hostipsk:NonceType; HostPk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat6(hostipsk,msg1,i1);
   lookAddPat3(HostPk,msg2,i2);
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

---pat13: aenc{< hostipsk >}pk(Host) 
procedure isPat13(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat6(msgs[msg.aencMsg],flagPart1);
      isPat3(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---pat14: Host.HostIP.Gateway.aenc{< hostipsk >}pk(Host).Server 
procedure lookAddPat14(Host:AgentType; HostIP:NonceType; Gateway:AgentType; hostipsk:NonceType; HostPk :AgentType; Server:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3, msg4, msg5 : Message;
      index,i1,i2,i3,i4,i5 : indexType;
  begin
   index:=0;
   lookAddPat1(Host,msg1,i1);
   lookAddPat6(HostIP,msg2,i2);
   lookAddPat1(Gateway,msg3,i3);
   lookAddPat13(hostipsk,HostPk,msg4,i4);
   lookAddPat1(Server,msg5,i5);
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 5) then
       if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2 & msgs[i].concatPart[3] = i3 & msgs[i].concatPart[4] = i4 & msgs[i].concatPart[5] = i5) then
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
     msgs[index].concatPart[4] := i4;
     msgs[index].concatPart[5] := i5; 
     msgs[index].length := 5;
    endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat14: Host.HostIP.Gateway.aenc{< hostipsk >}pk(Host).Server 
procedure isPat14(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3,flagPart4,flagPart5: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     flagPart4 := false;
     flagPart5 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat6(msgs[msg.concatPart[2]],flagPart2);
        isPat1(msgs[msg.concatPart[3]],flagPart3);
        isPat13(msgs[msg.concatPart[4]],flagPart4);
        isPat1(msgs[msg.concatPart[5]],flagPart5);
       if (flagPart1 & flagPart2 & flagPart3 & flagPart4 & flagPart5) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---pat15: aenc{< Host.HostIP.Gateway.aenc{< hostipsk >}pk(Host).Server >}sk(Server) 
procedure lookAddPat15(Host:AgentType; HostIP:NonceType; Gateway:AgentType; hostipsk:NonceType; HostPk :AgentType; Server:AgentType; ServerSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat14(Host, HostIP, Gateway, hostipsk, HostPk, Server,msg1,i1);
   lookAddPat3(ServerSk,msg2,i2);
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

---pat15: aenc{< Host.HostIP.Gateway.aenc{< hostipsk >}pk(Host).Server >}sk(Server) 
procedure isPat15(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat14(msgs[msg.aencMsg],flagPart1);
      isPat3(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---pat16: Host.HostIP.Gateway.aenc{< hostipsk >}pk(Host).Server.aenc{< Host.HostIP.Gateway.aenc{< hostipsk >}pk(Host).Server >}sk(Server) 
procedure lookAddPat16(Host:AgentType; HostIP:NonceType; Gateway:AgentType; hostipsk:NonceType; HostPk :AgentType; Server:AgentType; ServerSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3, msg4, msg5, msg6 : Message;
      index,i1,i2,i3,i4,i5,i6 : indexType;
  begin
   index:=0;
   lookAddPat1(Host,msg1,i1);
   lookAddPat6(HostIP,msg2,i2);
   lookAddPat1(Gateway,msg3,i3);
   lookAddPat13(hostipsk,HostPk,msg4,i4);
   lookAddPat1(Server,msg5,i5);
   lookAddPat15(Host,HostIP,Gateway,hostipsk,HostPk,Server,ServerSk,msg6,i6);
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 6) then
       if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2 & msgs[i].concatPart[3] = i3 & msgs[i].concatPart[4] = i4 & msgs[i].concatPart[5] = i5 & msgs[i].concatPart[6] = i6) then
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
     msgs[index].concatPart[4] := i4;
     msgs[index].concatPart[5] := i5;
     msgs[index].concatPart[6] := i6; 
     msgs[index].length := 6;
    endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat16: Host.HostIP.Gateway.aenc{< hostipsk >}pk(Host).Server.aenc{< Host.HostIP.Gateway.aenc{< hostipsk >}pk(Host).Server >}sk(Server) 
procedure isPat16(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3,flagPart4,flagPart5,flagPart6: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     flagPart4 := false;
     flagPart5 := false;
     flagPart6 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat6(msgs[msg.concatPart[2]],flagPart2);
        isPat1(msgs[msg.concatPart[3]],flagPart3);
        isPat13(msgs[msg.concatPart[4]],flagPart4);
        isPat1(msgs[msg.concatPart[5]],flagPart5);
        isPat15(msgs[msg.concatPart[6]],flagPart6);
       if (flagPart1 & flagPart2 & flagPart3 & flagPart4 & flagPart5 & flagPart6) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
procedure cons1(Host:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat1(Host,msg,num);
  end;
procedure cons2(Host:AgentType; Gateway:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat2(Host, Gateway,msg,num);
  end;
procedure destruct2(msg:Message; Var Host:AgentType; Var Gateway:AgentType);
  Var msgNum1,msgNum2: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Host := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    Gateway := msgNum2.ag;
  end;
procedure cons3(HostSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat3(HostSk,msg,num);
  end;
procedure cons4(Host:AgentType; Gateway:AgentType; HostSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat4(Host, Gateway, HostSk,msg,num);
  end;
procedure destruct4(msg:Message; Var Host:AgentType; Var Gateway:AgentType; Var HostSk:AgentType);
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
    Gateway:=msgNum2.ag;
  end;
procedure cons5(Host:AgentType; Gateway:AgentType; HostSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat5(Host, Gateway, HostSk,msg,num);
  end;
procedure destruct5(msg:Message; Var Host:AgentType; Var Gateway:AgentType; Var HostSk:AgentType);
  Var msgNum1,msgNum2,msgNum3: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Host := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    Gateway := msgNum2.ag;
    msgNum3 := msgs[msg.concatPart[3]];
    k := msgs[msgNum3.aencKey].k;
    HostSk := k.ag;
  end;
procedure cons6(r:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(r,msg,num);
  end;
procedure cons7(Host:AgentType; r:NonceType; Server:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat7(Host, r, Server,msg,num);
  end;
procedure destruct7(msg:Message; Var Host:AgentType; Var r:NonceType; Var Server:AgentType);
  Var msgNum1,msgNum2,msgNum3: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Host := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    r := msgNum2.noncePart;
    msgNum3 := msgs[msg.concatPart[3]];
    Server := msgNum3.ag;
  end;
procedure cons8(Host:AgentType; r:NonceType; Server:AgentType; ServerSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat8(Host, r, Server, ServerSk,msg,num);
  end;
procedure destruct8(msg:Message; Var Host:AgentType; Var r:NonceType; Var Server:AgentType; Var ServerSk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2,msgNum3:Message;
  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
   ServerSk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart[1]];
    msgNum2:=msgs[msg1.concatPart[2]];
    msgNum3:=msgs[msg1.concatPart[3]];
    Host:=msgNum1.ag;
    r:=msgNum2.noncePart;
    Server:=msgNum3.ag;
  end;
procedure cons9(Host:AgentType; r:NonceType; Server:AgentType; ServerSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat9(Host, r, Server, ServerSk,msg,num);
  end;
procedure destruct9(msg:Message; Var Host:AgentType; Var r:NonceType; Var Server:AgentType; Var ServerSk:AgentType);
  Var msgNum1,msgNum2,msgNum3,msgNum4: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Host := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    r := msgNum2.noncePart;
    msgNum3 := msgs[msg.concatPart[3]];
    Server := msgNum3.ag;
    msgNum4 := msgs[msg.concatPart[4]];
    k := msgs[msgNum4.aencKey].k;
    ServerSk := k.ag;
  end;
procedure cons10(Host:AgentType; r:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat10(Host, r,msg,num);
  end;
procedure destruct10(msg:Message; Var Host:AgentType; Var r:NonceType);
  Var msgNum1,msgNum2: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Host := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    r := msgNum2.noncePart;
  end;
procedure cons11(Host:AgentType; r:NonceType; HostSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat11(Host, r, HostSk,msg,num);
  end;
procedure destruct11(msg:Message; Var Host:AgentType; Var r:NonceType; Var HostSk:AgentType);
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
    r:=msgNum2.noncePart;
  end;
procedure cons12(Host:AgentType; r:NonceType; HostSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat12(Host, r, HostSk,msg,num);
  end;
procedure destruct12(msg:Message; Var Host:AgentType; Var r:NonceType; Var HostSk:AgentType);
  Var msgNum1,msgNum2,msgNum3: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Host := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    r := msgNum2.noncePart;
    msgNum3 := msgs[msg.concatPart[3]];
    k := msgs[msgNum3.aencKey].k;
    HostSk := k.ag;
  end;
procedure cons13(hostipsk:NonceType; HostPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat13(hostipsk, HostPk,msg,num);
  end;
procedure destruct13(msg:Message; Var hostipsk:NonceType; Var HostPk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2:Message;
   begin
    clear msg1;
    k1 := msgs[msg.aencKey].k;
    HostPk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    hostipsk:=msg1.noncePart;
  end;
procedure cons14(Host:AgentType; HostIP:NonceType; Gateway:AgentType; hostipsk:NonceType; HostPk :AgentType; Server:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat14(Host, HostIP, Gateway, hostipsk, HostPk, Server,msg,num);
  end;
procedure destruct14(msg:Message; Var Host:AgentType; Var HostIP:NonceType; Var Gateway:AgentType; Var hostipsk:NonceType; Var HostPk:AgentType; Var Server:AgentType);
  Var msgNum1,msgNum2,msgNum3,msgNum4,msgNum5: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Host := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    HostIP := msgNum2.noncePart;
    msgNum3 := msgs[msg.concatPart[3]];
    Gateway := msgNum3.ag;
    msgNum4 := msgs[msg.concatPart[4]];
    k := msgs[msgNum4.aencKey].k;
    HostPk := k.ag;
    msgNum5 := msgs[msg.concatPart[5]];
    Server := msgNum5.ag;
  end;
procedure cons15(Host:AgentType; HostIP:NonceType; Gateway:AgentType; hostipsk:NonceType; HostPk :AgentType; Server:AgentType; ServerSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat15(Host, HostIP, Gateway, hostipsk, HostPk, Server, ServerSk,msg,num);
  end;
procedure destruct15(msg:Message; Var Host:AgentType; Var HostIP:NonceType; Var Gateway:AgentType; Var hostipsk:NonceType; Var HostPk:AgentType; Var Server:AgentType; Var ServerSk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2,msgNum3,msgNum4,msgNum5:Message;
  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
   ServerSk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart[1]];
    msgNum2:=msgs[msg1.concatPart[2]];
    msgNum3:=msgs[msg1.concatPart[3]];
    msgNum4:=msgs[msg1.concatPart[4]];
    msgNum5:=msgs[msg1.concatPart[5]];
    Host:=msgNum1.ag;
    HostIP:=msgNum2.noncePart;
    Gateway:=msgNum3.ag;
    Server:=msgNum5.ag;
  end;
procedure cons16(Host:AgentType; HostIP:NonceType; Gateway:AgentType; hostipsk:NonceType; HostPk :AgentType; Server:AgentType; ServerSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat16(Host, HostIP, Gateway, hostipsk, HostPk, Server, ServerSk,msg,num);
  end;
procedure destruct16(msg:Message; Var Host:AgentType; Var HostIP:NonceType; Var Gateway:AgentType; Var hostipsk:NonceType; Var HostPk:AgentType; Var Server:AgentType; Var ServerSk:AgentType);
  Var msgNum1,msgNum2,msgNum3,msgNum4,msgNum5,msgNum6: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Host := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    HostIP := msgNum2.noncePart;
    msgNum3 := msgs[msg.concatPart[3]];
    Gateway := msgNum3.ag;
    msgNum4 := msgs[msg.concatPart[4]];
    k := msgs[msgNum4.aencKey].k;
    HostPk := k.ag;
    msgNum5 := msgs[msg.concatPart[5]];
    Server := msgNum5.ag;
    msgNum6 := msgs[msg.concatPart[6]];
    k := msgs[msgNum6.aencKey].k;
    ServerSk := k.ag;
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

function construct2By11(msgNo1,msgNo2:indexType):indexType;
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

function construct4By23(msgNo2, msgNo3:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo2 & msgs[i].aencKey = msgNo3) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo2;
     msgs[index].aencKey := msgNo3;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct5By114(msgNo1,msgNo2,msgNo3:indexType):indexType;
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

--- Sorry, construct_function of this pattern has not been written!

function construct7By161(msgNo1,msgNo2,msgNo3:indexType):indexType;
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

function construct8By73(msgNo7, msgNo3:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo7 & msgs[i].aencKey = msgNo3) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo7;
     msgs[index].aencKey := msgNo3;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct9By1618(msgNo1,msgNo2,msgNo3,msgNo4:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 4) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3 & msgs[i].concatPart[4] = msgNo4) then
         index := i;       endif;     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1] := msgNo1;
     msgs[index].concatPart[2] := msgNo2;
     msgs[index].concatPart[3] := msgNo3;
     msgs[index].concatPart[4] := msgNo4;
     msgs[index].length := 4;
   endif;
   return index;
  end;

function construct10By16(msgNo1,msgNo2:indexType):indexType;
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

function construct11By103(msgNo10, msgNo3:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo10 & msgs[i].aencKey = msgNo3) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo10;
     msgs[index].aencKey := msgNo3;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct12By1611(msgNo1,msgNo2,msgNo3:indexType):indexType;
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

function construct13By63(msgNo6, msgNo3:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo6 & msgs[i].aencKey = msgNo3) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo6;
     msgs[index].aencKey := msgNo3;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct14By161131(msgNo1,msgNo2,msgNo3,msgNo4,msgNo5:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 5) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3 & msgs[i].concatPart[4] = msgNo4 & msgs[i].concatPart[5] = msgNo5) then
         index := i;       endif;     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1] := msgNo1;
     msgs[index].concatPart[2] := msgNo2;
     msgs[index].concatPart[3] := msgNo3;
     msgs[index].concatPart[4] := msgNo4;
     msgs[index].concatPart[5] := msgNo5;
     msgs[index].length := 5;
   endif;
   return index;
  end;

function construct15By143(msgNo14, msgNo3:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo14 & msgs[i].aencKey = msgNo3) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo14;
     msgs[index].aencKey := msgNo3;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct16By16113115(msgNo1,msgNo2,msgNo3,msgNo4,msgNo5,msgNo6:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 6) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3 & msgs[i].concatPart[4] = msgNo4 & msgs[i].concatPart[5] = msgNo5 & msgs[i].concatPart[6] = msgNo6) then
         index := i;       endif;     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1] := msgNo1;
     msgs[index].concatPart[2] := msgNo2;
     msgs[index].concatPart[3] := msgNo3;
     msgs[index].concatPart[4] := msgNo4;
     msgs[index].concatPart[5] := msgNo5;
     msgs[index].concatPart[6] := msgNo6;
     msgs[index].length := 6;
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
roleHost[i].st = Host1 & ch[1].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons5(roleHost[i].Host,roleHost[i].Gateway,roleHost[i].Host,msg,msgNo);
   gatewayCh1Pat := msgNo; ---?1
   ch[1].empty := false;
   ch[1].msg := msg;
   ch[1].sender := roleHost[i].Host;
   ch[1].receiver := Intruder;
   roleHost[i].st := Host2;
   put "send1. ";
   put ch[1].sender;
   put "   ";
   put ch[1].receiver;
   put "   msg: ";
   printMsg(ch[1].msg);
   put "\n";
end;
rule " roleHost2 "
roleHost[i].st = Host2 & ch[4].empty = false 
==>
var flag_pat9:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[4].msg;
   isPat9(msg, flag_pat9);
   if(flag_pat9) then
     destruct9(msg,roleHost[i].locHost,roleHost[i].locr,roleHost[i].locServer,roleHost[i].locServer);
     if(matchAgent(roleHost[i].locHost, roleHost[i].Host) & matchNonce(roleHost[i].locr, roleHost[i].r) & matchAgent(roleHost[i].locServer, roleHost[i].Server) & matchAgent(roleHost[i].locServer, roleHost[i].Server))then
       ch[4].empty:=true;
       clear ch[4].msg;
       roleHost[i].st := Host3;
     endif;
   endif;
   put "recv2. ";
   put ch[4].sender;
   put "   ";
   put ch[4].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleHost3 "
roleHost[i].st = Host3 & ch[5].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons12(roleHost[i].Host,roleHost[i].locr,roleHost[i].Host,msg,msgNo);
   gatewayCh5Pat := msgNo; ---?1
   ch[5].empty := false;
   ch[5].msg := msg;
   ch[5].sender := roleHost[i].Host;
   ch[5].receiver := Intruder;
   roleHost[i].st := Host4;
   put "send3. ";
   put ch[5].sender;
   put "   ";
   put ch[5].receiver;
   put "   msg: ";
   printMsg(ch[5].msg);
   put "\n";
end;
rule " roleHost4 "
roleHost[i].st = Host4 & ch[8].empty = false 
==>
var flag_pat16:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[8].msg;
   isPat16(msg, flag_pat16);
   if(flag_pat16) then
     destruct16(msg,roleHost[i].locHost,roleHost[i].locHostIP,roleHost[i].locGateway,roleHost[i].lochostipsk,roleHost[i].locHost,roleHost[i].locServer,roleHost[i].locServer);
     if(matchAgent(roleHost[i].locHost, roleHost[i].Host) & matchNonce(roleHost[i].locHostIP, roleHost[i].HostIP) & matchAgent(roleHost[i].locGateway, roleHost[i].Gateway) & matchNonce(roleHost[i].lochostipsk, roleHost[i].hostipsk) & matchAgent(roleHost[i].locHost, roleHost[i].Host) & matchAgent(roleHost[i].locServer, roleHost[i].Server) & matchAgent(roleHost[i].locServer, roleHost[i].Server))then
       ch[8].empty:=true;
       clear ch[8].msg;
       roleHost[i].st := Host1;
     endif;
   endif;
   put "recv4. ";
   put ch[8].sender;
   put "   ";
   put ch[8].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
   roleHost[i].commit := true;
end;
endruleset;

ruleset i:roleGatewayNums do
rule " roleGateway1 "
roleGateway[i].st = Gateway1 & ch[1].empty = false 
==>
var flag_pat5:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[1].msg;
   isPat5(msg, flag_pat5);
   if(flag_pat5) then
     destruct5(msg,roleGateway[i].locHost,roleGateway[i].locGateway,roleGateway[i].locHost);
     if(matchAgent(roleGateway[i].locHost, roleGateway[i].Host) & matchAgent(roleGateway[i].locGateway, roleGateway[i].Gateway) & matchAgent(roleGateway[i].locHost, roleGateway[i].Host))then
       ch[1].empty:=true;
       clear ch[1].msg;
       roleGateway[i].st := Gateway2;
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
rule " roleGateway2 "
roleGateway[i].st = Gateway2 & ch[2].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons5(roleGateway[i].Host,roleGateway[i].Gateway,roleGateway[i].Host,msg,msgNo);
   serverCh2Pat := msgNo; ---?
   ch[2].empty := false;
   ch[2].msg := msg;
   ch[2].sender := roleGateway[i].Gateway;
   ch[2].receiver := Intruder;
   roleGateway[i].st := Gateway3;
   put "send2. ";
   put ch[2].sender;
   put "   ";
   put ch[2].receiver;
   put "   msg: ";
   printMsg(ch[2].msg);
   put "\n";
end;
rule " roleGateway3 "
roleGateway[i].st = Gateway3 & ch[3].empty = false 
==>
var flag_pat9:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[3].msg;
   isPat9(msg, flag_pat9);
   if(flag_pat9) then
     destruct9(msg,roleGateway[i].locHost,roleGateway[i].locr,roleGateway[i].locServer,roleGateway[i].locServer);
     if(matchAgent(roleGateway[i].locHost, roleGateway[i].Host) & matchNonce(roleGateway[i].locr, roleGateway[i].r) & matchAgent(roleGateway[i].locServer, roleGateway[i].Server) & matchAgent(roleGateway[i].locServer, roleGateway[i].Server))then
       ch[3].empty:=true;
       clear ch[3].msg;
       roleGateway[i].st := Gateway4;
     endif;
   endif;
   put "recv3. ";
   put ch[3].sender;
   put "   ";
   put ch[3].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleGateway4 "
roleGateway[i].st = Gateway4 & ch[4].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons9(roleGateway[i].Host,roleGateway[i].locr,roleGateway[i].Server,roleGateway[i].Server,msg,msgNo);
   hostCh4Pat := msgNo; ---?1
   ch[4].empty := false;
   ch[4].msg := msg;
   ch[4].sender := roleGateway[i].Gateway;
   ch[4].receiver := Intruder;
   roleGateway[i].st := Gateway5;
   put "send4. ";
   put ch[4].sender;
   put "   ";
   put ch[4].receiver;
   put "   msg: ";
   printMsg(ch[4].msg);
   put "\n";
end;
rule " roleGateway5 "
roleGateway[i].st = Gateway5 & ch[5].empty = false 
==>
var flag_pat12:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[5].msg;
   isPat12(msg, flag_pat12);
   if(flag_pat12) then
     destruct12(msg,roleGateway[i].locHost,roleGateway[i].locr,roleGateway[i].locHost);
     if(matchAgent(roleGateway[i].locHost, roleGateway[i].Host) & matchNonce(roleGateway[i].locr, roleGateway[i].r) & matchAgent(roleGateway[i].locHost, roleGateway[i].Host))then
       ch[5].empty:=true;
       clear ch[5].msg;
       roleGateway[i].st := Gateway6;
     endif;
   endif;
   put "recv5. ";
   put ch[5].sender;
   put "   ";
   put ch[5].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleGateway6 "
roleGateway[i].st = Gateway6 & ch[6].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons12(roleGateway[i].Host,roleGateway[i].locr,roleGateway[i].Host,msg,msgNo);
   serverCh6Pat := msgNo; ---?1
   ch[6].empty := false;
   ch[6].msg := msg;
   ch[6].sender := roleGateway[i].Gateway;
   ch[6].receiver := Intruder;
   roleGateway[i].st := Gateway7;
   put "send6. ";
   put ch[6].sender;
   put "   ";
   put ch[6].receiver;
   put "   msg: ";
   printMsg(ch[6].msg);
   put "\n";
end;
rule " roleGateway7 "
roleGateway[i].st = Gateway7 & ch[7].empty = false 
==>
var flag_pat16:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[7].msg;
   isPat16(msg, flag_pat16);
   if(flag_pat16) then
     destruct16(msg,roleGateway[i].locHost,roleGateway[i].locHostIP,roleGateway[i].locGateway,roleGateway[i].lochostipsk,roleGateway[i].locHost,roleGateway[i].locServer,roleGateway[i].locServer);
     if(matchAgent(roleGateway[i].locHost, roleGateway[i].Host) & matchNonce(roleGateway[i].locHostIP, roleGateway[i].HostIP) & matchAgent(roleGateway[i].locGateway, roleGateway[i].Gateway) & matchNonce(roleGateway[i].lochostipsk, roleGateway[i].hostipsk) & matchAgent(roleGateway[i].locHost, roleGateway[i].Host) & matchAgent(roleGateway[i].locServer, roleGateway[i].Server) & matchAgent(roleGateway[i].locServer, roleGateway[i].Server))then
       ch[7].empty:=true;
       clear ch[7].msg;
       roleGateway[i].st := Gateway8;
     endif;
   endif;
   put "recv7. ";
   put ch[7].sender;
   put "   ";
   put ch[7].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleGateway8 "
roleGateway[i].st = Gateway8 & ch[8].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons16(roleGateway[i].Host,roleGateway[i].locHostIP,roleGateway[i].Gateway,roleGateway[i].lochostipsk,roleGateway[i].Host,roleGateway[i].Server,roleGateway[i].Server,msg,msgNo);
   hostCh8Pat := msgNo; ---?1
   ch[8].empty := false;
   ch[8].msg := msg;
   ch[8].sender := roleGateway[i].Gateway;
   ch[8].receiver := Intruder;
   roleGateway[i].st := Gateway1;
   put "send8. ";
   put ch[8].sender;
   put "   ";
   put ch[8].receiver;
   put "   msg: ";
   printMsg(ch[8].msg);
   put "\n";
   roleGateway[i].commit := true;
end;
endruleset;

ruleset i:roleServerNums do
rule " roleServer1 "
roleServer[i].st = Server1 & ch[2].empty = false 
==>
var flag_pat5:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[2].msg;
   isPat5(msg, flag_pat5);
   if(flag_pat5) then
     destruct5(msg,roleServer[i].locHost,roleServer[i].locGateway,roleServer[i].locHost);
     if(matchAgent(roleServer[i].locHost, roleServer[i].Host) & matchAgent(roleServer[i].locGateway, roleServer[i].Gateway) & matchAgent(roleServer[i].locHost, roleServer[i].Host))then
       ch[2].empty:=true;
       clear ch[2].msg;
       roleServer[i].st := Server2;
     endif;
   endif;
   put "recv1. ";
   put ch[2].sender;
   put "   ";
   put ch[2].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleServer2 "
roleServer[i].st = Server2 & ch[3].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons9(roleServer[i].Host,roleServer[i].r,roleServer[i].Server,roleServer[i].Server,msg,msgNo);
   gatewayCh3Pat := msgNo; ---?1
   ch[3].empty := false;
   ch[3].msg := msg;
   ch[3].sender := roleServer[i].Server;
   ch[3].receiver := Intruder;
   roleServer[i].st := Server3;
   put "send2. ";
   put ch[3].sender;
   put "   ";
   put ch[3].receiver;
   put "   msg: ";
   printMsg(ch[3].msg);
   put "\n";
end;
rule " roleServer3 "
roleServer[i].st = Server3 & ch[6].empty = false 
==>
var flag_pat12:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[6].msg;
   isPat12(msg, flag_pat12);
   if(flag_pat12) then
     destruct12(msg,roleServer[i].locHost,roleServer[i].locr,roleServer[i].locHost);
     if(matchAgent(roleServer[i].locHost, roleServer[i].Host) & matchNonce(roleServer[i].locr, roleServer[i].r) & matchAgent(roleServer[i].locHost, roleServer[i].Host))then
       ch[6].empty:=true;
       clear ch[6].msg;
       roleServer[i].st := Server4;
     endif;
   endif;
   put "recv3. ";
   put ch[6].sender;
   put "   ";
   put ch[6].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleServer4 "
roleServer[i].st = Server4 & ch[7].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons16(roleServer[i].Host,roleServer[i].HostIP,roleServer[i].Gateway,roleServer[i].hostipsk,roleServer[i].Host,roleServer[i].Server,roleServer[i].Server,msg,msgNo);
   gatewayCh7Pat := msgNo; ---?1
   ch[7].empty := false;
   ch[7].msg := msg;
   ch[7].sender := roleServer[i].Server;
   ch[7].receiver := Intruder;
   roleServer[i].st := Server1;
   put "send4. ";
   put ch[7].sender;
   put "   ";
   put ch[7].receiver;
   put "   msg: ";
   printMsg(ch[7].msg);
   put "\n";
   roleServer[i].commit := true;
end;
endruleset;


---rule of intruder to get msg from ch[1] 
rule "intruderGetMsgFromCh[1]" 
  ch[1].empty = false
  ==>
  var flag_pat5:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[1].msg;
    get_msgNo(msg, msgNo);
    isPat5(msg,flag_pat5);
    if (flag_pat5) then
      if(!exist(pat5Set,msgNo)) then
        pat5Set.length:=pat5Set.length+1;
        pat5Set.content[pat5Set.length]:=msgNo;
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
  var flag_pat5:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[2].msg;
    get_msgNo(msg, msgNo);
    isPat5(msg,flag_pat5);
    if (flag_pat5) then
      if(!exist(pat5Set,msgNo)) then
        pat5Set.length:=pat5Set.length+1;
        pat5Set.content[pat5Set.length]:=msgNo;
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
  var flag_pat9:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[3].msg;
    get_msgNo(msg, msgNo);
    isPat9(msg,flag_pat9);
    if (flag_pat9) then
      if(!exist(pat9Set,msgNo)) then
        pat9Set.length:=pat9Set.length+1;
        pat9Set.content[pat9Set.length]:=msgNo;
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
  var flag_pat9:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[4].msg;
    get_msgNo(msg, msgNo);
    isPat9(msg,flag_pat9);
    if (flag_pat9) then
      if(!exist(pat9Set,msgNo)) then
        pat9Set.length:=pat9Set.length+1;
        pat9Set.content[pat9Set.length]:=msgNo;
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
  var flag_pat12:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[5].msg;
    get_msgNo(msg, msgNo);
    isPat12(msg,flag_pat12);
    if (flag_pat12) then
      if(!exist(pat12Set,msgNo)) then
        pat12Set.length:=pat12Set.length+1;
        pat12Set.content[pat12Set.length]:=msgNo;
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
  var flag_pat12:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[6].msg;
    get_msgNo(msg, msgNo);
    isPat12(msg,flag_pat12);
    if (flag_pat12) then
      if(!exist(pat12Set,msgNo)) then
        pat12Set.length:=pat12Set.length+1;
        pat12Set.content[pat12Set.length]:=msgNo;
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
  var flag_pat16:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[7].msg;
    get_msgNo(msg, msgNo);
    isPat16(msg,flag_pat16);
    if (flag_pat16) then
      if(!exist(pat16Set,msgNo)) then
        pat16Set.length:=pat16Set.length+1;
        pat16Set.content[pat16Set.length]:=msgNo;
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
  var flag_pat16:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    msg := ch[8].msg;
    get_msgNo(msg, msgNo);
    isPat16(msg,flag_pat16);
    if (flag_pat16) then
      if(!exist(pat16Set,msgNo)) then
        pat16Set.length:=pat16Set.length+1;
        pat16Set.content[pat16Set.length]:=msgNo;
        Spy_known[msgNo] := true;
      endif;
      ch[8].empty := true;
      clear ch[8].msg;
    endif;
  end;

---rule of intruder to emit msg into ch[1].
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsgIntoCh[1]"
      ch[1].empty=true & i <= pat5Set.length & pat5Set.content[i] != 0 & Spy_known[pat5Set.content[i]] & match(msgs[pat5Set.content[i]], msgs[gatewayCh1Pat]) ---?2
      ==>
      begin
        if (!emit[pat5Set.content[i]]) then  --- & msgs[msgs[pat5Set.content[i]].aencKey].k.ag=roleGateway[j].Gateway
          clear ch[1];
          ch[1].msg:=msgs[pat5Set.content[i]];
          ch[1].sender:=Intruder;
          ch[1].receiver:=roleGateway[j].Gateway;
          ch[1].empty:=false;
          emit[pat5Set.content[i]] := true;
          put "seq1. ";
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
  ruleset j: roleServerNums do
    rule "intruderEmitMsgIntoCh[2]"
      ch[2].empty=true & i <= pat5Set.length & pat5Set.content[i] != 0 & Spy_known[pat5Set.content[i]] & match(msgs[pat5Set.content[i]], msgs[serverCh2Pat]) ---?2
      ==>
      begin
        if (!emit[pat5Set.content[i]]) then  --- & msgs[msgs[pat5Set.content[i]].aencKey].k.ag=roleServer[j].Server
          clear ch[2];
          ch[2].msg:=msgs[pat5Set.content[i]];
          ch[2].sender:=Intruder;
          ch[2].receiver:=roleServer[j].Server;
          ch[2].empty:=false;
          emit[pat5Set.content[i]] := true;
          put "seq2. ";
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
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsgIntoCh[3]"
      ch[3].empty=true & i <= pat9Set.length & pat9Set.content[i] != 0 & Spy_known[pat9Set.content[i]] & match(msgs[pat9Set.content[i]], msgs[gatewayCh3Pat]) ---?2
      ==>
      begin
        if (!emit[pat9Set.content[i]]) then  --- & msgs[msgs[pat9Set.content[i]].aencKey].k.ag=roleGateway[j].Gateway
          clear ch[3];
          ch[3].msg:=msgs[pat9Set.content[i]];
          ch[3].sender:=Intruder;
          ch[3].receiver:=roleGateway[j].Gateway;
          ch[3].empty:=false;
          emit[pat9Set.content[i]] := true;
          put "seq3. ";
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
  ruleset j: roleHostNums do
    rule "intruderEmitMsgIntoCh[4]"
      ch[4].empty=true & i <= pat9Set.length & pat9Set.content[i] != 0 & Spy_known[pat9Set.content[i]] & match(msgs[pat9Set.content[i]], msgs[hostCh4Pat]) ---?2
      ==>
      begin
        if (!emit[pat9Set.content[i]]) then  --- & msgs[msgs[pat9Set.content[i]].aencKey].k.ag=roleHost[j].Host
          clear ch[4];
          ch[4].msg:=msgs[pat9Set.content[i]];
          ch[4].sender:=Intruder;
          ch[4].receiver:=roleHost[j].Host;
          ch[4].empty:=false;
          emit[pat9Set.content[i]] := true;
          put "seq4. ";
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
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsgIntoCh[5]"
      ch[5].empty=true & i <= pat12Set.length & pat12Set.content[i] != 0 & Spy_known[pat12Set.content[i]] & match(msgs[pat12Set.content[i]], msgs[gatewayCh5Pat]) ---?2
      ==>
      begin
        if (!emit[pat12Set.content[i]]) then  --- & msgs[msgs[pat12Set.content[i]].aencKey].k.ag=roleGateway[j].Gateway
          clear ch[5];
          ch[5].msg:=msgs[pat12Set.content[i]];
          ch[5].sender:=Intruder;
          ch[5].receiver:=roleGateway[j].Gateway;
          ch[5].empty:=false;
          emit[pat12Set.content[i]] := true;
          put "seq5. ";
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
  ruleset j: roleServerNums do
    rule "intruderEmitMsgIntoCh[6]"
      ch[6].empty=true & i <= pat12Set.length & pat12Set.content[i] != 0 & Spy_known[pat12Set.content[i]] & match(msgs[pat12Set.content[i]], msgs[serverCh6Pat]) ---?2
      ==>
      begin
        if (!emit[pat12Set.content[i]]) then  --- & msgs[msgs[pat12Set.content[i]].aencKey].k.ag=roleServer[j].Server
          clear ch[6];
          ch[6].msg:=msgs[pat12Set.content[i]];
          ch[6].sender:=Intruder;
          ch[6].receiver:=roleServer[j].Server;
          ch[6].empty:=false;
          emit[pat12Set.content[i]] := true;
          put "seq6. ";
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
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsgIntoCh[7]"
      ch[7].empty=true & i <= pat16Set.length & pat16Set.content[i] != 0 & Spy_known[pat16Set.content[i]] & match(msgs[pat16Set.content[i]], msgs[gatewayCh7Pat]) ---?2
      ==>
      begin
        if (!emit[pat16Set.content[i]]) then  --- & msgs[msgs[pat16Set.content[i]].aencKey].k.ag=roleGateway[j].Gateway
          clear ch[7];
          ch[7].msg:=msgs[pat16Set.content[i]];
          ch[7].sender:=Intruder;
          ch[7].receiver:=roleGateway[j].Gateway;
          ch[7].empty:=false;
          emit[pat16Set.content[i]] := true;
          put "seq7. ";
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
  ruleset j: roleHostNums do
    rule "intruderEmitMsgIntoCh[8]"
      ch[8].empty=true & i <= pat16Set.length & pat16Set.content[i] != 0 & Spy_known[pat16Set.content[i]] & match(msgs[pat16Set.content[i]], msgs[hostCh8Pat]) ---?2
      ==>
      begin
        if (!emit[pat16Set.content[i]]) then  --- & msgs[msgs[pat16Set.content[i]].aencKey].k.ag=roleHost[j].Host
          clear ch[8];
          ch[8].msg:=msgs[pat16Set.content[i]];
          ch[8].sender:=Intruder;
          ch[8].receiver:=roleHost[j].Host;
          ch[8].empty:=false;
          emit[pat16Set.content[i]] := true;
          put "seq8. ";
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
--- enconcat and deconcat rules for pat: concat(Host.Gateway)

ruleset i:msgLen do 
  rule "deconcat 2"	---pat2
    i<=pat2Set.length & pat2Set.content[i] != 0 & Spy_known[pat2Set.content[i]] &
    !(Spy_known[msgs[pat2Set.content[i]].concatPart[1]] & Spy_known[msgs[pat2Set.content[i]].concatPart[2]])
    ==>
    var msgPat11,msgPat12:indexType;
        flag_pat11,flag_pat12:boolean;
    begin
      if (!Spy_known[msgs[pat2Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat2Set.content[i]].concatPart[1]]:=true;
        msgPat11 := msgs[pat2Set.content[i]].concatPart[1];
        isPat1(msgs[msgPat11],flag_pat11);
        if (flag_pat11) then
          if(!exist(pat1Set,msgPat11)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat11;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat2Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat2Set.content[i]].concatPart[2]]:=true;
        msgPat12 := msgs[pat2Set.content[i]].concatPart[2];
        isPat1(msgs[msgPat12],flag_pat12);
        if (flag_pat12) then
          if(!exist(pat1Set,msgPat12)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat12;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i0: msgLen do
  ruleset i1: msgLen do 
    rule "enconcat 2"	---pat2
      i0<=pat1Set.length & Spy_known[pat1Set.content[i0]] &
      i1<=pat1Set.length & Spy_known[pat1Set.content[i1]] &
      !Spy_known[construct2By11(pat1Set.content[i0],pat1Set.content[i1])] 
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct2By11(pat1Set.content[i0],pat1Set.content[i1]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat2Set,concatMsgNo)) then
          pat2Set.length:=pat2Set.length+1;
          pat2Set.content[pat2Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc(Host.Gateway,sk(Host)), for intruder
ruleset i:msgLen do 
  rule "decrypt 4"	---pat4
    i<=pat4Set.length & pat4Set.content[i] != 0 & Spy_known[pat4Set.content[i]] &
    !Spy_known[msgs[pat4Set.content[i]].aencMsg]
    ==>
    var key_inv:Message;
	msgPat2:indexType;
	flag_pat2:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat4Set.content[i]].aencKey]);
      if (key_inv.k.ag = Intruder) then
        Spy_known[msgs[pat4Set.content[i]].aencMsg]:=true;
        msgPat2:=msgs[pat4Set.content[i]].aencMsg;
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

ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "encrypt 4"	---pat4
      i<=pat2Set.length & pat2Set.content[i] != 0 & Spy_known[pat2Set.content[i]] &
      j<=pat3Set.length & pat3Set.content[j] != 0 & Spy_known[pat3Set.content[j]] &
      !Spy_known[construct4By23(pat2Set.content[i],pat3Set.content[j])]
      ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat3Set.content[j]].k.encType=PK) then
          encMsgNo := construct4By23(pat2Set.content[i],pat3Set.content[j]);
          if (!exist(pat4Set,encMsgNo)) then
            pat4Set.length := pat4Set.length+1;
            pat4Set.content[pat4Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(Host.Gateway.aenc{< Host.Gateway >}sk(Host))

ruleset i:msgLen do 
  rule "deconcat 5"	---pat5
    i<=pat5Set.length & pat5Set.content[i] != 0 & Spy_known[pat5Set.content[i]] &
    !(Spy_known[msgs[pat5Set.content[i]].concatPart[1]] & Spy_known[msgs[pat5Set.content[i]].concatPart[2]])
    ==>
    var msgPat11,msgPat12:indexType;
        flag_pat11,flag_pat12:boolean;
    begin
      if (!Spy_known[msgs[pat5Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat5Set.content[i]].concatPart[1]]:=true;
        msgPat11 := msgs[pat5Set.content[i]].concatPart[1];
        isPat1(msgs[msgPat11],flag_pat11);
        if (flag_pat11) then
          if(!exist(pat1Set,msgPat11)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat11;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat5Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat5Set.content[i]].concatPart[2]]:=true;
        msgPat12 := msgs[pat5Set.content[i]].concatPart[2];
        isPat1(msgs[msgPat12],flag_pat12);
        if (flag_pat12) then
          if(!exist(pat1Set,msgPat12)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat12;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i0: msgLen do
  ruleset i1: msgLen do
  ruleset i2: msgLen do 
    rule "enconcat 5"	---pat5
      i0<=pat1Set.length & Spy_known[pat1Set.content[i0]] &
      i1<=pat1Set.length & Spy_known[pat1Set.content[i1]] &
      i2<=pat4Set.length & Spy_known[pat4Set.content[i2]] &
      !Spy_known[construct5By114(pat1Set.content[i0],pat1Set.content[i1],pat4Set.content[i2])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct5By114(pat1Set.content[i0],pat1Set.content[i1],pat4Set.content[i2]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat5Set,concatMsgNo)) then
          pat5Set.length:=pat5Set.length+1;
          pat5Set.content[pat5Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(Host.r.Server)

ruleset i:msgLen do 
  rule "deconcat 7"	---pat7
    i<=pat7Set.length & pat7Set.content[i] != 0 & Spy_known[pat7Set.content[i]] &
    !(Spy_known[msgs[pat7Set.content[i]].concatPart[1]] & Spy_known[msgs[pat7Set.content[i]].concatPart[2]])
    ==>
    var msgPat1,msgPat6:indexType;
        flag_pat1,flag_pat6:boolean;
    begin
      if (!Spy_known[msgs[pat7Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat7Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat7Set.content[i]].concatPart[1];
        isPat1(msgs[msgPat1],flag_pat1);
        if (flag_pat1) then
          if(!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat7Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat7Set.content[i]].concatPart[2]]:=true;
        msgPat6 := msgs[pat7Set.content[i]].concatPart[2];
        isPat6(msgs[msgPat6],flag_pat6);
        if (flag_pat6) then
          if(!exist(pat6Set,msgPat6)) then
             pat6Set.length:=pat6Set.length+1;
             pat6Set.content[pat6Set.length] := msgPat6;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i0: msgLen do
  ruleset i1: msgLen do
  ruleset i2: msgLen do 
    rule "enconcat 7"	---pat7
      i0<=pat1Set.length & Spy_known[pat1Set.content[i0]] &
      i1<=pat6Set.length & Spy_known[pat6Set.content[i1]] &
      i2<=pat1Set.length & Spy_known[pat1Set.content[i2]] &
      !Spy_known[construct7By161(pat1Set.content[i0],pat6Set.content[i1],pat1Set.content[i2])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct7By161(pat1Set.content[i0],pat6Set.content[i1],pat1Set.content[i2]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat7Set,concatMsgNo)) then
          pat7Set.length:=pat7Set.length+1;
          pat7Set.content[pat7Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc(Host.r.Server,sk(Server)), for intruder
ruleset i:msgLen do 
  rule "decrypt 8"	---pat8
    i<=pat8Set.length & pat8Set.content[i] != 0 & Spy_known[pat8Set.content[i]] &
    !Spy_known[msgs[pat8Set.content[i]].aencMsg]
    ==>
    var key_inv:Message;
	msgPat7:indexType;
	flag_pat7:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat8Set.content[i]].aencKey]);
      if (key_inv.k.ag = Intruder) then
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

ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "encrypt 8"	---pat8
      i<=pat7Set.length & pat7Set.content[i] != 0 & Spy_known[pat7Set.content[i]] &
      j<=pat3Set.length & pat3Set.content[j] != 0 & Spy_known[pat3Set.content[j]] &
      !Spy_known[construct8By73(pat7Set.content[i],pat3Set.content[j])]
      ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat3Set.content[j]].k.encType=PK) then
          encMsgNo := construct8By73(pat7Set.content[i],pat3Set.content[j]);
          if (!exist(pat8Set,encMsgNo)) then
            pat8Set.length := pat8Set.length+1;
            pat8Set.content[pat8Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(Host.r.Server.aenc{< Host.r.Server >}sk(Server))

ruleset i:msgLen do 
  rule "deconcat 9"	---pat9
    i<=pat9Set.length & pat9Set.content[i] != 0 & Spy_known[pat9Set.content[i]] &
    !(Spy_known[msgs[pat9Set.content[i]].concatPart[1]] & Spy_known[msgs[pat9Set.content[i]].concatPart[2]])
    ==>
    var msgPat1,msgPat6:indexType;
        flag_pat1,flag_pat6:boolean;
    begin
      if (!Spy_known[msgs[pat9Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat9Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat9Set.content[i]].concatPart[1];
        isPat1(msgs[msgPat1],flag_pat1);
        if (flag_pat1) then
          if(!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat9Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat9Set.content[i]].concatPart[2]]:=true;
        msgPat6 := msgs[pat9Set.content[i]].concatPart[2];
        isPat6(msgs[msgPat6],flag_pat6);
        if (flag_pat6) then
          if(!exist(pat6Set,msgPat6)) then
             pat6Set.length:=pat6Set.length+1;
             pat6Set.content[pat6Set.length] := msgPat6;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i0: msgLen do
  ruleset i1: msgLen do
  ruleset i2: msgLen do
  ruleset i3: msgLen do 
    rule "enconcat 9"	---pat9
      i0<=pat1Set.length & Spy_known[pat1Set.content[i0]] &
      i1<=pat6Set.length & Spy_known[pat6Set.content[i1]] &
      i2<=pat1Set.length & Spy_known[pat1Set.content[i2]] &
      i3<=pat8Set.length & Spy_known[pat8Set.content[i3]] &
      !Spy_known[construct9By1618(pat1Set.content[i0],pat6Set.content[i1],pat1Set.content[i2],pat8Set.content[i3])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct9By1618(pat1Set.content[i0],pat6Set.content[i1],pat1Set.content[i2],pat8Set.content[i3]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat9Set,concatMsgNo)) then
          pat9Set.length:=pat9Set.length+1;
          pat9Set.content[pat9Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;
endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(Host.r)

ruleset i:msgLen do 
  rule "deconcat 10"	---pat10
    i<=pat10Set.length & pat10Set.content[i] != 0 & Spy_known[pat10Set.content[i]] &
    !(Spy_known[msgs[pat10Set.content[i]].concatPart[1]] & Spy_known[msgs[pat10Set.content[i]].concatPart[2]])
    ==>
    var msgPat1,msgPat6:indexType;
        flag_pat1,flag_pat6:boolean;
    begin
      if (!Spy_known[msgs[pat10Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat10Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat10Set.content[i]].concatPart[1];
        isPat1(msgs[msgPat1],flag_pat1);
        if (flag_pat1) then
          if(!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat10Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat10Set.content[i]].concatPart[2]]:=true;
        msgPat6 := msgs[pat10Set.content[i]].concatPart[2];
        isPat6(msgs[msgPat6],flag_pat6);
        if (flag_pat6) then
          if(!exist(pat6Set,msgPat6)) then
             pat6Set.length:=pat6Set.length+1;
             pat6Set.content[pat6Set.length] := msgPat6;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i0: msgLen do
  ruleset i1: msgLen do 
    rule "enconcat 10"	---pat10
      i0<=pat1Set.length & Spy_known[pat1Set.content[i0]] &
      i1<=pat6Set.length & Spy_known[pat6Set.content[i1]] &
      !Spy_known[construct10By16(pat1Set.content[i0],pat6Set.content[i1])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct10By16(pat1Set.content[i0],pat6Set.content[i1]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat10Set,concatMsgNo)) then
          pat10Set.length:=pat10Set.length+1;
          pat10Set.content[pat10Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc(Host.r,sk(Host)), for intruder
ruleset i:msgLen do 
  rule "decrypt 11"	---pat11
    i<=pat11Set.length & pat11Set.content[i] != 0 & Spy_known[pat11Set.content[i]] &
    !Spy_known[msgs[pat11Set.content[i]].aencMsg]
    ==>
    var key_inv:Message;
	msgPat10:indexType;
	flag_pat10:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat11Set.content[i]].aencKey]);
      if (key_inv.k.ag = Intruder) then
        Spy_known[msgs[pat11Set.content[i]].aencMsg]:=true;
        msgPat10:=msgs[pat11Set.content[i]].aencMsg;
        isPat10(msgs[msgPat10],flag_pat10);
        if (flag_pat10) then
          if (!exist(pat10Set,msgPat10)) then
            pat10Set.length:=pat10Set.length+1;
            pat10Set.content[pat10Set.length]:=msgPat10;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "encrypt 11"	---pat11
      i<=pat10Set.length & pat10Set.content[i] != 0 & Spy_known[pat10Set.content[i]] &
      j<=pat3Set.length & pat3Set.content[j] != 0 & Spy_known[pat3Set.content[j]] &
      !Spy_known[construct11By103(pat10Set.content[i],pat3Set.content[j])]
      ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat3Set.content[j]].k.encType=PK) then
          encMsgNo := construct11By103(pat10Set.content[i],pat3Set.content[j]);
          if (!exist(pat11Set,encMsgNo)) then
            pat11Set.length := pat11Set.length+1;
            pat11Set.content[pat11Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(Host.r.aenc{< Host.r >}sk(Host))

ruleset i:msgLen do 
  rule "deconcat 12"	---pat12
    i<=pat12Set.length & pat12Set.content[i] != 0 & Spy_known[pat12Set.content[i]] &
    !(Spy_known[msgs[pat12Set.content[i]].concatPart[1]] & Spy_known[msgs[pat12Set.content[i]].concatPart[2]])
    ==>
    var msgPat1,msgPat6:indexType;
        flag_pat1,flag_pat6:boolean;
    begin
      if (!Spy_known[msgs[pat12Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat12Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat12Set.content[i]].concatPart[1];
        isPat1(msgs[msgPat1],flag_pat1);
        if (flag_pat1) then
          if(!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat12Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat12Set.content[i]].concatPart[2]]:=true;
        msgPat6 := msgs[pat12Set.content[i]].concatPart[2];
        isPat6(msgs[msgPat6],flag_pat6);
        if (flag_pat6) then
          if(!exist(pat6Set,msgPat6)) then
             pat6Set.length:=pat6Set.length+1;
             pat6Set.content[pat6Set.length] := msgPat6;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i0: msgLen do
  ruleset i1: msgLen do
  ruleset i2: msgLen do 
    rule "enconcat 12"	---pat12
      i0<=pat1Set.length & Spy_known[pat1Set.content[i0]] &
      i1<=pat6Set.length & Spy_known[pat6Set.content[i1]] &
      i2<=pat11Set.length & Spy_known[pat11Set.content[i2]] &
      !Spy_known[construct12By1611(pat1Set.content[i0],pat6Set.content[i1],pat11Set.content[i2])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct12By1611(pat1Set.content[i0],pat6Set.content[i1],pat11Set.content[i2]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat12Set,concatMsgNo)) then
          pat12Set.length:=pat12Set.length+1;
          pat12Set.content[pat12Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc(hostipsk,pk(Host)), for intruder
ruleset i:msgLen do 
  rule "decrypt 13"	---pat13
    i<=pat13Set.length & pat13Set.content[i] != 0 & Spy_known[pat13Set.content[i]] &
    !Spy_known[msgs[pat13Set.content[i]].aencMsg]
    ==>
    var key_inv:Message;
	msgPat6:indexType;
	flag_pat6:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat13Set.content[i]].aencKey]);
      if (key_inv.k.ag = Intruder) then
        Spy_known[msgs[pat13Set.content[i]].aencMsg]:=true;
        msgPat6:=msgs[pat13Set.content[i]].aencMsg;
        isPat6(msgs[msgPat6],flag_pat6);
        if (flag_pat6) then
          if (!exist(pat6Set,msgPat6)) then
            pat6Set.length:=pat6Set.length+1;
            pat6Set.content[pat6Set.length]:=msgPat6;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "encrypt 13"	---pat13
      i<=pat6Set.length & pat6Set.content[i] != 0 & Spy_known[pat6Set.content[i]] &
      j<=pat3Set.length & pat3Set.content[j] != 0 & Spy_known[pat3Set.content[j]] &
      !Spy_known[construct13By63(pat6Set.content[i],pat3Set.content[j])]
      ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat3Set.content[j]].k.encType=PK) then
          encMsgNo := construct13By63(pat6Set.content[i],pat3Set.content[j]);
          if (!exist(pat13Set,encMsgNo)) then
            pat13Set.length := pat13Set.length+1;
            pat13Set.content[pat13Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(Host.HostIP.Gateway.aenc{< hostipsk >}pk(Host).Server)

ruleset i:msgLen do 
  rule "deconcat 14"	---pat14
    i<=pat14Set.length & pat14Set.content[i] != 0 & Spy_known[pat14Set.content[i]] &
    !(Spy_known[msgs[pat14Set.content[i]].concatPart[1]] & Spy_known[msgs[pat14Set.content[i]].concatPart[2]])
    ==>
    var msgPat1,msgPat6:indexType;
        flag_pat1,flag_pat6:boolean;
    begin
      if (!Spy_known[msgs[pat14Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat14Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat14Set.content[i]].concatPart[1];
        isPat1(msgs[msgPat1],flag_pat1);
        if (flag_pat1) then
          if(!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat14Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat14Set.content[i]].concatPart[2]]:=true;
        msgPat6 := msgs[pat14Set.content[i]].concatPart[2];
        isPat6(msgs[msgPat6],flag_pat6);
        if (flag_pat6) then
          if(!exist(pat6Set,msgPat6)) then
             pat6Set.length:=pat6Set.length+1;
             pat6Set.content[pat6Set.length] := msgPat6;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i0: msgLen do
  ruleset i1: msgLen do
  ruleset i2: msgLen do
  ruleset i3: msgLen do
  ruleset i4: msgLen do 
    rule "enconcat 14"	---pat14
      i0<=pat1Set.length & Spy_known[pat1Set.content[i0]] &
      i1<=pat6Set.length & Spy_known[pat6Set.content[i1]] &
      i2<=pat1Set.length & Spy_known[pat1Set.content[i2]] &
      i3<=pat13Set.length & Spy_known[pat13Set.content[i3]] &
      i4<=pat1Set.length & Spy_known[pat1Set.content[i4]] &
      !Spy_known[construct14By161131(pat1Set.content[i0],pat6Set.content[i1],pat1Set.content[i2],pat13Set.content[i3],pat1Set.content[i4])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct14By161131(pat1Set.content[i0],pat6Set.content[i1],pat1Set.content[i2],pat13Set.content[i3],pat1Set.content[i4]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat14Set,concatMsgNo)) then
          pat14Set.length:=pat14Set.length+1;
          pat14Set.content[pat14Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;
endruleset;
endruleset;
endruleset;

--- encrypt and decrypt rules of pat: aenc(Host.HostIP.Gateway.aenc{< hostipsk >}pk(Host).Server,sk(Server)), for intruder
ruleset i:msgLen do 
  rule "decrypt 15"	---pat15
    i<=pat15Set.length & pat15Set.content[i] != 0 & Spy_known[pat15Set.content[i]] &
    !Spy_known[msgs[pat15Set.content[i]].aencMsg]
    ==>
    var key_inv:Message;
	msgPat14:indexType;
	flag_pat14:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat15Set.content[i]].aencKey]);
      if (key_inv.k.ag = Intruder) then
        Spy_known[msgs[pat15Set.content[i]].aencMsg]:=true;
        msgPat14:=msgs[pat15Set.content[i]].aencMsg;
        isPat14(msgs[msgPat14],flag_pat14);
        if (flag_pat14) then
          if (!exist(pat14Set,msgPat14)) then
            pat14Set.length:=pat14Set.length+1;
            pat14Set.content[pat14Set.length]:=msgPat14;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "encrypt 15"	---pat15
      i<=pat14Set.length & pat14Set.content[i] != 0 & Spy_known[pat14Set.content[i]] &
      j<=pat3Set.length & pat3Set.content[j] != 0 & Spy_known[pat3Set.content[j]] &
      !Spy_known[construct15By143(pat14Set.content[i],pat3Set.content[j])]
      ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat3Set.content[j]].k.encType=PK) then
          encMsgNo := construct15By143(pat14Set.content[i],pat3Set.content[j]);
          if (!exist(pat15Set,encMsgNo)) then
            pat15Set.length := pat15Set.length+1;
            pat15Set.content[pat15Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
  endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(Host.HostIP.Gateway.aenc{< hostipsk >}pk(Host).Server.aenc{< Host.HostIP.Gateway.aenc{< hostipsk >}pk(Host).Server >}sk(Server))

ruleset i:msgLen do 
  rule "deconcat 16"	---pat16
    i<=pat16Set.length & pat16Set.content[i] != 0 & Spy_known[pat16Set.content[i]] &
    !(Spy_known[msgs[pat16Set.content[i]].concatPart[1]] & Spy_known[msgs[pat16Set.content[i]].concatPart[2]])
    ==>
    var msgPat1,msgPat6:indexType;
        flag_pat1,flag_pat6:boolean;
    begin
      if (!Spy_known[msgs[pat16Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat16Set.content[i]].concatPart[1]]:=true;
        msgPat1 := msgs[pat16Set.content[i]].concatPart[1];
        isPat1(msgs[msgPat1],flag_pat1);
        if (flag_pat1) then
          if(!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat16Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat16Set.content[i]].concatPart[2]]:=true;
        msgPat6 := msgs[pat16Set.content[i]].concatPart[2];
        isPat6(msgs[msgPat6],flag_pat6);
        if (flag_pat6) then
          if(!exist(pat6Set,msgPat6)) then
             pat6Set.length:=pat6Set.length+1;
             pat6Set.content[pat6Set.length] := msgPat6;
          endif;
        endif;
      endif;
    end;
endruleset;

ruleset i0: msgLen do
  ruleset i1: msgLen do
  ruleset i2: msgLen do
  ruleset i3: msgLen do
  ruleset i4: msgLen do
  ruleset i5: msgLen do 
    rule "enconcat 16"	---pat16
      i0<=pat1Set.length & Spy_known[pat1Set.content[i0]] &
      i1<=pat6Set.length & Spy_known[pat6Set.content[i1]] &
      i2<=pat1Set.length & Spy_known[pat1Set.content[i2]] &
      i3<=pat13Set.length & Spy_known[pat13Set.content[i3]] &
      i4<=pat1Set.length & Spy_known[pat1Set.content[i4]] &
      i5<=pat15Set.length & Spy_known[pat15Set.content[i5]] &
      !Spy_known[construct16By16113115(pat1Set.content[i0],pat6Set.content[i1],pat1Set.content[i2],pat13Set.content[i3],pat1Set.content[i4],pat15Set.content[i5])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct16By16113115(pat1Set.content[i0],pat6Set.content[i1],pat1Set.content[i2],pat13Set.content[i3],pat1Set.content[i4],pat15Set.content[i5]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat16Set,concatMsgNo)) then
          pat16Set.length:=pat16Set.length+1;
          pat16Set.content[pat16Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;
endruleset;
endruleset;
endruleset;
endruleset;

startstate
  roleHost[1].Host := HostID;
  roleHost[1].Gateway := GatewayIP;
  roleHost[1].st := Host1;
  roleHost[1].commit := false;
  roleHost[1].r := anyNonce;
  roleHost[1].HostIP := anyNonce;
  roleHost[1].hostipsk := anyNonce;
  roleHost[1].Server := anyAgent;
  roleGateway[1].Host := HostID;
  roleGateway[1].Server := ServerIP;
  roleGateway[1].Gateway := GatewayIP;
  roleGateway[1].st := Gateway1;
  roleGateway[1].commit := false;
  roleGateway[1].r := anyNonce;
  roleGateway[1].HostIP := anyNonce;
  roleGateway[1].hostipsk := anyNonce;
  roleServer[1].Host := HostID;
  roleServer[1].Gateway := GatewayIP;
  roleServer[1].Server := ServerIP;
  roleServer[1].r := Na;
  roleServer[1].HostIP := HostIP;
  roleServer[1].hostipsk := secSK;
  roleServer[1].st := Server1;
  roleServer[1].commit := false;
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
    pat8Set.content[i] := 0;
    pat9Set.content[i] := 0;
    pat10Set.content[i] := 0;
    pat11Set.content[i] := 0;
    pat12Set.content[i] := 0;
    pat13Set.content[i] := 0;
    pat14Set.content[i] := 0;
    pat15Set.content[i] := 0;
    pat16Set.content[i] := 0;
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
  pat8Set.length := 0;
  pat9Set.length := 0;
  pat10Set.length := 0;
  pat11Set.length := 0;
  pat12Set.length := 0;
  pat13Set.length := 0;
  pat14Set.length := 0;
  pat15Set.length := 0;
  pat16Set.length := 0;
  for i : roleHostNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleHost[i].Host;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat3Set.length := pat3Set.length + 1;
    pat3Set.content[pat3Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleGatewayNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleGateway[i].Gateway;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat3Set.length := pat3Set.length + 1;
    pat3Set.content[pat3Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleServerNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleServer[i].Server;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat3Set.length := pat3Set.length + 1;
    pat3Set.content[pat3Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;

  gatewayCh1Pat := 0; --- indexType; ---according to the actions
  serverCh2Pat  := 0; --- indexType;
  gatewayCh3Pat := 0; --- indexType;
  hostCh4Pat    := 0; --- indexType;
  gatewayCh5Pat := 0; --- indexType;
  serverCh6Pat  := 0; --- indexType;
  gatewayCh7Pat := 0; --- indexType;
  hostCh8Pat    := 0; --- indexType;
end;

invariant "sec1"
  forall i:indexType do
    (msgs[i].msgType=nonce & msgs[i].noncePart = secSK)
    ->
    Spy_known[i] = false
end;

invariant "auth1"
  forall i: roleServerNums do
    roleServer[i].commit = true 
    ->
    (exists j: roleHostNums do
      ---roleHost[j].commit = true &
      roleHost[i].r = roleServer[j].r
    endexists)
  endforall;
