const
  roleHostNum:1;
  roleGatewayNum:1;
  roleServerNum:1;
  totalFact:1000;
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
  sPat1Set: msgSet;
  pat2Set: msgSet;
  sPat2Set: msgSet;
  pat3Set: msgSet;
  sPat3Set: msgSet;
  pat4Set: msgSet;
  sPat4Set: msgSet;
  pat5Set: msgSet;
  sPat5Set: msgSet;
  pat6Set: msgSet;
  sPat6Set: msgSet;
  pat7Set: msgSet;
  sPat7Set: msgSet;
  pat8Set: msgSet;
  sPat8Set: msgSet;
  pat9Set: msgSet;
  sPat9Set: msgSet;
  pat10Set: msgSet;
  sPat10Set: msgSet;
  pat11Set: msgSet;
  sPat11Set: msgSet;
  pat12Set: msgSet;
  sPat12Set: msgSet;
  pat13Set: msgSet;
  sPat13Set: msgSet;
  pat14Set: msgSet;
  sPat14Set: msgSet;

  Spy_known: Array[indexType] of boolean;
  ---systemEvent   : array[eventNums] of Event;
  ---eve_end       : eventNums;
  emit: Array[indexType] of boolean;
  gnum : indexType;


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

---spat1: Host 
procedure constructSpat1(Host:AgentType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = agent) then
        if (msgs[i].ag = Host) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := agent;
      msgs[index].ag := Host;
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat1\n";
    sPat1Set.length := sPat1Set.length + 1;
    sPat1Set.content[sPat1Set.length] := index;
    num := index;
  end;

---pat2: Host 
procedure lookAddPat2(Host:AgentType; Var msg:Message; Var num : indexType);
  Var msg1 : Message;
      index,i1 : indexType;
  begin
   index:=0;
   lookAddPat1(Host,msg1,i1);
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 1) then
       if (msgs[i].concatPart[1] = i1) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1] := i1; 
     msgs[index].length := 1;
    endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat2: Host 
procedure isPat2(msg:Message; Var flag:boolean);
  var flag1, flagPart1: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
       if (flagPart1) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat2: Host 
procedure constructSpat2(Host:AgentType; Var num: indexType);
  Var i,index, i1:indexType;
  begin
    index:=0;
    constructSpat1(Host, i1);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 1) then
        if (msgs[i].concatPart[1] = i1) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := concat;
      msgs[index].concatPart[1] := i1;
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat2\n";
    sPat2Set.length := sPat2Set.length + 1;
    sPat2Set.content[sPat2Set.length] := index;
    num := index;
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

---spat3: sk(Host) 
procedure constructSpat3(HostSk :AgentType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = key & msgs[i].k.encType = SK) then
        if (msgs[i].k.ag = HostSk) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType := SK;
      msgs[index].k.ag := HostSk;
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat3\n";
    sPat3Set.length := sPat3Set.length + 1;
    sPat3Set.content[sPat3Set.length] := index;
    num := index;
  end;

---pat4: aenc{< Host >}sk(Host) 
procedure lookAddPat4(Host:AgentType; HostSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat2(Host,msg1,i1);
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
     msgs[index].aencMsg := i1; 
     msgs[index].aencKey := i2; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat4: aenc{< Host >}sk(Host) 
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

---spat4: aenc{< Host >}sk(Host) 
procedure constructSpat4(Host:AgentType; HostSk :AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat2(Host, i1);
    constructSpat3(HostSk, i2);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = aenc) then
        if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := aenc;
      msgs[index].aencMsg := i1; 
      msgs[index].aencKey := i2; 
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat4\n";
    sPat4Set.length := sPat4Set.length + 1;
    sPat4Set.content[sPat4Set.length] := index;
    num := index;
  end;

---pat5: Host.aenc{< Host >}sk(Host) 
procedure lookAddPat5(Host:AgentType; HostSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat1(Host,msg1,i1);
   lookAddPat4(Host,HostSk,msg2,i2);
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

---pat5: Host.aenc{< Host >}sk(Host) 
procedure isPat5(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat4(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat5: Host.aenc{< Host >}sk(Host) 
procedure constructSpat5(Host:AgentType; HostSk :AgentType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat1(Host, i1);
    constructSpat4(Host, HostSk, i2);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 2) then
        if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := concat;
      msgs[index].concatPart[1] := i1;
      msgs[index].concatPart[2] := i2;
      msgs[index].length := 2;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat5\n";
    sPat5Set.length := sPat5Set.length + 1;
    sPat5Set.content[sPat5Set.length] := index;
    num := index;
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

---spat6: r 
procedure constructSpat6(r:NonceType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = nonce) then
        if (msgs[i].noncePart = r) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := nonce;
      msgs[index].noncePart := r;
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat6\n";
    sPat6Set.length := sPat6Set.length + 1;
    sPat6Set.content[sPat6Set.length] := index;
    num := index;
  end;

---pat7: r 
procedure lookAddPat7(r:NonceType; Var msg:Message; Var num : indexType);
  Var msg1 : Message;
      index,i1 : indexType;
  begin
   index:=0;
   lookAddPat6(r,msg1,i1);
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 1) then
       if (msgs[i].concatPart[1] = i1) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1] := i1; 
     msgs[index].length := 1;
    endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat7: r 
procedure isPat7(msg:Message; Var flag:boolean);
  var flag1, flagPart1: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     if(msg.msgType = concat) then
        isPat6(msgs[msg.concatPart[1]],flagPart1);
       if (flagPart1) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat7: r 
procedure constructSpat7(r:NonceType; Var num: indexType);
  Var i,index, i1:indexType;
  begin
    index:=0;
    constructSpat6(r, i1);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 1) then
        if (msgs[i].concatPart[1] = i1) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := concat;
      msgs[index].concatPart[1] := i1;
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat7\n";
    sPat7Set.length := sPat7Set.length + 1;
    sPat7Set.content[sPat7Set.length] := index;
    num := index;
  end;

---pat8: aenc{< r >}sk(Server) 
procedure lookAddPat8(r:NonceType; ServerSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat7(r,msg1,i1);
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
     msgs[index].aencMsg := i1; 
     msgs[index].aencKey := i2; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat8: aenc{< r >}sk(Server) 
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

---spat8: aenc{< r >}sk(Server) 
procedure constructSpat8(r:NonceType; ServerSk :AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat7(r, i1);
    constructSpat3(ServerSk, i2);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = aenc) then
        if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := aenc;
      msgs[index].aencMsg := i1; 
      msgs[index].aencKey := i2; 
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat8\n";
    sPat8Set.length := sPat8Set.length + 1;
    sPat8Set.content[sPat8Set.length] := index;
    num := index;
  end;

---pat9: r.aenc{< r >}sk(Server) 
procedure lookAddPat9(r:NonceType; ServerSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat6(r,msg1,i1);
   lookAddPat8(r,ServerSk,msg2,i2);
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

---pat9: r.aenc{< r >}sk(Server) 
procedure isPat9(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat6(msgs[msg.concatPart[1]],flagPart1);
        isPat8(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat9: r.aenc{< r >}sk(Server) 
procedure constructSpat9(r:NonceType; ServerSk :AgentType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat6(r, i1);
    constructSpat8(r, ServerSk, i2);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 2) then
        if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := concat;
      msgs[index].concatPart[1] := i1;
      msgs[index].concatPart[2] := i2;
      msgs[index].length := 2;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat9\n";
    sPat9Set.length := sPat9Set.length + 1;
    sPat9Set.content[sPat9Set.length] := index;
    num := index;
  end;

---pat10: pk(Host) 
procedure lookAddPat10(HostPk :AgentType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    index:=0;
    for i: indexType do
      if (msgs[i].msgType = key) then
        if (msgs[i].k.encType = PK & msgs[i].k.ag = HostPk) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType:=PK; 
      msgs[index].k.ag:=HostPk;
      msgs[index].length := 1;
    endif;
    num:=index;
    msg:=msgs[index];
  end;

---pat10: pk(Host) 
procedure isPat10(msg:Message; Var flag:boolean);
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

---spat10: pk(Host) 
procedure constructSpat10(HostPk :AgentType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = key & msgs[i].k.encType = PK) then
        if (msgs[i].k.ag = HostPk) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType := PK;
      msgs[index].k.ag := HostPk;
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat10\n";
    sPat10Set.length := sPat10Set.length + 1;
    sPat10Set.content[sPat10Set.length] := index;
    num := index;
  end;

---pat11: aenc{< hostipsk >}pk(Host) 
procedure lookAddPat11(hostipsk:NonceType; HostPk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat6(hostipsk,msg1,i1);
   lookAddPat10(HostPk,msg2,i2);
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
     msgs[index].aencMsg := i1; 
     msgs[index].aencKey := i2; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat11: aenc{< hostipsk >}pk(Host) 
procedure isPat11(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat6(msgs[msg.aencMsg],flagPart1);
      isPat10(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat11: aenc{< hostipsk >}pk(Host) 
procedure constructSpat11(hostipsk:NonceType; HostPk :AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat6(hostipsk, i1);
    constructSpat10(HostPk, i2);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = aenc) then
        if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := aenc;
      msgs[index].aencMsg := i1; 
      msgs[index].aencKey := i2; 
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat11\n";
    sPat11Set.length := sPat11Set.length + 1;
    sPat11Set.content[sPat11Set.length] := index;
    num := index;
  end;

---pat12: HostIP.aenc{< hostipsk >}pk(Host) 
procedure lookAddPat12(HostIP:NonceType; hostipsk:NonceType; HostPk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat6(HostIP,msg1,i1);
   lookAddPat11(hostipsk,HostPk,msg2,i2);
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

---pat12: HostIP.aenc{< hostipsk >}pk(Host) 
procedure isPat12(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat6(msgs[msg.concatPart[1]],flagPart1);
        isPat11(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat12: HostIP.aenc{< hostipsk >}pk(Host) 
procedure constructSpat12(HostIP:NonceType; hostipsk:NonceType; HostPk :AgentType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat6(HostIP, i1);
    constructSpat11(hostipsk, HostPk, i2);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 2) then
        if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := concat;
      msgs[index].concatPart[1] := i1;
      msgs[index].concatPart[2] := i2;
      msgs[index].length := 2;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat12\n";
    sPat12Set.length := sPat12Set.length + 1;
    sPat12Set.content[sPat12Set.length] := index;
    num := index;
  end;

---pat13: aenc{< HostIP.aenc{< hostipsk >}pk(Host) >}sk(Server) 
procedure lookAddPat13(HostIP:NonceType; hostipsk:NonceType; HostPk :AgentType; ServerSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat12(HostIP, hostipsk, HostPk,msg1,i1);
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
     msgs[index].aencMsg := i1; 
     msgs[index].aencKey := i2; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat13: aenc{< HostIP.aenc{< hostipsk >}pk(Host) >}sk(Server) 
procedure isPat13(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat12(msgs[msg.aencMsg],flagPart1);
      isPat3(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat13: aenc{< HostIP.aenc{< hostipsk >}pk(Host) >}sk(Server) 
procedure constructSpat13(HostIP:NonceType; hostipsk:NonceType; HostPk :AgentType; ServerSk :AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat12(HostIP, hostipsk, HostPk, i1);
    constructSpat3(ServerSk, i2);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = aenc) then
        if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := aenc;
      msgs[index].aencMsg := i1; 
      msgs[index].aencKey := i2; 
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat13\n";
    sPat13Set.length := sPat13Set.length + 1;
    sPat13Set.content[sPat13Set.length] := index;
    num := index;
  end;

---pat14: HostIP.aenc{< hostipsk >}pk(Host).aenc{< HostIP.aenc{< hostipsk >}pk(Host) >}sk(Server) 
procedure lookAddPat14(HostIP:NonceType; hostipsk:NonceType; HostPk :AgentType; ServerSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3 : Message;
      index,i1,i2,i3 : indexType;
  begin
   index:=0;
   lookAddPat6(HostIP,msg1,i1);
   lookAddPat11(hostipsk,HostPk,msg2,i2);
   lookAddPat13(HostIP,hostipsk,HostPk,ServerSk,msg3,i3);
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

---pat14: HostIP.aenc{< hostipsk >}pk(Host).aenc{< HostIP.aenc{< hostipsk >}pk(Host) >}sk(Server) 
procedure isPat14(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     if(msg.msgType = concat) then
        isPat6(msgs[msg.concatPart[1]],flagPart1);
        isPat11(msgs[msg.concatPart[2]],flagPart2);
        isPat13(msgs[msg.concatPart[3]],flagPart3);
       if (flagPart1 & flagPart2 & flagPart3) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat14: HostIP.aenc{< hostipsk >}pk(Host).aenc{< HostIP.aenc{< hostipsk >}pk(Host) >}sk(Server) 
procedure constructSpat14(HostIP:NonceType; hostipsk:NonceType; HostPk :AgentType; ServerSk :AgentType; Var num: indexType);
  Var i,index, i1, i2, i3:indexType;
  begin
    index:=0;
    constructSpat6(HostIP, i1);
    constructSpat11(hostipsk, HostPk, i2);
    constructSpat13(HostIP, hostipsk, HostPk, ServerSk, i3);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 3) then
        if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2 & msgs[i].concatPart[3] = i3) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := concat;
      msgs[index].concatPart[1] := i1;
      msgs[index].concatPart[2] := i2;
      msgs[index].concatPart[3] := i3;
      msgs[index].length := 3;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat14\n";
    sPat14Set.length := sPat14Set.length + 1;
    sPat14Set.content[sPat14Set.length] := index;
    num := index;
  end;

procedure cons1(Host:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat1(Host,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat1\n";
  end;
procedure cons2(Host:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat2(Host,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat2\n";
  end;
procedure destruct2(msg:Message; Var Host:AgentType);
  Var msgNum1: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Host := msgNum1.ag
  end;
procedure cons3(HostSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat3(HostSk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat3\n";
  end;
procedure cons4(Host:AgentType; HostSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat4(Host, HostSk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat4\n";
  end;
procedure destruct4(msg:Message; Var Host:AgentType; Var HostSk:AgentType);
  var k1:KeyType;
    msg1,msgNum1:Message;
  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
   HostSk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart[1]];
    Host:=msgNum1.ag;
  end;
procedure cons5(Host:AgentType; HostSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat5(Host, HostSk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat5\n";
  end;
procedure destruct5(msg:Message; Var Host:AgentType; Var HostSk:AgentType);
  Var msgNum1,msgNum2: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Host := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    k := msgs[msgNum2.aencKey].k;
    HostSk := k.ag;

  end;
procedure cons6(r:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(r,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat6\n";
  end;
procedure cons7(r:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat7(r,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat7\n";
  end;
procedure destruct7(msg:Message; Var r:NonceType);
  Var msgNum1: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    r := msgNum1.noncePart
  end;
procedure cons8(r:NonceType; ServerSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat8(r, ServerSk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat8\n";
  end;
procedure destruct8(msg:Message; Var r:NonceType; Var ServerSk:AgentType);
  var k1:KeyType;
    msg1,msgNum1:Message;
  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
   ServerSk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart[1]];
    r:=msgNum1.noncePart;
  end;
procedure cons9(r:NonceType; ServerSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat9(r, ServerSk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat9\n";
  end;
procedure destruct9(msg:Message; Var r:NonceType; Var ServerSk:AgentType);
  Var msgNum1,msgNum2: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    r := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart[2]];
    k := msgs[msgNum2.aencKey].k;
    ServerSk := k.ag;

  end;
procedure cons10(HostPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat10(HostPk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat10\n";
  end;
procedure cons11(hostipsk:NonceType; HostPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat11(hostipsk, HostPk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat11\n";
  end;
procedure destruct11(msg:Message; Var hostipsk:NonceType; Var HostPk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2:Message;
   begin
    clear msg1;
    k1 := msgs[msg.aencKey].k;
    HostPk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    hostipsk:=msg1.noncePart;
  end;
procedure cons12(HostIP:NonceType; hostipsk:NonceType; HostPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat12(HostIP, hostipsk, HostPk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat12\n";
  end;
procedure destruct12(msg:Message; Var HostIP:NonceType; Var hostipsk:NonceType; Var HostPk:AgentType);
  Var msgNum1,msgNum2: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    HostIP := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart[2]];
    k := msgs[msgNum2.aencKey].k;
    HostPk := k.ag;
    hostipsk := msgs[msgNum2.aencMsg].noncePart
  end;
procedure cons13(HostIP:NonceType; hostipsk:NonceType; HostPk :AgentType; ServerSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat13(HostIP, hostipsk, HostPk, ServerSk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat13\n";
  end;
procedure destruct13(msg:Message; Var HostIP:NonceType; Var hostipsk:NonceType; Var HostPk:AgentType; Var ServerSk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2:Message;
  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
   ServerSk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart[1]];
    msgNum2:=msgs[msg1.concatPart[2]];
    HostIP:=msgNum1.noncePart;
  end;
procedure cons14(HostIP:NonceType; hostipsk:NonceType; HostPk :AgentType; ServerSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat14(HostIP, hostipsk, HostPk, ServerSk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat14\n";
  end;
procedure destruct14(msg:Message; Var HostIP:NonceType; Var hostipsk:NonceType; Var HostPk:AgentType; Var ServerSk:AgentType);
  Var msgNum1,msgNum2,msgNum3: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    HostIP := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart[2]];
    k := msgs[msgNum2.aencKey].k;
    HostPk := k.ag;
    hostipsk := msgs[msgNum2.aencMsg].noncePart;
    msgNum3 := msgs[msg.concatPart[3]];
    k := msgs[msgNum3.aencKey].k;
    ServerSk := k.ag;

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

function construct2By1(msgNo1:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 1) then
       if (msgs[i].concatPart[1] = msgNo1) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1] := msgNo1;
     msgs[index].length := 1;
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

function construct5By14(msgNo1,msgNo2:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 2) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2) then
         index := i;
       endif;
     endif;
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

function construct7By6(msgNo1:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 1) then
       if (msgs[i].concatPart[1] = msgNo1) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := concat;
     msgs[index].concatPart[1] := msgNo1;
     msgs[index].length := 1;
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

function construct9By68(msgNo1,msgNo2:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 2) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2) then
         index := i;
       endif;
     endif;
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

function construct11By610(msgNo6, msgNo10:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo6 & msgs[i].aencKey = msgNo10) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo6;
     msgs[index].aencKey := msgNo10;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct12By611(msgNo1,msgNo2:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 2) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2) then
         index := i;
       endif;
     endif;
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

function construct13By123(msgNo12, msgNo3:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo12 & msgs[i].aencKey = msgNo3) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo12;
     msgs[index].aencKey := msgNo3;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct14By61113(msgNo1,msgNo2,msgNo3:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 3) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3) then
         index := i;
       endif;
     endif;
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
  end;

function matchPat(var m1:Message; sPatnSet: msgSet):boolean;
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
  end;
procedure deconcatPat2(msg: Message);
  var msgPat1:indexType;
  	  flagPat1:boolean;
  begin
    if (!Spy_known[msg.concatPart[1]]) then
      Spy_known[msg.concatPart[1]] := true;
      msgPat1 := msg.concatPart[1];
      isPat1(msgs[msgPat1],flagPat1);
      if (flagPat1) then
        if(!exist(pat1Set,msgPat1)) then
           pat1Set.length:=pat1Set.length+1;
           pat1Set.content[pat1Set.length] := msgPat1;
        endif;
      endif;
    endif;
  end;

procedure enconcatPat2();
  var i1, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat1Set.length) do
      if (matchPat(msgs[construct2By1(pat1Set.content[i1])], sPat2Set) &
          !Spy_known[construct2By1(pat1Set.content[i1])]) then
           concatMsgNo := construct2By1(pat1Set.content[i1]);
           if (!exist(pat2Set,concatMsgNo)) then
               pat2Set.length := pat2Set.length+1;
               pat2Set.content[pat2Set.length]:=concatMsgNo;
           endif; 
           if (!Spy_known[concatMsgNo]) then
              Spy_known[concatMsgNo] := true;
           endif;
      endif;
      i1 := i1 + 1;
    endwhile;
  end;

procedure aDeryptionPat4(msg: Message);
  var key_inv:Message;
      msgPat2:indexType;
  	  flag_pat2:boolean;
  begin
    if (! Spy_known[msg.aencMsg]) then
       key_inv := inverseKey(msgs[msg.aencKey]);
       if (key_inv.k.ag = Intruder | key_inv.k.encType = PK) then
         Spy_known[msg.aencMsg]:=true;
         msgPat2:=msg.aencMsg;
         isPat2(msgs[msgPat2],flag_pat2);
         if (flag_pat2) then
           if (!exist(pat2Set,msgPat2)) then
             pat2Set.length:=pat2Set.length+1;
             pat2Set.content[pat2Set.length]:=msgPat2;
           endif;
         endif;
       endif;
    endif;
  end;

procedure aEncryptionPat4();
  var i, j, encMsgNo:indexType;
  begin
    i := 1;
    while (i <= pat2Set.length) do
      j := 1;
      while (j<=pat3Set.length) do
        if (matchPat(msgs[construct4By23(pat2Set.content[i],pat3Set.content[j])], sPat4Set) &
           !Spy_known[construct4By23(pat2Set.content[i],pat3Set.content[j])]) then
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
        endif;
        j := j+1;
      endwhile;
      i := i+1;
    endwhile;
  end;

procedure deconcatPat5(msg: Message);
  var msgPat1, msgPat2:indexType;
  	  flagPat1, flagPat2:boolean;
  begin
    if (!Spy_known[msg.concatPart[1]]) then
      Spy_known[msg.concatPart[1]] := true;
      msgPat1 := msg.concatPart[1];
      isPat1(msgs[msgPat1],flagPat1);
      if (flagPat1) then
        if(!exist(pat1Set,msgPat1)) then
           pat1Set.length:=pat1Set.length+1;
           pat1Set.content[pat1Set.length] := msgPat1;
        endif;
      endif;
    endif;
    if (!Spy_known[msg.concatPart[2]]) then
      Spy_known[msg.concatPart[2]] := true;
      msgPat2 := msg.concatPart[2];
      isPat4(msgs[msgPat2],flagPat2);
      if (flagPat2) then
        if(!exist(pat4Set,msgPat2)) then
           pat4Set.length:=pat4Set.length+1;
           pat4Set.content[pat4Set.length] := msgPat2;
        endif;
      endif;
    endif;
  end;

procedure enconcatPat5();
  var i1, i2, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat1Set.length) do
      i2 := 1;
      while (i2 <= pat4Set.length) do
        if (matchPat(msgs[construct5By14(pat1Set.content[i1], pat4Set.content[i2])], sPat5Set) &
            !Spy_known[construct5By14(pat1Set.content[i1], pat4Set.content[i2])]) then
             concatMsgNo := construct5By14(pat1Set.content[i1], pat4Set.content[i2]);
             if (!exist(pat5Set,concatMsgNo)) then
                 pat5Set.length := pat5Set.length+1;
                 pat5Set.content[pat5Set.length]:=concatMsgNo;
             endif; 
             if (!Spy_known[concatMsgNo]) then
                Spy_known[concatMsgNo] := true;
             endif;
        endif;
        i2 := i2 + 1;
      endwhile;
      i1 := i1 + 1;
    endwhile;
  end;

procedure deconcatPat7(msg: Message);
  var msgPat1:indexType;
  	  flagPat1:boolean;
  begin
    if (!Spy_known[msg.concatPart[1]]) then
      Spy_known[msg.concatPart[1]] := true;
      msgPat1 := msg.concatPart[1];
      isPat6(msgs[msgPat1],flagPat1);
      if (flagPat1) then
        if(!exist(pat6Set,msgPat1)) then
           pat6Set.length:=pat6Set.length+1;
           pat6Set.content[pat6Set.length] := msgPat1;
        endif;
      endif;
    endif;
  end;

procedure enconcatPat7();
  var i1, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat6Set.length) do
      if (matchPat(msgs[construct7By6(pat6Set.content[i1])], sPat7Set) &
          !Spy_known[construct7By6(pat6Set.content[i1])]) then
           concatMsgNo := construct7By6(pat6Set.content[i1]);
           if (!exist(pat7Set,concatMsgNo)) then
               pat7Set.length := pat7Set.length+1;
               pat7Set.content[pat7Set.length]:=concatMsgNo;
           endif; 
           if (!Spy_known[concatMsgNo]) then
              Spy_known[concatMsgNo] := true;
           endif;
      endif;
      i1 := i1 + 1;
    endwhile;
  end;

procedure aDeryptionPat8(msg: Message);
  var key_inv:Message;
      msgPat7:indexType;
  	  flag_pat7:boolean;
  begin
    if (! Spy_known[msg.aencMsg]) then
       key_inv := inverseKey(msgs[msg.aencKey]);
       if (key_inv.k.ag = Intruder | key_inv.k.encType = PK) then
         Spy_known[msg.aencMsg]:=true;
         msgPat7:=msg.aencMsg;
         isPat7(msgs[msgPat7],flag_pat7);
         if (flag_pat7) then
           if (!exist(pat7Set,msgPat7)) then
             pat7Set.length:=pat7Set.length+1;
             pat7Set.content[pat7Set.length]:=msgPat7;
           endif;
         endif;
       endif;
    endif;
  end;

procedure aEncryptionPat8();
  var i, j, encMsgNo:indexType;
  begin
    i := 1;
    while (i <= pat7Set.length) do
      j := 1;
      while (j<=pat3Set.length) do
        if (matchPat(msgs[construct8By73(pat7Set.content[i],pat3Set.content[j])], sPat8Set) &
           !Spy_known[construct8By73(pat7Set.content[i],pat3Set.content[j])]) then
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
        endif;
        j := j+1;
      endwhile;
      i := i+1;
    endwhile;
  end;

procedure deconcatPat9(msg: Message);
  var msgPat1, msgPat2:indexType;
  	  flagPat1, flagPat2:boolean;
  begin
    if (!Spy_known[msg.concatPart[1]]) then
      Spy_known[msg.concatPart[1]] := true;
      msgPat1 := msg.concatPart[1];
      isPat6(msgs[msgPat1],flagPat1);
      if (flagPat1) then
        if(!exist(pat6Set,msgPat1)) then
           pat6Set.length:=pat6Set.length+1;
           pat6Set.content[pat6Set.length] := msgPat1;
        endif;
      endif;
    endif;
    if (!Spy_known[msg.concatPart[2]]) then
      Spy_known[msg.concatPart[2]] := true;
      msgPat2 := msg.concatPart[2];
      isPat8(msgs[msgPat2],flagPat2);
      if (flagPat2) then
        if(!exist(pat8Set,msgPat2)) then
           pat8Set.length:=pat8Set.length+1;
           pat8Set.content[pat8Set.length] := msgPat2;
        endif;
      endif;
    endif;
  end;

procedure enconcatPat9();
  var i1, i2, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat6Set.length) do
      i2 := 1;
      while (i2 <= pat8Set.length) do
        if (matchPat(msgs[construct9By68(pat6Set.content[i1], pat8Set.content[i2])], sPat9Set) &
            !Spy_known[construct9By68(pat6Set.content[i1], pat8Set.content[i2])]) then
             concatMsgNo := construct9By68(pat6Set.content[i1], pat8Set.content[i2]);
             if (!exist(pat9Set,concatMsgNo)) then
                 pat9Set.length := pat9Set.length+1;
                 pat9Set.content[pat9Set.length]:=concatMsgNo;
             endif; 
             if (!Spy_known[concatMsgNo]) then
                Spy_known[concatMsgNo] := true;
             endif;
        endif;
        i2 := i2 + 1;
      endwhile;
      i1 := i1 + 1;
    endwhile;
  end;

procedure aDeryptionPat11(msg: Message);
  var key_inv:Message;
      msgPat6:indexType;
  	  flag_pat6:boolean;
  begin
    if (! Spy_known[msg.aencMsg]) then
       key_inv := inverseKey(msgs[msg.aencKey]);
       if (key_inv.k.ag = Intruder | key_inv.k.encType = PK) then
         Spy_known[msg.aencMsg]:=true;
         msgPat6:=msg.aencMsg;
         isPat6(msgs[msgPat6],flag_pat6);
         if (flag_pat6) then
           if (!exist(pat6Set,msgPat6)) then
             pat6Set.length:=pat6Set.length+1;
             pat6Set.content[pat6Set.length]:=msgPat6;
           endif;
         endif;
       endif;
    endif;
  end;

procedure aEncryptionPat11();
  var i, j, encMsgNo:indexType;
  begin
    i := 1;
    while (i <= pat6Set.length) do
      j := 1;
      while (j<=pat10Set.length) do
        if (matchPat(msgs[construct11By610(pat6Set.content[i],pat10Set.content[j])], sPat11Set) &
           !Spy_known[construct11By610(pat6Set.content[i],pat10Set.content[j])]) then
           if (msgs[pat10Set.content[j]].k.encType=PK) then
             encMsgNo := construct11By610(pat6Set.content[i],pat10Set.content[j]);
             if (!exist(pat11Set,encMsgNo)) then
                pat11Set.length := pat11Set.length+1;
                pat11Set.content[pat11Set.length]:=encMsgNo;
             endif; 
             if (!Spy_known[encMsgNo]) then
                Spy_known[encMsgNo] := true;
             endif;
          endif;
        endif;
        j := j+1;
      endwhile;
      i := i+1;
    endwhile;
  end;

procedure deconcatPat12(msg: Message);
  var msgPat1, msgPat2:indexType;
  	  flagPat1, flagPat2:boolean;
  begin
    if (!Spy_known[msg.concatPart[1]]) then
      Spy_known[msg.concatPart[1]] := true;
      msgPat1 := msg.concatPart[1];
      isPat6(msgs[msgPat1],flagPat1);
      if (flagPat1) then
        if(!exist(pat6Set,msgPat1)) then
           pat6Set.length:=pat6Set.length+1;
           pat6Set.content[pat6Set.length] := msgPat1;
        endif;
      endif;
    endif;
    if (!Spy_known[msg.concatPart[2]]) then
      Spy_known[msg.concatPart[2]] := true;
      msgPat2 := msg.concatPart[2];
      isPat11(msgs[msgPat2],flagPat2);
      if (flagPat2) then
        if(!exist(pat11Set,msgPat2)) then
           pat11Set.length:=pat11Set.length+1;
           pat11Set.content[pat11Set.length] := msgPat2;
        endif;
      endif;
    endif;
  end;

procedure enconcatPat12();
  var i1, i2, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat6Set.length) do
      i2 := 1;
      while (i2 <= pat11Set.length) do
        if (matchPat(msgs[construct12By611(pat6Set.content[i1], pat11Set.content[i2])], sPat12Set) &
            !Spy_known[construct12By611(pat6Set.content[i1], pat11Set.content[i2])]) then
             concatMsgNo := construct12By611(pat6Set.content[i1], pat11Set.content[i2]);
             if (!exist(pat12Set,concatMsgNo)) then
                 pat12Set.length := pat12Set.length+1;
                 pat12Set.content[pat12Set.length]:=concatMsgNo;
             endif; 
             if (!Spy_known[concatMsgNo]) then
                Spy_known[concatMsgNo] := true;
             endif;
        endif;
        i2 := i2 + 1;
      endwhile;
      i1 := i1 + 1;
    endwhile;
  end;

procedure aDeryptionPat13(msg: Message);
  var key_inv:Message;
      msgPat12:indexType;
  	  flag_pat12:boolean;
  begin
    if (! Spy_known[msg.aencMsg]) then
       key_inv := inverseKey(msgs[msg.aencKey]);
       if (key_inv.k.ag = Intruder | key_inv.k.encType = PK) then
         Spy_known[msg.aencMsg]:=true;
         msgPat12:=msg.aencMsg;
         isPat12(msgs[msgPat12],flag_pat12);
         if (flag_pat12) then
           if (!exist(pat12Set,msgPat12)) then
             pat12Set.length:=pat12Set.length+1;
             pat12Set.content[pat12Set.length]:=msgPat12;
           endif;
         endif;
       endif;
    endif;
  end;

procedure aEncryptionPat13();
  var i, j, encMsgNo:indexType;
  begin
    i := 1;
    while (i <= pat12Set.length) do
      j := 1;
      while (j<=pat3Set.length) do
        if (matchPat(msgs[construct13By123(pat12Set.content[i],pat3Set.content[j])], sPat13Set) &
           !Spy_known[construct13By123(pat12Set.content[i],pat3Set.content[j])]) then
           if (msgs[pat3Set.content[j]].k.encType=PK) then
             encMsgNo := construct13By123(pat12Set.content[i],pat3Set.content[j]);
             if (!exist(pat13Set,encMsgNo)) then
                pat13Set.length := pat13Set.length+1;
                pat13Set.content[pat13Set.length]:=encMsgNo;
             endif; 
             if (!Spy_known[encMsgNo]) then
                Spy_known[encMsgNo] := true;
             endif;
          endif;
        endif;
        j := j+1;
      endwhile;
      i := i+1;
    endwhile;
  end;

procedure deconcatPat14(msg: Message);
  var msgPat1, msgPat2, msgPat3:indexType;
  	  flagPat1, flagPat2, flagPat3:boolean;
  begin
    if (!Spy_known[msg.concatPart[1]]) then
      Spy_known[msg.concatPart[1]] := true;
      msgPat1 := msg.concatPart[1];
      isPat6(msgs[msgPat1],flagPat1);
      if (flagPat1) then
        if(!exist(pat6Set,msgPat1)) then
           pat6Set.length:=pat6Set.length+1;
           pat6Set.content[pat6Set.length] := msgPat1;
        endif;
      endif;
    endif;
    if (!Spy_known[msg.concatPart[2]]) then
      Spy_known[msg.concatPart[2]] := true;
      msgPat2 := msg.concatPart[2];
      isPat11(msgs[msgPat2],flagPat2);
      if (flagPat2) then
        if(!exist(pat11Set,msgPat2)) then
           pat11Set.length:=pat11Set.length+1;
           pat11Set.content[pat11Set.length] := msgPat2;
        endif;
      endif;
    endif;
    if (!Spy_known[msg.concatPart[3]]) then
      Spy_known[msg.concatPart[3]] := true;
      msgPat3 := msg.concatPart[3];
      isPat13(msgs[msgPat3],flagPat3);
      if (flagPat3) then
        if(!exist(pat13Set,msgPat3)) then
           pat13Set.length:=pat13Set.length+1;
           pat13Set.content[pat13Set.length] := msgPat3;
        endif;
      endif;
    endif;
  end;

procedure enconcatPat14();
  var i1, i2, i3, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat6Set.length) do
      i2 := 1;
      while (i2 <= pat11Set.length) do
        i3 := 1;
        while (i3 <= pat13Set.length) do
          if (matchPat(msgs[construct14By61113(pat6Set.content[i1], pat11Set.content[i2], pat13Set.content[i3])], sPat14Set) &
              !Spy_known[construct14By61113(pat6Set.content[i1], pat11Set.content[i2], pat13Set.content[i3])]) then
               concatMsgNo := construct14By61113(pat6Set.content[i1], pat11Set.content[i2], pat13Set.content[i3]);
               if (!exist(pat14Set,concatMsgNo)) then
                   pat14Set.length := pat14Set.length+1;
                   pat14Set.content[pat14Set.length]:=concatMsgNo;
               endif; 
               if (!Spy_known[concatMsgNo]) then
                  Spy_known[concatMsgNo] := true;
               endif;
          endif;
          i3 := i3 + 1;
        endwhile;
        i2 := i2 + 1;
      endwhile;
      i1 := i1 + 1;
    endwhile;
  end;

ruleset i:roleHostNums do
rule " roleHost1 "
roleHost[i].st = Host1 & ch[1].empty = true 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons5(roleHost[i].Host,roleHost[i].Host,msg,msgNo);
   ch[1].empty := false;
   ch[1].msg := msg;
   ch[1].sender := roleHost[i].Host;
   ch[1].receiver := Intruder;
   roleHost[i].st := Host2;
   put "roleHost send into ch[1]. ";
   put " msg: ";
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
     destruct9(msg,roleHost[i].locr,roleHost[i].locServer);
     if(matchNonce(roleHost[i].locr, roleHost[i].r) & matchAgent(roleHost[i].locServer, roleHost[i].Server))then
       ch[4].empty:=true;
       clear ch[4].msg;
       roleHost[i].st := Host3;
     endif;
   endif;
   put "roleHost recieve from ch[4]. ";
   put " msg: ";
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
   cons9(roleHost[i].locr,roleHost[i].Host,msg,msgNo);
   ch[5].empty := false;
   ch[5].msg := msg;
   ch[5].sender := roleHost[i].Host;
   ch[5].receiver := Intruder;
   roleHost[i].st := Host4;
   put "roleHost send into ch[5]. ";
   put " msg: ";
   printMsg(ch[5].msg);
   put "\n";
end;
rule " roleHost4 "
roleHost[i].st = Host4 & ch[8].empty = false 
==>
var flag_pat14:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[8].msg;
   isPat14(msg, flag_pat14);
   if(flag_pat14) then
     destruct14(msg,roleHost[i].locHostIP,roleHost[i].lochostipsk,roleHost[i].locHost,roleHost[i].locServer);
     if(matchNonce(roleHost[i].locHostIP, roleHost[i].HostIP) & matchNonce(roleHost[i].lochostipsk, roleHost[i].hostipsk) & matchAgent(roleHost[i].locHost, roleHost[i].Host) & matchAgent(roleHost[i].locServer, roleHost[i].Server))then
       ch[8].empty:=true;
       clear ch[8].msg;
       roleHost[i].st := Host1;
     endif;
   endif;
   put "roleHost recieve from ch[8]. ";
   put " msg: ";
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
     destruct5(msg,roleGateway[i].locHost,roleGateway[i].locHost);
     if(matchAgent(roleGateway[i].locHost, roleGateway[i].Host) & matchAgent(roleGateway[i].locHost, roleGateway[i].Host))then
       ch[1].empty:=true;
       clear ch[1].msg;
       roleGateway[i].st := Gateway2;
     endif;
   endif;
   put "roleGateway recieve from ch[1]. ";
   put " msg: ";
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
   cons5(roleGateway[i].Host,roleGateway[i].Host,msg,msgNo);
   ch[2].empty := false;
   ch[2].msg := msg;
   ch[2].sender := roleGateway[i].Gateway;
   ch[2].receiver := Intruder;
   roleGateway[i].st := Gateway3;
   put "roleGateway send into ch[2]. ";
   put " msg: ";
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
     destruct9(msg,roleGateway[i].locr,roleGateway[i].locServer);
     if(matchNonce(roleGateway[i].locr, roleGateway[i].r) & matchAgent(roleGateway[i].locServer, roleGateway[i].Server))then
       ch[3].empty:=true;
       clear ch[3].msg;
       roleGateway[i].st := Gateway4;
     endif;
   endif;
   put "roleGateway recieve from ch[3]. ";
   put " msg: ";
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
   cons9(roleGateway[i].locr,roleGateway[i].Server,msg,msgNo);
   ch[4].empty := false;
   ch[4].msg := msg;
   ch[4].sender := roleGateway[i].Gateway;
   ch[4].receiver := Intruder;
   roleGateway[i].st := Gateway5;
   put "roleGateway send into ch[4]. ";
   put " msg: ";
   printMsg(ch[4].msg);
   put "\n";
end;
rule " roleGateway5 "
roleGateway[i].st = Gateway5 & ch[5].empty = false 
==>
var flag_pat9:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[5].msg;
   isPat9(msg, flag_pat9);
   if(flag_pat9) then
     destruct9(msg,roleGateway[i].locr,roleGateway[i].locHost);
     if(matchNonce(roleGateway[i].locr, roleGateway[i].r) & matchAgent(roleGateway[i].locHost, roleGateway[i].Host))then
       ch[5].empty:=true;
       clear ch[5].msg;
       roleGateway[i].st := Gateway6;
     endif;
   endif;
   put "roleGateway recieve from ch[5]. ";
   put " msg: ";
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
   cons9(roleGateway[i].locr,roleGateway[i].Host,msg,msgNo);
   ch[6].empty := false;
   ch[6].msg := msg;
   ch[6].sender := roleGateway[i].Gateway;
   ch[6].receiver := Intruder;
   roleGateway[i].st := Gateway7;
   put "roleGateway send into ch[6]. ";
   put " msg: ";
   printMsg(ch[6].msg);
   put "\n";
end;
rule " roleGateway7 "
roleGateway[i].st = Gateway7 & ch[7].empty = false 
==>
var flag_pat14:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[7].msg;
   isPat14(msg, flag_pat14);
   if(flag_pat14) then
     destruct14(msg,roleGateway[i].locHostIP,roleGateway[i].lochostipsk,roleGateway[i].locHost,roleGateway[i].locServer);
     if(matchNonce(roleGateway[i].locHostIP, roleGateway[i].HostIP) & matchNonce(roleGateway[i].lochostipsk, roleGateway[i].hostipsk) & matchAgent(roleGateway[i].locHost, roleGateway[i].Host) & matchAgent(roleGateway[i].locServer, roleGateway[i].Server))then
       ch[7].empty:=true;
       clear ch[7].msg;
       roleGateway[i].st := Gateway8;
     endif;
   endif;
   put "roleGateway recieve from ch[7]. ";
   put " msg: ";
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
   cons14(roleGateway[i].locHostIP,roleGateway[i].lochostipsk,roleGateway[i].Host,roleGateway[i].Server,msg,msgNo);
   ch[8].empty := false;
   ch[8].msg := msg;
   ch[8].sender := roleGateway[i].Gateway;
   ch[8].receiver := Intruder;
   roleGateway[i].st := Gateway1;
   put "roleGateway send into ch[8]. ";
   put " msg: ";
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
     destruct5(msg,roleServer[i].locHost,roleServer[i].locHost);
     if(matchAgent(roleServer[i].locHost, roleServer[i].Host) & matchAgent(roleServer[i].locHost, roleServer[i].Host))then
       ch[2].empty:=true;
       clear ch[2].msg;
       roleServer[i].st := Server2;
     endif;
   endif;
   put "roleServer recieve from ch[2]. ";
   put " msg: ";
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
   cons9(roleServer[i].r,roleServer[i].Server,msg,msgNo);
   ch[3].empty := false;
   ch[3].msg := msg;
   ch[3].sender := roleServer[i].Server;
   ch[3].receiver := Intruder;
   roleServer[i].st := Server3;
   put "roleServer send into ch[3]. ";
   put " msg: ";
   printMsg(ch[3].msg);
   put "\n";
end;
rule " roleServer3 "
roleServer[i].st = Server3 & ch[6].empty = false 
==>
var flag_pat9:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[6].msg;
   isPat9(msg, flag_pat9);
   if(flag_pat9) then
     destruct9(msg,roleServer[i].locr,roleServer[i].locHost);
     if(matchNonce(roleServer[i].locr, roleServer[i].r) & matchAgent(roleServer[i].locHost, roleServer[i].Host))then
       ch[6].empty:=true;
       clear ch[6].msg;
       roleServer[i].st := Server4;
     endif;
   endif;
   put "roleServer recieve from ch[6]. ";
   put " msg: ";
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
   cons14(roleServer[i].HostIP,roleServer[i].hostipsk,roleServer[i].Host,roleServer[i].Server,msg,msgNo);
   ch[7].empty := false;
   ch[7].msg := msg;
   ch[7].sender := roleServer[i].Server;
   ch[7].receiver := Intruder;
   roleServer[i].st := Server1;
   put "roleServer send into ch[7]. ";
   put " msg: ";
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
      i, msgNo:indexType;
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
        --- agent: Host
        i := 1;
        while (i <= pat2Set.length) do
          deconcatPat2(msgs[pat2Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat2();
        --- sk(Host)
        i := 1;
        while (i <= pat4Set.length) do
          aDeryptionPat4(msgs[pat4Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat4();
        i := 1;
        while (i <= pat5Set.length) do
          deconcatPat5(msgs[pat5Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat5();
        --- nonce: r
        i := 1;
        while (i <= pat7Set.length) do
          deconcatPat7(msgs[pat7Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat7();
        i := 1;
        while (i <= pat8Set.length) do
          aDeryptionPat8(msgs[pat8Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat8();
        i := 1;
        while (i <= pat9Set.length) do
          deconcatPat9(msgs[pat9Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat9();
        --- pk(Host)
        i := 1;
        while (i <= pat11Set.length) do
          aDeryptionPat11(msgs[pat11Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat11();
        i := 1;
        while (i <= pat12Set.length) do
          deconcatPat12(msgs[pat12Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat12();
        i := 1;
        while (i <= pat13Set.length) do
          aDeryptionPat13(msgs[pat13Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat13();
        i := 1;
        while (i <= pat14Set.length) do
          deconcatPat14(msgs[pat14Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat14();
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
      i, msgNo:indexType;
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
        --- agent: Host
        i := 1;
        while (i <= pat2Set.length) do
          deconcatPat2(msgs[pat2Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat2();
        --- sk(Host)
        i := 1;
        while (i <= pat4Set.length) do
          aDeryptionPat4(msgs[pat4Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat4();
        i := 1;
        while (i <= pat5Set.length) do
          deconcatPat5(msgs[pat5Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat5();
        --- nonce: r
        i := 1;
        while (i <= pat7Set.length) do
          deconcatPat7(msgs[pat7Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat7();
        i := 1;
        while (i <= pat8Set.length) do
          aDeryptionPat8(msgs[pat8Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat8();
        i := 1;
        while (i <= pat9Set.length) do
          deconcatPat9(msgs[pat9Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat9();
        --- pk(Host)
        i := 1;
        while (i <= pat11Set.length) do
          aDeryptionPat11(msgs[pat11Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat11();
        i := 1;
        while (i <= pat12Set.length) do
          deconcatPat12(msgs[pat12Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat12();
        i := 1;
        while (i <= pat13Set.length) do
          aDeryptionPat13(msgs[pat13Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat13();
        i := 1;
        while (i <= pat14Set.length) do
          deconcatPat14(msgs[pat14Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat14();
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
      i, msgNo:indexType;
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
        --- agent: Host
        i := 1;
        while (i <= pat2Set.length) do
          deconcatPat2(msgs[pat2Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat2();
        --- sk(Host)
        i := 1;
        while (i <= pat4Set.length) do
          aDeryptionPat4(msgs[pat4Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat4();
        i := 1;
        while (i <= pat5Set.length) do
          deconcatPat5(msgs[pat5Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat5();
        --- nonce: r
        i := 1;
        while (i <= pat7Set.length) do
          deconcatPat7(msgs[pat7Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat7();
        i := 1;
        while (i <= pat8Set.length) do
          aDeryptionPat8(msgs[pat8Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat8();
        i := 1;
        while (i <= pat9Set.length) do
          deconcatPat9(msgs[pat9Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat9();
        --- pk(Host)
        i := 1;
        while (i <= pat11Set.length) do
          aDeryptionPat11(msgs[pat11Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat11();
        i := 1;
        while (i <= pat12Set.length) do
          deconcatPat12(msgs[pat12Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat12();
        i := 1;
        while (i <= pat13Set.length) do
          aDeryptionPat13(msgs[pat13Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat13();
        i := 1;
        while (i <= pat14Set.length) do
          deconcatPat14(msgs[pat14Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat14();
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
      i, msgNo:indexType;
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
        --- agent: Host
        i := 1;
        while (i <= pat2Set.length) do
          deconcatPat2(msgs[pat2Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat2();
        --- sk(Host)
        i := 1;
        while (i <= pat4Set.length) do
          aDeryptionPat4(msgs[pat4Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat4();
        i := 1;
        while (i <= pat5Set.length) do
          deconcatPat5(msgs[pat5Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat5();
        --- nonce: r
        i := 1;
        while (i <= pat7Set.length) do
          deconcatPat7(msgs[pat7Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat7();
        i := 1;
        while (i <= pat8Set.length) do
          aDeryptionPat8(msgs[pat8Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat8();
        i := 1;
        while (i <= pat9Set.length) do
          deconcatPat9(msgs[pat9Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat9();
        --- pk(Host)
        i := 1;
        while (i <= pat11Set.length) do
          aDeryptionPat11(msgs[pat11Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat11();
        i := 1;
        while (i <= pat12Set.length) do
          deconcatPat12(msgs[pat12Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat12();
        i := 1;
        while (i <= pat13Set.length) do
          aDeryptionPat13(msgs[pat13Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat13();
        i := 1;
        while (i <= pat14Set.length) do
          deconcatPat14(msgs[pat14Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat14();
      endif;
      ch[4].empty := true;
      clear ch[4].msg;
    endif;
  end;

---rule of intruder to get msg from ch[5] 
rule "intruderGetMsgFromCh[5]" 
  ch[5].empty = false
  ==>
  var flag_pat9:boolean;
      i, msgNo:indexType;
      msg:Message;
  begin
    msg := ch[5].msg;
    get_msgNo(msg, msgNo);
    isPat9(msg,flag_pat9);
    if (flag_pat9) then
      if(!exist(pat9Set,msgNo)) then
        pat9Set.length:=pat9Set.length+1;
        pat9Set.content[pat9Set.length]:=msgNo;
        Spy_known[msgNo] := true;
        --- agent: Host
        i := 1;
        while (i <= pat2Set.length) do
          deconcatPat2(msgs[pat2Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat2();
        --- sk(Host)
        i := 1;
        while (i <= pat4Set.length) do
          aDeryptionPat4(msgs[pat4Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat4();
        i := 1;
        while (i <= pat5Set.length) do
          deconcatPat5(msgs[pat5Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat5();
        --- nonce: r
        i := 1;
        while (i <= pat7Set.length) do
          deconcatPat7(msgs[pat7Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat7();
        i := 1;
        while (i <= pat8Set.length) do
          aDeryptionPat8(msgs[pat8Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat8();
        i := 1;
        while (i <= pat9Set.length) do
          deconcatPat9(msgs[pat9Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat9();
        --- pk(Host)
        i := 1;
        while (i <= pat11Set.length) do
          aDeryptionPat11(msgs[pat11Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat11();
        i := 1;
        while (i <= pat12Set.length) do
          deconcatPat12(msgs[pat12Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat12();
        i := 1;
        while (i <= pat13Set.length) do
          aDeryptionPat13(msgs[pat13Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat13();
        i := 1;
        while (i <= pat14Set.length) do
          deconcatPat14(msgs[pat14Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat14();
      endif;
      ch[5].empty := true;
      clear ch[5].msg;
    endif;
  end;

---rule of intruder to get msg from ch[6] 
rule "intruderGetMsgFromCh[6]" 
  ch[6].empty = false
  ==>
  var flag_pat9:boolean;
      i, msgNo:indexType;
      msg:Message;
  begin
    msg := ch[6].msg;
    get_msgNo(msg, msgNo);
    isPat9(msg,flag_pat9);
    if (flag_pat9) then
      if(!exist(pat9Set,msgNo)) then
        pat9Set.length:=pat9Set.length+1;
        pat9Set.content[pat9Set.length]:=msgNo;
        Spy_known[msgNo] := true;
        --- agent: Host
        i := 1;
        while (i <= pat2Set.length) do
          deconcatPat2(msgs[pat2Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat2();
        --- sk(Host)
        i := 1;
        while (i <= pat4Set.length) do
          aDeryptionPat4(msgs[pat4Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat4();
        i := 1;
        while (i <= pat5Set.length) do
          deconcatPat5(msgs[pat5Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat5();
        --- nonce: r
        i := 1;
        while (i <= pat7Set.length) do
          deconcatPat7(msgs[pat7Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat7();
        i := 1;
        while (i <= pat8Set.length) do
          aDeryptionPat8(msgs[pat8Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat8();
        i := 1;
        while (i <= pat9Set.length) do
          deconcatPat9(msgs[pat9Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat9();
        --- pk(Host)
        i := 1;
        while (i <= pat11Set.length) do
          aDeryptionPat11(msgs[pat11Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat11();
        i := 1;
        while (i <= pat12Set.length) do
          deconcatPat12(msgs[pat12Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat12();
        i := 1;
        while (i <= pat13Set.length) do
          aDeryptionPat13(msgs[pat13Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat13();
        i := 1;
        while (i <= pat14Set.length) do
          deconcatPat14(msgs[pat14Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat14();
      endif;
      ch[6].empty := true;
      clear ch[6].msg;
    endif;
  end;

---rule of intruder to get msg from ch[7] 
rule "intruderGetMsgFromCh[7]" 
  ch[7].empty = false
  ==>
  var flag_pat14:boolean;
      i, msgNo:indexType;
      msg:Message;
  begin
    msg := ch[7].msg;
    get_msgNo(msg, msgNo);
    isPat14(msg,flag_pat14);
    if (flag_pat14) then
      if(!exist(pat14Set,msgNo)) then
        pat14Set.length:=pat14Set.length+1;
        pat14Set.content[pat14Set.length]:=msgNo;
        Spy_known[msgNo] := true;
        --- agent: Host
        i := 1;
        while (i <= pat2Set.length) do
          deconcatPat2(msgs[pat2Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat2();
        --- sk(Host)
        i := 1;
        while (i <= pat4Set.length) do
          aDeryptionPat4(msgs[pat4Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat4();
        i := 1;
        while (i <= pat5Set.length) do
          deconcatPat5(msgs[pat5Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat5();
        --- nonce: r
        i := 1;
        while (i <= pat7Set.length) do
          deconcatPat7(msgs[pat7Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat7();
        i := 1;
        while (i <= pat8Set.length) do
          aDeryptionPat8(msgs[pat8Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat8();
        i := 1;
        while (i <= pat9Set.length) do
          deconcatPat9(msgs[pat9Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat9();
        --- pk(Host)
        i := 1;
        while (i <= pat11Set.length) do
          aDeryptionPat11(msgs[pat11Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat11();
        i := 1;
        while (i <= pat12Set.length) do
          deconcatPat12(msgs[pat12Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat12();
        i := 1;
        while (i <= pat13Set.length) do
          aDeryptionPat13(msgs[pat13Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat13();
        i := 1;
        while (i <= pat14Set.length) do
          deconcatPat14(msgs[pat14Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat14();
      endif;
      ch[7].empty := true;
      clear ch[7].msg;
    endif;
  end;

---rule of intruder to get msg from ch[8] 
rule "intruderGetMsgFromCh[8]" 
  ch[8].empty = false
  ==>
  var flag_pat14:boolean;
      i, msgNo:indexType;
      msg:Message;
  begin
    msg := ch[8].msg;
    get_msgNo(msg, msgNo);
    isPat14(msg,flag_pat14);
    if (flag_pat14) then
      if(!exist(pat14Set,msgNo)) then
        pat14Set.length:=pat14Set.length+1;
        pat14Set.content[pat14Set.length]:=msgNo;
        Spy_known[msgNo] := true;
        --- agent: Host
        i := 1;
        while (i <= pat2Set.length) do
          deconcatPat2(msgs[pat2Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat2();
        --- sk(Host)
        i := 1;
        while (i <= pat4Set.length) do
          aDeryptionPat4(msgs[pat4Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat4();
        i := 1;
        while (i <= pat5Set.length) do
          deconcatPat5(msgs[pat5Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat5();
        --- nonce: r
        i := 1;
        while (i <= pat7Set.length) do
          deconcatPat7(msgs[pat7Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat7();
        i := 1;
        while (i <= pat8Set.length) do
          aDeryptionPat8(msgs[pat8Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat8();
        i := 1;
        while (i <= pat9Set.length) do
          deconcatPat9(msgs[pat9Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat9();
        --- pk(Host)
        i := 1;
        while (i <= pat11Set.length) do
          aDeryptionPat11(msgs[pat11Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat11();
        i := 1;
        while (i <= pat12Set.length) do
          deconcatPat12(msgs[pat12Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat12();
        i := 1;
        while (i <= pat13Set.length) do
          aDeryptionPat13(msgs[pat13Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat13();
        i := 1;
        while (i <= pat14Set.length) do
          deconcatPat14(msgs[pat14Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat14();
      endif;
      ch[8].empty := true;
      clear ch[8].msg;
    endif;
  end;

---rule of intruder to emit msg into ch[1].
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsgIntoCh[1]"
      ch[1].empty=true & i <= pat5Set.length & pat5Set.content[i] != 0 &
      Spy_known[pat5Set.content[i]] & matchPat(msgs[pat5Set.content[i]], sPat5Set) &
      !emit[pat5Set.content[i]]
      ==>
      begin
        if (!emit[pat5Set.content[i]]) then  --- & msgs[msgs[pat5Set.content[i]].aencKey].k.ag=roleGateway[j].Gateway
          clear ch[1];
          ch[1].msg:=msgs[pat5Set.content[i]];
          ch[1].sender:=Intruder;
          ch[1].receiver:=roleGateway[j].Gateway;
          ch[1].empty:=false;
          emit[pat5Set.content[i]] := true;
          put "Intruder emit msg into ch1. ";
          put " msg:   ";          printMsg(ch[1].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[2].
ruleset i: msgLen do
  ruleset j: roleServerNums do
    rule "intruderEmitMsgIntoCh[2]"
      ch[2].empty=true & i <= pat5Set.length & pat5Set.content[i] != 0 &
      Spy_known[pat5Set.content[i]] & matchPat(msgs[pat5Set.content[i]], sPat5Set) &
      !emit[pat5Set.content[i]]
      ==>
      begin
        if (!emit[pat5Set.content[i]]) then  --- & msgs[msgs[pat5Set.content[i]].aencKey].k.ag=roleServer[j].Server
          clear ch[2];
          ch[2].msg:=msgs[pat5Set.content[i]];
          ch[2].sender:=Intruder;
          ch[2].receiver:=roleServer[j].Server;
          ch[2].empty:=false;
          emit[pat5Set.content[i]] := true;
          put "Intruder emit msg into ch2. ";
          put " msg:   ";          printMsg(ch[2].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[3].
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsgIntoCh[3]"
      ch[3].empty=true & i <= pat9Set.length & pat9Set.content[i] != 0 &
      Spy_known[pat9Set.content[i]] & matchPat(msgs[pat9Set.content[i]], sPat9Set) &
      !emit[pat9Set.content[i]]
      ==>
      begin
        if (!emit[pat9Set.content[i]]) then  --- & msgs[msgs[pat9Set.content[i]].aencKey].k.ag=roleGateway[j].Gateway
          clear ch[3];
          ch[3].msg:=msgs[pat9Set.content[i]];
          ch[3].sender:=Intruder;
          ch[3].receiver:=roleGateway[j].Gateway;
          ch[3].empty:=false;
          emit[pat9Set.content[i]] := true;
          put "Intruder emit msg into ch3. ";
          put " msg:   ";          printMsg(ch[3].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[4].
ruleset i: msgLen do
  ruleset j: roleHostNums do
    rule "intruderEmitMsgIntoCh[4]"
      ch[4].empty=true & i <= pat9Set.length & pat9Set.content[i] != 0 &
      Spy_known[pat9Set.content[i]] & matchPat(msgs[pat9Set.content[i]], sPat9Set) &
      !emit[pat9Set.content[i]]
      ==>
      begin
        if (!emit[pat9Set.content[i]]) then  --- & msgs[msgs[pat9Set.content[i]].aencKey].k.ag=roleHost[j].Host
          clear ch[4];
          ch[4].msg:=msgs[pat9Set.content[i]];
          ch[4].sender:=Intruder;
          ch[4].receiver:=roleHost[j].Host;
          ch[4].empty:=false;
          emit[pat9Set.content[i]] := true;
          put "Intruder emit msg into ch4. ";
          put " msg:   ";          printMsg(ch[4].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[5].
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsgIntoCh[5]"
      ch[5].empty=true & i <= pat9Set.length & pat9Set.content[i] != 0 &
      Spy_known[pat9Set.content[i]] & matchPat(msgs[pat9Set.content[i]], sPat9Set) &
      !emit[pat9Set.content[i]]
      ==>
      begin
        if (!emit[pat9Set.content[i]]) then  --- & msgs[msgs[pat9Set.content[i]].aencKey].k.ag=roleGateway[j].Gateway
          clear ch[5];
          ch[5].msg:=msgs[pat9Set.content[i]];
          ch[5].sender:=Intruder;
          ch[5].receiver:=roleGateway[j].Gateway;
          ch[5].empty:=false;
          emit[pat9Set.content[i]] := true;
          put "Intruder emit msg into ch5. ";
          put " msg:   ";          printMsg(ch[5].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[6].
ruleset i: msgLen do
  ruleset j: roleServerNums do
    rule "intruderEmitMsgIntoCh[6]"
      ch[6].empty=true & i <= pat9Set.length & pat9Set.content[i] != 0 &
      Spy_known[pat9Set.content[i]] & matchPat(msgs[pat9Set.content[i]], sPat9Set) &
      !emit[pat9Set.content[i]]
      ==>
      begin
        if (!emit[pat9Set.content[i]]) then  --- & msgs[msgs[pat9Set.content[i]].aencKey].k.ag=roleServer[j].Server
          clear ch[6];
          ch[6].msg:=msgs[pat9Set.content[i]];
          ch[6].sender:=Intruder;
          ch[6].receiver:=roleServer[j].Server;
          ch[6].empty:=false;
          emit[pat9Set.content[i]] := true;
          put "Intruder emit msg into ch6. ";
          put " msg:   ";          printMsg(ch[6].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[7].
ruleset i: msgLen do
  ruleset j: roleGatewayNums do
    rule "intruderEmitMsgIntoCh[7]"
      ch[7].empty=true & i <= pat14Set.length & pat14Set.content[i] != 0 &
      Spy_known[pat14Set.content[i]] & matchPat(msgs[pat14Set.content[i]], sPat14Set) &
      !emit[pat14Set.content[i]]
      ==>
      begin
        if (!emit[pat14Set.content[i]]) then  --- & msgs[msgs[pat14Set.content[i]].aencKey].k.ag=roleGateway[j].Gateway
          clear ch[7];
          ch[7].msg:=msgs[pat14Set.content[i]];
          ch[7].sender:=Intruder;
          ch[7].receiver:=roleGateway[j].Gateway;
          ch[7].empty:=false;
          emit[pat14Set.content[i]] := true;
          put "Intruder emit msg into ch7. ";
          put " msg:   ";          printMsg(ch[7].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[8].
ruleset i: msgLen do
  ruleset j: roleHostNums do
    rule "intruderEmitMsgIntoCh[8]"
      ch[8].empty=true & i <= pat14Set.length & pat14Set.content[i] != 0 &
      Spy_known[pat14Set.content[i]] & matchPat(msgs[pat14Set.content[i]], sPat14Set) &
      !emit[pat14Set.content[i]]
      ==>
      begin
        if (!emit[pat14Set.content[i]]) then  --- & msgs[msgs[pat14Set.content[i]].aencKey].k.ag=roleHost[j].Host
          clear ch[8];
          ch[8].msg:=msgs[pat14Set.content[i]];
          ch[8].sender:=Intruder;
          ch[8].receiver:=roleHost[j].Host;
          ch[8].empty:=false;
          emit[pat14Set.content[i]] := true;
          put "Intruder emit msg into ch8. ";
          put " msg:   ";          printMsg(ch[8].msg);
          put "\n";
        endif;
      end;
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
    sPat1Set.content[i] := 0;
    pat2Set.content[i] := 0;
    sPat2Set.content[i] := 0;
    pat3Set.content[i] := 0;
    sPat3Set.content[i] := 0;
    pat4Set.content[i] := 0;
    sPat4Set.content[i] := 0;
    pat5Set.content[i] := 0;
    sPat5Set.content[i] := 0;
    pat6Set.content[i] := 0;
    sPat6Set.content[i] := 0;
    pat7Set.content[i] := 0;
    sPat7Set.content[i] := 0;
    pat8Set.content[i] := 0;
    sPat8Set.content[i] := 0;
    pat9Set.content[i] := 0;
    sPat9Set.content[i] := 0;
    pat10Set.content[i] := 0;
    sPat10Set.content[i] := 0;
    pat11Set.content[i] := 0;
    sPat11Set.content[i] := 0;
    pat12Set.content[i] := 0;
    sPat12Set.content[i] := 0;
    pat13Set.content[i] := 0;
    sPat13Set.content[i] := 0;
    pat14Set.content[i] := 0;
    sPat14Set.content[i] := 0;
  endfor;
  for i:indexType do 
    Spy_known[i] := false;
  endfor;
  pat1Set.length := 0;
  sPat1Set.length := 0;
  pat2Set.length := 0;
  sPat2Set.length := 0;
  pat3Set.length := 0;
  sPat3Set.length := 0;
  pat4Set.length := 0;
  sPat4Set.length := 0;
  pat5Set.length := 0;
  sPat5Set.length := 0;
  pat6Set.length := 0;
  sPat6Set.length := 0;
  pat7Set.length := 0;
  sPat7Set.length := 0;
  pat8Set.length := 0;
  sPat8Set.length := 0;
  pat9Set.length := 0;
  sPat9Set.length := 0;
  pat10Set.length := 0;
  sPat10Set.length := 0;
  pat11Set.length := 0;
  sPat11Set.length := 0;
  pat12Set.length := 0;
  sPat12Set.length := 0;
  pat13Set.length := 0;
  sPat13Set.length := 0;
  pat14Set.length := 0;
  sPat14Set.length := 0;
  for i : roleHostNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleHost[i].Host;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat10Set.length := pat10Set.length + 1;
    pat10Set.content[pat10Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleGatewayNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleGateway[i].Gateway;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat10Set.length := pat10Set.length + 1;
    pat10Set.content[pat10Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleServerNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleServer[i].Server;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat10Set.length := pat10Set.length + 1;
    pat10Set.content[pat10Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleGatewayNums do
    constructSpat5(roleGateway[i].Host, roleGateway[i].Host, gnum);
  endfor;
  for i : roleServerNums do
    constructSpat5(roleServer[i].Host, roleServer[i].Host, gnum);
  endfor;
  for i : roleGatewayNums do
    constructSpat9(roleGateway[i].r, roleGateway[i].Server, gnum);
  endfor;
  for i : roleHostNums do
    constructSpat9(roleHost[i].r, roleHost[i].Server, gnum);
  endfor;
  for i : roleGatewayNums do
    constructSpat9(roleGateway[i].r, roleGateway[i].Host, gnum);
  endfor;
  for i : roleServerNums do
    constructSpat9(roleServer[i].r, roleServer[i].Host, gnum);
  endfor;
  for i : roleGatewayNums do
    constructSpat14(roleGateway[i].HostIP, roleGateway[i].hostipsk, roleGateway[i].Host, roleGateway[i].Server, gnum);
  endfor;
  for i : roleHostNums do
    constructSpat14(roleHost[i].HostIP, roleHost[i].hostipsk, roleHost[i].Host, roleHost[i].Server, gnum);
  endfor;

end;

invariant "sec1"
  forall i:indexType do
    (msgs[i].msgType=nonce & msgs[i].noncePart = secSK)
    ->
    Spy_known[i] = false
end;

invariant "auth1"
  forall i: roleHostNums do
    roleHost[i].commit = true 
    ->
    (exists j: roleServerNums do
      ---roleServer[j].commit = true &
      roleServer[i].r = roleHost[j].r
    endexists)
  endforall;
