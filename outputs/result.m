const
  roleSNum:1;
  roleCNum:1;
  roleASNum:1;
  totalFact:400;
  msgLength:10;
  chanNum:10;
type
  indexType:0..totalFact;
  roleSNums:1..roleSNum;
  roleCNums:1..roleCNum;
  roleASNums:1..roleASNum;
  msgLen:0..msgLength;
  chanNums:1..chanNum;

  AgentType : enum{Intruder, s, as, c,anyAgent}; ---Intruder 
  NonceType : enum{n3, n1, n2, t, l, anyNonce};  

  EncryptType : enum{PK,SK,Symk};
  KeyType: record 
    encType: EncryptType; 
    ag: AgentType; 
  end;

  SStatus: enum{S1,S2,S3,S4};
  CStatus: enum{C1,C2,C3,C4};
  ASStatus: enum{AS1,AS2,AS3,AS4};

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
  RoleS : record
   N3 : NonceType;
   N1 : NonceType;
   N2 : NonceType;
   T : NonceType;
   L : NonceType;
   S : AgentType;
   C : AgentType;
   AS : AgentType;
   locN3 : NonceType;
   locN1 : NonceType;
   locN2 : NonceType;
   locT : NonceType;
   locL : NonceType;
   locS : AgentType;
   locC : AgentType;
   locAS : AgentType;
   st: SStatus;
   commit : boolean;
  end;
  RoleC : record
   N3 : NonceType;
   N1 : NonceType;
   N2 : NonceType;
   T : NonceType;
   L : NonceType;
   S : AgentType;
   C : AgentType;
   AS : AgentType;
   locN3 : NonceType;
   locN1 : NonceType;
   locN2 : NonceType;
   locT : NonceType;
   locL : NonceType;
   locS : AgentType;
   locC : AgentType;
   locAS : AgentType;
   st: CStatus;
   commit : boolean;
  end;
  RoleAS : record
   N3 : NonceType;
   N1 : NonceType;
   N2 : NonceType;
   T : NonceType;
   L : NonceType;
   S : AgentType;
   C : AgentType;
   AS : AgentType;
   locN3 : NonceType;
   locN1 : NonceType;
   locN2 : NonceType;
   locT : NonceType;
   locL : NonceType;
   locS : AgentType;
   locC : AgentType;
   locAS : AgentType;
   st: ASStatus;
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
  roleS : Array[roleSNums] of RoleS;
  roleC : Array[roleCNums] of RoleC;
  roleAS : Array[roleASNums] of RoleAS;

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
  pat15Set: msgSet;
  sPat15Set: msgSet;

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
---pat1: C 
procedure lookAddPat1(C:AgentType; Var msg:Message; Var num : indexType);
 Var index : indexType;
 begin
   index:=0;
   for i: indexType do
    if (msgs[i].msgType = agent) then
      if (msgs[i].ag = C) then
        index:=i;
      endif;
    endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := agent;
     msgs[index].ag:=C; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat1: C 
procedure isPat1(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = agent) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat1: C 
procedure constructSpat1(C:AgentType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = agent) then
        if (msgs[i].ag = C) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := agent;
      msgs[index].ag := C;
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat1\n";
    sPat1Set.length := sPat1Set.length + 1;
    sPat1Set.content[sPat1Set.length] := index;
    num := index;
  end;

---pat2: N1 
procedure lookAddPat2(N1:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=N1) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=N1; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;

---pat2: N1 
procedure isPat2(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat2: N1 
procedure constructSpat2(N1:NonceType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = nonce) then
        if (msgs[i].noncePart = N1) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := nonce;
      msgs[index].noncePart := N1;
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat2\n";
    sPat2Set.length := sPat2Set.length + 1;
    sPat2Set.content[sPat2Set.length] := index;
    num := index;
  end;

---pat3: C.S.N1 
procedure lookAddPat3(C:AgentType; S:AgentType; N1:NonceType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3 : Message;
      index,i1,i2,i3 : indexType;
  begin
   index:=0;
   lookAddPat1(C,msg1,i1);
   lookAddPat1(S,msg2,i2);
   lookAddPat2(N1,msg3,i3);
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

---pat3: C.S.N1 
procedure isPat3(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
        isPat2(msgs[msg.concatPart[3]],flagPart3);
       if (flagPart1 & flagPart2 & flagPart3) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat3: C.S.N1 
procedure constructSpat3(C:AgentType; S:AgentType; N1:NonceType; Var num: indexType);
  Var i,index, i1, i2, i3:indexType;
  begin
    index:=0;
    constructSpat1(C, i1);
    constructSpat1(S, i2);
    constructSpat2(N1, i3);
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
    put "  cons Spat3\n";
    sPat3Set.length := sPat3Set.length + 1;
    sPat3Set.content[sPat3Set.length] := index;
    num := index;
  end;

---pat4: pk(S) 
procedure lookAddPat4(SPk :AgentType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    index:=0;
    for i: indexType do
      if (msgs[i].msgType = key) then
        if (msgs[i].k.encType = PK & msgs[i].k.ag = SPk) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType:=PK; 
      msgs[index].k.ag:=SPk;
      msgs[index].length := 1;
    endif;
    num:=index;
    msg:=msgs[index];
  end;

---pat4: pk(S) 
procedure isPat4(msg:Message; Var flag:boolean);
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

---spat4: pk(S) 
procedure constructSpat4(SPk :AgentType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = key & msgs[i].k.encType = PK) then
        if (msgs[i].k.ag = SPk) then
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
      msgs[index].k.ag := SPk;
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat4\n";
    sPat4Set.length := sPat4Set.length + 1;
    sPat4Set.content[sPat4Set.length] := index;
    num := index;
  end;

---pat5: AS.C.N1.pk(S) 
procedure lookAddPat5(AS:AgentType; C:AgentType; N1:NonceType; SPk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3, msg4 : Message;
      index,i1,i2,i3,i4 : indexType;
  begin
   index:=0;
   lookAddPat1(AS,msg1,i1);
   lookAddPat1(C,msg2,i2);
   lookAddPat2(N1,msg3,i3);
   lookAddPat4(SPk,msg4,i4);
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

---pat5: AS.C.N1.pk(S) 
procedure isPat5(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3,flagPart4: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     flagPart4 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
        isPat2(msgs[msg.concatPart[3]],flagPart3);
        isPat4(msgs[msg.concatPart[4]],flagPart4);
       if (flagPart1 & flagPart2 & flagPart3 & flagPart4) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat5: AS.C.N1.pk(S) 
procedure constructSpat5(AS:AgentType; C:AgentType; N1:NonceType; SPk :AgentType; Var num: indexType);
  Var i,index, i1, i2, i3, i4:indexType;
  begin
    index:=0;
    constructSpat1(AS, i1);
    constructSpat1(C, i2);
    constructSpat2(N1, i3);
    constructSpat4(SPk, i4);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 4) then
        if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2 & msgs[i].concatPart[3] = i3 & msgs[i].concatPart[4] = i4) then
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
      msgs[index].concatPart[4] := i4;
      msgs[index].length := 4;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat5\n";
    sPat5Set.length := sPat5Set.length + 1;
    sPat5Set.content[sPat5Set.length] := index;
    num := index;
  end;

---pat6: sk(AS) 
procedure lookAddPat6(ASSk :AgentType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    index:=0;
    for i: indexType do
      if (msgs[i].msgType = key) then
        if (msgs[i].k.encType = SK & msgs[i].k.ag = ASSk) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType:=SK; 
      msgs[index].k.ag:=ASSk;
    endif;
    num:=index;
    msg:=msgs[index];
  end;

---pat6: sk(AS) 
procedure isPat6(msg:Message; Var flag:boolean);
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

---spat6: sk(AS) 
procedure constructSpat6(ASSk :AgentType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = key & msgs[i].k.encType = SK) then
        if (msgs[i].k.ag = ASSk) then
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
      msgs[index].k.ag := ASSk;
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat6\n";
    sPat6Set.length := sPat6Set.length + 1;
    sPat6Set.content[sPat6Set.length] := index;
    num := index;
  end;

---pat7: aenc{< AS.C.N1.pk(S) >}sk(AS) 
procedure lookAddPat7(AS:AgentType; C:AgentType; N1:NonceType; SPk :AgentType; ASSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat5(AS, C, N1, SPk,msg1,i1);
   lookAddPat6(ASSk,msg2,i2);
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

---pat7: aenc{< AS.C.N1.pk(S) >}sk(AS) 
procedure isPat7(msg:Message; Var flag:boolean);
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

---spat7: aenc{< AS.C.N1.pk(S) >}sk(AS) 
procedure constructSpat7(AS:AgentType; C:AgentType; N1:NonceType; SPk :AgentType; ASSk :AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat5(AS, C, N1, SPk, i1);
    constructSpat6(ASSk, i2);
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
    put "  cons Spat7\n";
    sPat7Set.length := sPat7Set.length + 1;
    sPat7Set.content[sPat7Set.length] := index;
    num := index;
  end;

---pat8: AS.aenc{< AS.C.N1.pk(S) >}sk(AS) 
procedure lookAddPat8(AS:AgentType; C:AgentType; N1:NonceType; SPk :AgentType; ASSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat1(AS,msg1,i1);
   lookAddPat7(AS,C,N1,SPk,ASSk,msg2,i2);
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

---pat8: AS.aenc{< AS.C.N1.pk(S) >}sk(AS) 
procedure isPat8(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat7(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat8: AS.aenc{< AS.C.N1.pk(S) >}sk(AS) 
procedure constructSpat8(AS:AgentType; C:AgentType; N1:NonceType; SPk :AgentType; ASSk :AgentType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat1(AS, i1);
    constructSpat7(AS, C, N1, SPk, ASSk, i2);
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
    put "  cons Spat8\n";
    sPat8Set.length := sPat8Set.length + 1;
    sPat8Set.content[sPat8Set.length] := index;
    num := index;
  end;

---pat9: aenc{< N2 >}pk(S) 
procedure lookAddPat9(N2:NonceType; SPk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat2(N2,msg1,i1);
   lookAddPat4(SPk,msg2,i2);
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

---pat9: aenc{< N2 >}pk(S) 
procedure isPat9(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat2(msgs[msg.aencMsg],flagPart1);
      isPat4(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat9: aenc{< N2 >}pk(S) 
procedure constructSpat9(N2:NonceType; SPk :AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat2(N2, i1);
    constructSpat4(SPk, i2);
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
    put "  cons Spat9\n";
    sPat9Set.length := sPat9Set.length + 1;
    sPat9Set.content[sPat9Set.length] := index;
    num := index;
  end;

---pat10: C.T.L.aenc{< N2 >}pk(S) 
procedure lookAddPat10(C:AgentType; T:NonceType; L:NonceType; N2:NonceType; SPk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3, msg4 : Message;
      index,i1,i2,i3,i4 : indexType;
  begin
   index:=0;
   lookAddPat1(C,msg1,i1);
   lookAddPat2(T,msg2,i2);
   lookAddPat2(L,msg3,i3);
   lookAddPat9(N2,SPk,msg4,i4);
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

---pat10: C.T.L.aenc{< N2 >}pk(S) 
procedure isPat10(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3,flagPart4: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     flagPart4 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat2(msgs[msg.concatPart[2]],flagPart2);
        isPat2(msgs[msg.concatPart[3]],flagPart3);
        isPat9(msgs[msg.concatPart[4]],flagPart4);
       if (flagPart1 & flagPart2 & flagPart3 & flagPart4) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat10: C.T.L.aenc{< N2 >}pk(S) 
procedure constructSpat10(C:AgentType; T:NonceType; L:NonceType; N2:NonceType; SPk :AgentType; Var num: indexType);
  Var i,index, i1, i2, i3, i4:indexType;
  begin
    index:=0;
    constructSpat1(C, i1);
    constructSpat2(T, i2);
    constructSpat2(L, i3);
    constructSpat9(N2, SPk, i4);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 4) then
        if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2 & msgs[i].concatPart[3] = i3 & msgs[i].concatPart[4] = i4) then
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
      msgs[index].concatPart[4] := i4;
      msgs[index].length := 4;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat10\n";
    sPat10Set.length := sPat10Set.length + 1;
    sPat10Set.content[sPat10Set.length] := index;
    num := index;
  end;

---pat11: aenc{< C.T.L.aenc{< N2 >}pk(S) >}sk(C) 
procedure lookAddPat11(C:AgentType; T:NonceType; L:NonceType; N2:NonceType; SPk :AgentType; CSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat10(C, T, L, N2, SPk,msg1,i1);
   lookAddPat6(CSk,msg2,i2);
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

---pat11: aenc{< C.T.L.aenc{< N2 >}pk(S) >}sk(C) 
procedure isPat11(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat10(msgs[msg.aencMsg],flagPart1);
      isPat6(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat11: aenc{< C.T.L.aenc{< N2 >}pk(S) >}sk(C) 
procedure constructSpat11(C:AgentType; T:NonceType; L:NonceType; N2:NonceType; SPk :AgentType; CSk :AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat10(C, T, L, N2, SPk, i1);
    constructSpat6(CSk, i2);
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

---pat12: C.S.aenc{< C.T.L.aenc{< N2 >}pk(S) >}sk(C) 
procedure lookAddPat12(C:AgentType; S:AgentType; T:NonceType; L:NonceType; N2:NonceType; SPk :AgentType; CSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3 : Message;
      index,i1,i2,i3 : indexType;
  begin
   index:=0;
   lookAddPat1(C,msg1,i1);
   lookAddPat1(S,msg2,i2);
   lookAddPat11(C,T,L,N2,SPk,CSk,msg3,i3);
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

---pat12: C.S.aenc{< C.T.L.aenc{< N2 >}pk(S) >}sk(C) 
procedure isPat12(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
        isPat11(msgs[msg.concatPart[3]],flagPart3);
       if (flagPart1 & flagPart2 & flagPart3) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat12: C.S.aenc{< C.T.L.aenc{< N2 >}pk(S) >}sk(C) 
procedure constructSpat12(C:AgentType; S:AgentType; T:NonceType; L:NonceType; N2:NonceType; SPk :AgentType; CSk :AgentType; Var num: indexType);
  Var i,index, i1, i2, i3:indexType;
  begin
    index:=0;
    constructSpat1(C, i1);
    constructSpat1(S, i2);
    constructSpat11(C, T, L, N2, SPk, CSk, i3);
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
    put "  cons Spat12\n";
    sPat12Set.length := sPat12Set.length + 1;
    sPat12Set.content[sPat12Set.length] := index;
    num := index;
  end;

---pat13: S.N2 
procedure lookAddPat13(S:AgentType; N2:NonceType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat1(S,msg1,i1);
   lookAddPat2(N2,msg2,i2);
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

---pat13: S.N2 
procedure isPat13(msg:Message; Var flag:boolean);
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
---spat13: S.N2 
procedure constructSpat13(S:AgentType; N2:NonceType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat1(S, i1);
    constructSpat2(N2, i2);
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
    put "  cons Spat13\n";
    sPat13Set.length := sPat13Set.length + 1;
    sPat13Set.content[sPat13Set.length] := index;
    num := index;
  end;

---pat14: aenc{< S.N2 >}pk(C) 
procedure lookAddPat14(S:AgentType; N2:NonceType; CPk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat13(S, N2,msg1,i1);
   lookAddPat4(CPk,msg2,i2);
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

---pat14: aenc{< S.N2 >}pk(C) 
procedure isPat14(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat13(msgs[msg.aencMsg],flagPart1);
      isPat4(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat14: aenc{< S.N2 >}pk(C) 
procedure constructSpat14(S:AgentType; N2:NonceType; CPk :AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat13(S, N2, i1);
    constructSpat4(CPk, i2);
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
    put "  cons Spat14\n";
    sPat14Set.length := sPat14Set.length + 1;
    sPat14Set.content[sPat14Set.length] := index;
    num := index;
  end;

---pat15: S.C.aenc{< S.N2 >}pk(C) 
procedure lookAddPat15(S:AgentType; C:AgentType; N2:NonceType; CPk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3 : Message;
      index,i1,i2,i3 : indexType;
  begin
   index:=0;
   lookAddPat1(S,msg1,i1);
   lookAddPat1(C,msg2,i2);
   lookAddPat14(S,N2,CPk,msg3,i3);
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

---pat15: S.C.aenc{< S.N2 >}pk(C) 
procedure isPat15(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
        isPat14(msgs[msg.concatPart[3]],flagPart3);
       if (flagPart1 & flagPart2 & flagPart3) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat15: S.C.aenc{< S.N2 >}pk(C) 
procedure constructSpat15(S:AgentType; C:AgentType; N2:NonceType; CPk :AgentType; Var num: indexType);
  Var i,index, i1, i2, i3:indexType;
  begin
    index:=0;
    constructSpat1(S, i1);
    constructSpat1(C, i2);
    constructSpat14(S, N2, CPk, i3);
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
    put "  cons Spat15\n";
    sPat15Set.length := sPat15Set.length + 1;
    sPat15Set.content[sPat15Set.length] := index;
    num := index;
  end;

procedure cons1(C:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat1(C,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat1\n";
  end;
procedure cons2(N1:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat2(N1,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat2\n";
  end;
procedure cons3(C:AgentType; S:AgentType; N1:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat3(C, S, N1,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat3\n";
  end;
procedure destruct3(msg:Message; Var C:AgentType; Var S:AgentType; Var N1:NonceType);
  Var msgNum1,msgNum2,msgNum3: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    C := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    S := msgNum2.ag;
    msgNum3 := msgs[msg.concatPart[3]];
    N1 := msgNum3.noncePart;

  end;
procedure cons4(SPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat4(SPk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat4\n";
  end;
procedure cons5(AS:AgentType; C:AgentType; N1:NonceType; SPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat5(AS, C, N1, SPk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat5\n";
  end;
procedure destruct5(msg:Message; Var AS:AgentType; Var C:AgentType; Var N1:NonceType; Var SPk:AgentType);
  Var msgNum1,msgNum2,msgNum3,msgNum4: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    AS := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    C := msgNum2.ag;
    msgNum3 := msgs[msg.concatPart[3]];
    N1 := msgNum3.noncePart;
    msgNum4 := msgs[msg.concatPart[4]];
    SPk := msgNum4.k.ag;

  end;
procedure cons6(ASSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(ASSk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat6\n";
  end;
procedure cons7(AS:AgentType; C:AgentType; N1:NonceType; SPk :AgentType; ASSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat7(AS, C, N1, SPk, ASSk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat7\n";
  end;
procedure destruct7(msg:Message; Var AS:AgentType; Var C:AgentType; Var N1:NonceType; Var SPk:AgentType; Var ASSk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2,msgNum3,msgNum4:Message;
  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
   ASSk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart[1]];
    msgNum2:=msgs[msg1.concatPart[2]];
    msgNum3:=msgs[msg1.concatPart[3]];
    msgNum4:=msgs[msg1.concatPart[4]];
    AS:=msgNum1.ag;
    C:=msgNum2.ag;
    N1:=msgNum3.noncePart;
  end;
procedure cons8(AS:AgentType; C:AgentType; N1:NonceType; SPk :AgentType; ASSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat8(AS, C, N1, SPk, ASSk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat8\n";
  end;
procedure destruct8(msg:Message; Var AS:AgentType; Var C:AgentType; Var N1:NonceType; Var SPk:AgentType; Var ASSk:AgentType);
  Var msgNum1,msgNum2: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    AS := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    k := msgs[msgNum2.aencKey].k;
    ASSk := k.ag;
    destruct5(msgs[msgNum2.aencMsg], AS, C, N1, SPk);

  end;
procedure cons9(N2:NonceType; SPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat9(N2, SPk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat9\n";
  end;
procedure destruct9(msg:Message; Var N2:NonceType; Var SPk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2:Message;
   begin
    clear msg1;
    k1 := msgs[msg.aencKey].k;
    SPk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    N2:=msg1.noncePart;
  end;
procedure cons10(C:AgentType; T:NonceType; L:NonceType; N2:NonceType; SPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat10(C, T, L, N2, SPk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat10\n";
  end;
procedure destruct10(msg:Message; Var C:AgentType; Var T:NonceType; Var L:NonceType; Var N2:NonceType; Var SPk:AgentType);
  Var msgNum1,msgNum2,msgNum3,msgNum4: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    C := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    T := msgNum2.noncePart;
    msgNum3 := msgs[msg.concatPart[3]];
    L := msgNum3.noncePart;
    msgNum4 := msgs[msg.concatPart[4]];
    k := msgs[msgNum4.aencKey].k;
    SPk := k.ag;
    N2 := msgs[msgNum4.aencMsg].noncePart;

  end;
procedure cons11(C:AgentType; T:NonceType; L:NonceType; N2:NonceType; SPk :AgentType; CSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat11(C, T, L, N2, SPk, CSk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat11\n";
  end;
procedure destruct11(msg:Message; Var C:AgentType; Var T:NonceType; Var L:NonceType; Var N2:NonceType; Var SPk:AgentType; Var CSk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2,msgNum3,msgNum4:Message;
  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
   CSk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart[1]];
    msgNum2:=msgs[msg1.concatPart[2]];
    msgNum3:=msgs[msg1.concatPart[3]];
    msgNum4:=msgs[msg1.concatPart[4]];
    C:=msgNum1.ag;
    T:=msgNum2.noncePart;
    L:=msgNum3.noncePart;
  end;
procedure cons12(C:AgentType; S:AgentType; T:NonceType; L:NonceType; N2:NonceType; SPk :AgentType; CSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat12(C, S, T, L, N2, SPk, CSk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat12\n";
  end;
procedure destruct12(msg:Message; Var C:AgentType; Var S:AgentType; Var T:NonceType; Var L:NonceType; Var N2:NonceType; Var SPk:AgentType; Var CSk:AgentType);
  Var msgNum1,msgNum2,msgNum3: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    C := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    S := msgNum2.ag;
    msgNum3 := msgs[msg.concatPart[3]];
    k := msgs[msgNum3.aencKey].k;
    CSk := k.ag;
    destruct10(msgs[msgNum3.aencMsg], C, T, L, N2, SPk);

  end;
procedure cons13(S:AgentType; N2:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat13(S, N2,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat13\n";
  end;
procedure destruct13(msg:Message; Var S:AgentType; Var N2:NonceType);
  Var msgNum1,msgNum2: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    S := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    N2 := msgNum2.noncePart;

  end;
procedure cons14(S:AgentType; N2:NonceType; CPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat14(S, N2, CPk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat14\n";
  end;
procedure destruct14(msg:Message; Var S:AgentType; Var N2:NonceType; Var CPk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2:Message;
  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
   CPk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart[1]];
    msgNum2:=msgs[msg1.concatPart[2]];
    S:=msgNum1.ag;
    N2:=msgNum2.noncePart;
  end;
procedure cons15(S:AgentType; C:AgentType; N2:NonceType; CPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat15(S, C, N2, CPk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat15\n";
  end;
procedure destruct15(msg:Message; Var S:AgentType; Var C:AgentType; Var N2:NonceType; Var CPk:AgentType);
  Var msgNum1,msgNum2,msgNum3: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    S := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    C := msgNum2.ag;
    msgNum3 := msgs[msg.concatPart[3]];
    k := msgs[msgNum3.aencKey].k;
    CPk := k.ag;
    destruct13(msgs[msgNum3.aencMsg], S, N2);

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

function construct3By112(msgNo1,msgNo2,msgNo3:indexType):indexType;
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

--- Sorry, construct_function of this pattern has not been written!

function construct5By1124(msgNo1,msgNo2,msgNo3,msgNo4:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 4) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3 & msgs[i].concatPart[4] = msgNo4) then
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
     msgs[index].concatPart[4] := msgNo4;
     msgs[index].length := 4;
   endif;
   return index;
  end;

--- Sorry, construct_function of this pattern has not been written!

function construct7By56(msgNo5, msgNo6:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo5 & msgs[i].aencKey = msgNo6) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo5;
     msgs[index].aencKey := msgNo6;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct8By17(msgNo1,msgNo2:indexType):indexType;
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

function construct9By24(msgNo2, msgNo4:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo2 & msgs[i].aencKey = msgNo4) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo2;
     msgs[index].aencKey := msgNo4;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct10By1229(msgNo1,msgNo2,msgNo3,msgNo4:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 4) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3 & msgs[i].concatPart[4] = msgNo4) then
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
     msgs[index].concatPart[4] := msgNo4;
     msgs[index].length := 4;
   endif;
   return index;
  end;

function construct11By106(msgNo10, msgNo6:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo10 & msgs[i].aencKey = msgNo6) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo10;
     msgs[index].aencKey := msgNo6;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct12By1111(msgNo1,msgNo2,msgNo3:indexType):indexType;
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

function construct13By12(msgNo1,msgNo2:indexType):indexType;
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

function construct14By134(msgNo13, msgNo4:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo13 & msgs[i].aencKey = msgNo4) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo13;
     msgs[index].aencKey := msgNo4;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct15By1114(msgNo1,msgNo2,msgNo3:indexType):indexType;
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
procedure deconcatPat3(msg: Message);
  var msgPat1, msgPat2, msgPat3:indexType;
  	  flagPat1, flagPat2, flagPat3:boolean;
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
      isPat1(msgs[msgPat2],flagPat2);
      if (flagPat2) then
        if(!exist(pat1Set,msgPat2)) then
           pat1Set.length:=pat1Set.length+1;
           pat1Set.content[pat1Set.length] := msgPat2;
        endif;
      endif;
    endif;
    if (!Spy_known[msg.concatPart[3]]) then
      Spy_known[msg.concatPart[3]] := true;
      msgPat3 := msg.concatPart[3];
      isPat2(msgs[msgPat3],flagPat3);
      if (flagPat3) then
        if(!exist(pat2Set,msgPat3)) then
           pat2Set.length:=pat2Set.length+1;
           pat2Set.content[pat2Set.length] := msgPat3;
        endif;
      endif;
    endif;
  end;

procedure enconcatPat3();
  var i1, i2, i3, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat1Set.length) do
      i2 := 1;
      while (i2 <= pat1Set.length) do
        i3 := 1;
        while (i3 <= pat2Set.length) do
          if (matchPat(msgs[construct3By112(pat1Set.content[i1], pat1Set.content[i2], pat2Set.content[i3])], sPat3Set) &
              !Spy_known[construct3By112(pat1Set.content[i1], pat1Set.content[i2], pat2Set.content[i3])]) then
               concatMsgNo := construct3By112(pat1Set.content[i1], pat1Set.content[i2], pat2Set.content[i3]);
               if (!exist(pat3Set,concatMsgNo)) then
                   pat3Set.length := pat3Set.length+1;
                   pat3Set.content[pat3Set.length]:=concatMsgNo;
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

procedure deconcatPat5(msg: Message);
  var msgPat1, msgPat2, msgPat3, msgPat4:indexType;
  	  flagPat1, flagPat2, flagPat3, flagPat4:boolean;
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
      isPat1(msgs[msgPat2],flagPat2);
      if (flagPat2) then
        if(!exist(pat1Set,msgPat2)) then
           pat1Set.length:=pat1Set.length+1;
           pat1Set.content[pat1Set.length] := msgPat2;
        endif;
      endif;
    endif;
    if (!Spy_known[msg.concatPart[3]]) then
      Spy_known[msg.concatPart[3]] := true;
      msgPat3 := msg.concatPart[3];
      isPat2(msgs[msgPat3],flagPat3);
      if (flagPat3) then
        if(!exist(pat2Set,msgPat3)) then
           pat2Set.length:=pat2Set.length+1;
           pat2Set.content[pat2Set.length] := msgPat3;
        endif;
      endif;
    endif;
    if (!Spy_known[msg.concatPart[4]]) then
      Spy_known[msg.concatPart[4]] := true;
      msgPat4 := msg.concatPart[4];
      isPat4(msgs[msgPat4],flagPat4);
      if (flagPat4) then
        if(!exist(pat4Set,msgPat4)) then
           pat4Set.length:=pat4Set.length+1;
           pat4Set.content[pat4Set.length] := msgPat4;
        endif;
      endif;
    endif;
  end;

procedure enconcatPat5();
  var i1, i2, i3, i4, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat1Set.length) do
      i2 := 1;
      while (i2 <= pat1Set.length) do
        i3 := 1;
        while (i3 <= pat2Set.length) do
          i4 := 1;
          while (i4 <= pat4Set.length) do
            if (matchPat(msgs[construct5By1124(pat1Set.content[i1], pat1Set.content[i2], pat2Set.content[i3], pat4Set.content[i4])], sPat5Set) &
                !Spy_known[construct5By1124(pat1Set.content[i1], pat1Set.content[i2], pat2Set.content[i3], pat4Set.content[i4])]) then
                 concatMsgNo := construct5By1124(pat1Set.content[i1], pat1Set.content[i2], pat2Set.content[i3], pat4Set.content[i4]);
                 if (!exist(pat5Set,concatMsgNo)) then
                     pat5Set.length := pat5Set.length+1;
                     pat5Set.content[pat5Set.length]:=concatMsgNo;
                 endif; 
                 if (!Spy_known[concatMsgNo]) then
                    Spy_known[concatMsgNo] := true;
                 endif;
            endif;
            i4 := i4 + 1;
          endwhile;
          i3 := i3 + 1;
        endwhile;
        i2 := i2 + 1;
      endwhile;
      i1 := i1 + 1;
    endwhile;
  end;

procedure aDecryptionPat7(msg: Message);
  var key_inv:Message;
      msgPat5:indexType;
  	  flag_pat5:boolean;
  begin
    if (! Spy_known[msg.aencMsg]) then
       key_inv := inverseKey(msgs[msg.aencKey]);
       if (key_inv.k.ag = Intruder | key_inv.k.encType = PK) then
         Spy_known[msg.aencMsg]:=true;
         msgPat5:=msg.aencMsg;
         isPat5(msgs[msgPat5],flag_pat5);
         if (flag_pat5) then
           if (!exist(pat5Set,msgPat5)) then
             pat5Set.length:=pat5Set.length+1;
             pat5Set.content[pat5Set.length]:=msgPat5;
             deconcatPat5(msgs[msgPat5]);
           endif;
         endif;
       endif;
    endif;
  end;

procedure aEncryptionPat7();
  var i, j, encMsgNo:indexType;
  begin
    i := 1;
    while (i <= pat5Set.length) do
      j := 1;
      while (j<=pat6Set.length) do
        if (matchPat(msgs[construct7By56(pat5Set.content[i],pat6Set.content[j])], sPat7Set) &
           !Spy_known[construct7By56(pat5Set.content[i],pat6Set.content[j])]) then
           if (msgs[pat6Set.content[j]].k.encType=PK) then
             encMsgNo := construct7By56(pat5Set.content[i],pat6Set.content[j]);
             if (!exist(pat7Set,encMsgNo)) then
                pat7Set.length := pat7Set.length+1;
                pat7Set.content[pat7Set.length]:=encMsgNo;
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

procedure deconcatPat8(msg: Message);
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
      isPat7(msgs[msgPat2],flagPat2);
      if (flagPat2) then
        if(!exist(pat7Set,msgPat2)) then
           pat7Set.length:=pat7Set.length+1;
           pat7Set.content[pat7Set.length] := msgPat2;
           aDecryptionPat7(msgs[msgPat2]);
        endif;
      endif;
    endif;
  end;

procedure enconcatPat8();
  var i1, i2, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat1Set.length) do
      i2 := 1;
      while (i2 <= pat7Set.length) do
        if (matchPat(msgs[construct8By17(pat1Set.content[i1], pat7Set.content[i2])], sPat8Set) &
            !Spy_known[construct8By17(pat1Set.content[i1], pat7Set.content[i2])]) then
             concatMsgNo := construct8By17(pat1Set.content[i1], pat7Set.content[i2]);
             if (!exist(pat8Set,concatMsgNo)) then
                 pat8Set.length := pat8Set.length+1;
                 pat8Set.content[pat8Set.length]:=concatMsgNo;
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

procedure aDecryptionPat9(msg: Message);
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

procedure aEncryptionPat9();
  var i, j, encMsgNo:indexType;
  begin
    i := 1;
    while (i <= pat2Set.length) do
      j := 1;
      while (j<=pat4Set.length) do
        if (matchPat(msgs[construct9By24(pat2Set.content[i],pat4Set.content[j])], sPat9Set) &
           !Spy_known[construct9By24(pat2Set.content[i],pat4Set.content[j])]) then
           if (msgs[pat4Set.content[j]].k.encType=PK) then
             encMsgNo := construct9By24(pat2Set.content[i],pat4Set.content[j]);
             if (!exist(pat9Set,encMsgNo)) then
                pat9Set.length := pat9Set.length+1;
                pat9Set.content[pat9Set.length]:=encMsgNo;
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

procedure deconcatPat10(msg: Message);
  var msgPat1, msgPat2, msgPat3, msgPat4:indexType;
  	  flagPat1, flagPat2, flagPat3, flagPat4:boolean;
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
      isPat2(msgs[msgPat2],flagPat2);
      if (flagPat2) then
        if(!exist(pat2Set,msgPat2)) then
           pat2Set.length:=pat2Set.length+1;
           pat2Set.content[pat2Set.length] := msgPat2;
        endif;
      endif;
    endif;
    if (!Spy_known[msg.concatPart[3]]) then
      Spy_known[msg.concatPart[3]] := true;
      msgPat3 := msg.concatPart[3];
      isPat2(msgs[msgPat3],flagPat3);
      if (flagPat3) then
        if(!exist(pat2Set,msgPat3)) then
           pat2Set.length:=pat2Set.length+1;
           pat2Set.content[pat2Set.length] := msgPat3;
        endif;
      endif;
    endif;
    if (!Spy_known[msg.concatPart[4]]) then
      Spy_known[msg.concatPart[4]] := true;
      msgPat4 := msg.concatPart[4];
      isPat9(msgs[msgPat4],flagPat4);
      if (flagPat4) then
        if(!exist(pat9Set,msgPat4)) then
           pat9Set.length:=pat9Set.length+1;
           pat9Set.content[pat9Set.length] := msgPat4;
           aDecryptionPat9(msgs[msgPat4]);
        endif;
      endif;
    endif;
  end;

procedure enconcatPat10();
  var i1, i2, i3, i4, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat1Set.length) do
      i2 := 1;
      while (i2 <= pat2Set.length) do
        i3 := 1;
        while (i3 <= pat2Set.length) do
          i4 := 1;
          while (i4 <= pat9Set.length) do
            if (matchPat(msgs[construct10By1229(pat1Set.content[i1], pat2Set.content[i2], pat2Set.content[i3], pat9Set.content[i4])], sPat10Set) &
                !Spy_known[construct10By1229(pat1Set.content[i1], pat2Set.content[i2], pat2Set.content[i3], pat9Set.content[i4])]) then
                 concatMsgNo := construct10By1229(pat1Set.content[i1], pat2Set.content[i2], pat2Set.content[i3], pat9Set.content[i4]);
                 if (!exist(pat10Set,concatMsgNo)) then
                     pat10Set.length := pat10Set.length+1;
                     pat10Set.content[pat10Set.length]:=concatMsgNo;
                 endif; 
                 if (!Spy_known[concatMsgNo]) then
                    Spy_known[concatMsgNo] := true;
                 endif;
            endif;
            i4 := i4 + 1;
          endwhile;
          i3 := i3 + 1;
        endwhile;
        i2 := i2 + 1;
      endwhile;
      i1 := i1 + 1;
    endwhile;
  end;

procedure aDecryptionPat11(msg: Message);
  var key_inv:Message;
      msgPat10:indexType;
  	  flag_pat10:boolean;
  begin
    if (! Spy_known[msg.aencMsg]) then
       key_inv := inverseKey(msgs[msg.aencKey]);
       if (key_inv.k.ag = Intruder | key_inv.k.encType = PK) then
         Spy_known[msg.aencMsg]:=true;
         msgPat10:=msg.aencMsg;
         isPat10(msgs[msgPat10],flag_pat10);
         if (flag_pat10) then
           if (!exist(pat10Set,msgPat10)) then
             pat10Set.length:=pat10Set.length+1;
             pat10Set.content[pat10Set.length]:=msgPat10;
             deconcatPat10(msgs[msgPat10]);
           endif;
         endif;
       endif;
    endif;
  end;

procedure aEncryptionPat11();
  var i, j, encMsgNo:indexType;
  begin
    i := 1;
    while (i <= pat10Set.length) do
      j := 1;
      while (j<=pat6Set.length) do
        if (matchPat(msgs[construct11By106(pat10Set.content[i],pat6Set.content[j])], sPat11Set) &
           !Spy_known[construct11By106(pat10Set.content[i],pat6Set.content[j])]) then
           if (msgs[pat6Set.content[j]].k.encType=PK) then
             encMsgNo := construct11By106(pat10Set.content[i],pat6Set.content[j]);
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
  var msgPat1, msgPat2, msgPat3:indexType;
  	  flagPat1, flagPat2, flagPat3:boolean;
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
      isPat1(msgs[msgPat2],flagPat2);
      if (flagPat2) then
        if(!exist(pat1Set,msgPat2)) then
           pat1Set.length:=pat1Set.length+1;
           pat1Set.content[pat1Set.length] := msgPat2;
        endif;
      endif;
    endif;
    if (!Spy_known[msg.concatPart[3]]) then
      Spy_known[msg.concatPart[3]] := true;
      msgPat3 := msg.concatPart[3];
      isPat11(msgs[msgPat3],flagPat3);
      if (flagPat3) then
        if(!exist(pat11Set,msgPat3)) then
           pat11Set.length:=pat11Set.length+1;
           pat11Set.content[pat11Set.length] := msgPat3;
           aDecryptionPat11(msgs[msgPat3]);
        endif;
      endif;
    endif;
  end;

procedure enconcatPat12();
  var i1, i2, i3, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat1Set.length) do
      i2 := 1;
      while (i2 <= pat1Set.length) do
        i3 := 1;
        while (i3 <= pat11Set.length) do
          if (matchPat(msgs[construct12By1111(pat1Set.content[i1], pat1Set.content[i2], pat11Set.content[i3])], sPat12Set) &
              !Spy_known[construct12By1111(pat1Set.content[i1], pat1Set.content[i2], pat11Set.content[i3])]) then
               concatMsgNo := construct12By1111(pat1Set.content[i1], pat1Set.content[i2], pat11Set.content[i3]);
               if (!exist(pat12Set,concatMsgNo)) then
                   pat12Set.length := pat12Set.length+1;
                   pat12Set.content[pat12Set.length]:=concatMsgNo;
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

procedure deconcatPat13(msg: Message);
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
      isPat2(msgs[msgPat2],flagPat2);
      if (flagPat2) then
        if(!exist(pat2Set,msgPat2)) then
           pat2Set.length:=pat2Set.length+1;
           pat2Set.content[pat2Set.length] := msgPat2;
        endif;
      endif;
    endif;
  end;

procedure enconcatPat13();
  var i1, i2, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat1Set.length) do
      i2 := 1;
      while (i2 <= pat2Set.length) do
        if (matchPat(msgs[construct13By12(pat1Set.content[i1], pat2Set.content[i2])], sPat13Set) &
            !Spy_known[construct13By12(pat1Set.content[i1], pat2Set.content[i2])]) then
             concatMsgNo := construct13By12(pat1Set.content[i1], pat2Set.content[i2]);
             if (!exist(pat13Set,concatMsgNo)) then
                 pat13Set.length := pat13Set.length+1;
                 pat13Set.content[pat13Set.length]:=concatMsgNo;
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

procedure aDecryptionPat14(msg: Message);
  var key_inv:Message;
      msgPat13:indexType;
  	  flag_pat13:boolean;
  begin
    if (! Spy_known[msg.aencMsg]) then
       key_inv := inverseKey(msgs[msg.aencKey]);
       if (key_inv.k.ag = Intruder | key_inv.k.encType = PK) then
         Spy_known[msg.aencMsg]:=true;
         msgPat13:=msg.aencMsg;
         isPat13(msgs[msgPat13],flag_pat13);
         if (flag_pat13) then
           if (!exist(pat13Set,msgPat13)) then
             pat13Set.length:=pat13Set.length+1;
             pat13Set.content[pat13Set.length]:=msgPat13;
             deconcatPat13(msgs[msgPat13]);
           endif;
         endif;
       endif;
    endif;
  end;

procedure aEncryptionPat14();
  var i, j, encMsgNo:indexType;
  begin
    i := 1;
    while (i <= pat13Set.length) do
      j := 1;
      while (j<=pat4Set.length) do
        if (matchPat(msgs[construct14By134(pat13Set.content[i],pat4Set.content[j])], sPat14Set) &
           !Spy_known[construct14By134(pat13Set.content[i],pat4Set.content[j])]) then
           if (msgs[pat4Set.content[j]].k.encType=PK) then
             encMsgNo := construct14By134(pat13Set.content[i],pat4Set.content[j]);
             if (!exist(pat14Set,encMsgNo)) then
                pat14Set.length := pat14Set.length+1;
                pat14Set.content[pat14Set.length]:=encMsgNo;
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

procedure deconcatPat15(msg: Message);
  var msgPat1, msgPat2, msgPat3:indexType;
  	  flagPat1, flagPat2, flagPat3:boolean;
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
      isPat1(msgs[msgPat2],flagPat2);
      if (flagPat2) then
        if(!exist(pat1Set,msgPat2)) then
           pat1Set.length:=pat1Set.length+1;
           pat1Set.content[pat1Set.length] := msgPat2;
        endif;
      endif;
    endif;
    if (!Spy_known[msg.concatPart[3]]) then
      Spy_known[msg.concatPart[3]] := true;
      msgPat3 := msg.concatPart[3];
      isPat14(msgs[msgPat3],flagPat3);
      if (flagPat3) then
        if(!exist(pat14Set,msgPat3)) then
           pat14Set.length:=pat14Set.length+1;
           pat14Set.content[pat14Set.length] := msgPat3;
           aDecryptionPat14(msgs[msgPat3]);
        endif;
      endif;
    endif;
  end;

procedure enconcatPat15();
  var i1, i2, i3, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat1Set.length) do
      i2 := 1;
      while (i2 <= pat1Set.length) do
        i3 := 1;
        while (i3 <= pat14Set.length) do
          if (matchPat(msgs[construct15By1114(pat1Set.content[i1], pat1Set.content[i2], pat14Set.content[i3])], sPat15Set) &
              !Spy_known[construct15By1114(pat1Set.content[i1], pat1Set.content[i2], pat14Set.content[i3])]) then
               concatMsgNo := construct15By1114(pat1Set.content[i1], pat1Set.content[i2], pat14Set.content[i3]);
               if (!exist(pat15Set,concatMsgNo)) then
                   pat15Set.length := pat15Set.length+1;
                   pat15Set.content[pat15Set.length]:=concatMsgNo;
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

ruleset i:roleSNums do
rule " roleS1 "
roleS[i].st = S1 & ch[3].empty = false & !roleS[i].commit
==>
var flag_pat12:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[3].msg;
   isPat12(msg, flag_pat12);
   if(flag_pat12) then
     destruct12(msg,roleS[i].locC,roleS[i].locS,roleS[i].locT,roleS[i].locL,roleS[i].locN2,roleS[i].locS,roleS[i].locC);
     if(matchAgent(roleS[i].locC, roleS[i].C) & matchAgent(roleS[i].locS, roleS[i].S) & matchNonce(roleS[i].locT, roleS[i].T) & matchNonce(roleS[i].locL, roleS[i].L) & matchNonce(roleS[i].locN2, roleS[i].N2) & matchAgent(roleS[i].locS, roleS[i].S) & matchAgent(roleS[i].locC, roleS[i].C))then
       ch[3].empty:=true;
       clear ch[3].msg;
       roleS[i].st := S2;
     endif;
   endif;
   put "roleS recieve from ch[3]. ";
   put " msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleS2 "
roleS[i].st = S2 & ch[4].empty = true & !roleS[i].commit
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons3(roleS[i].S,roleS[i].locC,roleS[i].N3,msg,msgNo);
   ch[4].empty := false;
   ch[4].msg := msg;
   ch[4].sender := roleS[i].S;
   ch[4].receiver := Intruder;
   roleS[i].st := S3;
   put "roleS send into ch[4]. ";
   put " msg: ";
   printMsg(ch[4].msg);
   put "\n";
end;
rule " roleS3 "
roleS[i].st = S3 & ch[5].empty = false & !roleS[i].commit
==>
var flag_pat8:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[5].msg;
   isPat8(msg, flag_pat8);
   if(flag_pat8) then
     destruct8(msg,roleS[i].locAS,roleS[i].locS,roleS[i].locN3,roleS[i].locC,roleS[i].locAS);
     if(matchAgent(roleS[i].locAS, roleS[i].AS) & matchAgent(roleS[i].locS, roleS[i].S) & matchNonce(roleS[i].locN3, roleS[i].N3) & matchAgent(roleS[i].locC, roleS[i].C) & matchAgent(roleS[i].locAS, roleS[i].AS))then
       ch[5].empty:=true;
       clear ch[5].msg;
       roleS[i].st := S4;
     endif;
   endif;
   put "roleS recieve from ch[5]. ";
   put " msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleS4 "
roleS[i].st = S4 & ch[6].empty = true & !roleS[i].commit
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons15(roleS[i].S,roleS[i].locC,roleS[i].locN2,roleS[i].locC,msg,msgNo);
   ch[6].empty := false;
   ch[6].msg := msg;
   ch[6].sender := roleS[i].S;
   ch[6].receiver := Intruder;
   roleS[i].st := S1;
   put "roleS send into ch[6]. ";
   put " msg: ";
   printMsg(ch[6].msg);
   put "\n";
   roleS[i].commit := true;
end;
endruleset;

ruleset i:roleCNums do
rule " roleC1 "
roleC[i].st = C1 & ch[1].empty = true & !roleC[i].commit
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons3(roleC[i].C,roleC[i].S,roleC[i].N1,msg,msgNo);
   ch[1].empty := false;
   ch[1].msg := msg;
   ch[1].sender := roleC[i].C;
   ch[1].receiver := Intruder;
   roleC[i].st := C2;
   put "roleC send into ch[1]. ";
   put " msg: ";
   printMsg(ch[1].msg);
   put "\n";
end;
rule " roleC2 "
roleC[i].st = C2 & ch[2].empty = false & !roleC[i].commit
==>
var flag_pat8:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[2].msg;
   isPat8(msg, flag_pat8);
   if(flag_pat8) then
     destruct8(msg,roleC[i].locAS,roleC[i].locC,roleC[i].locN1,roleC[i].locS,roleC[i].locAS);
     if(matchAgent(roleC[i].locAS, roleC[i].AS) & matchAgent(roleC[i].locC, roleC[i].C) & matchNonce(roleC[i].locN1, roleC[i].N1) & matchAgent(roleC[i].locS, roleC[i].S) & matchAgent(roleC[i].locAS, roleC[i].AS))then
       ch[2].empty:=true;
       clear ch[2].msg;
       roleC[i].st := C3;
     endif;
   endif;
   put "roleC recieve from ch[2]. ";
   put " msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleC3 "
roleC[i].st = C3 & ch[3].empty = true & !roleC[i].commit
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons12(roleC[i].C,roleC[i].S,roleC[i].T,roleC[i].L,roleC[i].N2,roleC[i].S,roleC[i].C,msg,msgNo);
   ch[3].empty := false;
   ch[3].msg := msg;
   ch[3].sender := roleC[i].C;
   ch[3].receiver := Intruder;
   roleC[i].st := C4;
   put "roleC send into ch[3]. ";
   put " msg: ";
   printMsg(ch[3].msg);
   put "\n";
end;
rule " roleC4 "
roleC[i].st = C4 & ch[6].empty = false & !roleC[i].commit
==>
var flag_pat15:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[6].msg;
   isPat15(msg, flag_pat15);
   if(flag_pat15) then
     destruct15(msg,roleC[i].locS,roleC[i].locC,roleC[i].locN2,roleC[i].locC);
     if(matchAgent(roleC[i].locS, roleC[i].S) & matchAgent(roleC[i].locC, roleC[i].C) & matchNonce(roleC[i].locN2, roleC[i].N2) & matchAgent(roleC[i].locC, roleC[i].C))then
       ch[6].empty:=true;
       clear ch[6].msg;
       roleC[i].st := C1;
     endif;
   endif;
   put "roleC recieve from ch[6]. ";
   put " msg: ";
   printMsg(msg);
   put "\n";
   roleC[i].commit := true;
end;
endruleset;

ruleset i:roleASNums do
rule " roleAS1 "
roleAS[i].st = AS1 & ch[1].empty = false & !roleAS[i].commit
==>
var flag_pat3:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[1].msg;
   isPat3(msg, flag_pat3);
   if(flag_pat3) then
     destruct3(msg,roleAS[i].locC,roleAS[i].locS,roleAS[i].locN1);
     if(matchAgent(roleAS[i].locC, roleAS[i].C) & matchAgent(roleAS[i].locS, roleAS[i].S) & matchNonce(roleAS[i].locN1, roleAS[i].N1))then
       ch[1].empty:=true;
       clear ch[1].msg;
       roleAS[i].st := AS2;
     endif;
   endif;
   put "roleAS recieve from ch[1]. ";
   put " msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleAS2 "
roleAS[i].st = AS2 & ch[2].empty = true & !roleAS[i].commit
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons8(roleAS[i].AS,roleAS[i].locC,roleAS[i].locN1,roleAS[i].locS,roleAS[i].AS,msg,msgNo);
   ch[2].empty := false;
   ch[2].msg := msg;
   ch[2].sender := roleAS[i].AS;
   ch[2].receiver := Intruder;
   roleAS[i].st := AS3;
   put "roleAS send into ch[2]. ";
   put " msg: ";
   printMsg(ch[2].msg);
   put "\n";
end;
rule " roleAS3 "
roleAS[i].st = AS3 & ch[4].empty = false & !roleAS[i].commit
==>
var flag_pat3:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[4].msg;
   isPat3(msg, flag_pat3);
   if(flag_pat3) then
     destruct3(msg,roleAS[i].locS,roleAS[i].locC,roleAS[i].locN3);
     if(matchAgent(roleAS[i].locS, roleAS[i].S) & matchAgent(roleAS[i].locC, roleAS[i].C) & matchNonce(roleAS[i].locN3, roleAS[i].N3))then
       ch[4].empty:=true;
       clear ch[4].msg;
       roleAS[i].st := AS4;
     endif;
   endif;
   put "roleAS recieve from ch[4]. ";
   put " msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleAS4 "
roleAS[i].st = AS4 & ch[5].empty = true & !roleAS[i].commit
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons8(roleAS[i].AS,roleAS[i].locS,roleAS[i].locN3,roleAS[i].locC,roleAS[i].AS,msg,msgNo);
   ch[5].empty := false;
   ch[5].msg := msg;
   ch[5].sender := roleAS[i].AS;
   ch[5].receiver := Intruder;
   roleAS[i].st := AS1;
   put "roleAS send into ch[5]. ";
   put " msg: ";
   printMsg(ch[5].msg);
   put "\n";
   roleAS[i].commit := true;
end;
endruleset;


---rule of intruder to get msg from ch[1] 
rule "intruderGetMsgFromCh[1]" 
  ch[1].empty = false
  ==>
  var flag_pat3:boolean;
      i, msgNo:indexType;
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
       deconcatPat3(msg);
       enconcatPat3();
      endif;
      ch[1].empty := true;
      clear ch[1].msg;
    endif;
  end;

---rule of intruder to get msg from ch[2] 
rule "intruderGetMsgFromCh[2]" 
  ch[2].empty = false
  ==>
  var flag_pat8:boolean;
      i, msgNo:indexType;
      msg:Message;
  begin
    msg := ch[2].msg;
    get_msgNo(msg, msgNo);
    isPat8(msg,flag_pat8);
    if (flag_pat8) then
      if(!exist(pat8Set,msgNo)) then
        pat8Set.length:=pat8Set.length+1;
        pat8Set.content[pat8Set.length]:=msgNo;
        Spy_known[msgNo] := true;
       deconcatPat8(msg);
       enconcatPat8();
      endif;
      ch[2].empty := true;
      clear ch[2].msg;
    endif;
  end;

---rule of intruder to get msg from ch[3] 
rule "intruderGetMsgFromCh[3]" 
  ch[3].empty = false
  ==>
  var flag_pat12:boolean;
      i, msgNo:indexType;
      msg:Message;
  begin
    msg := ch[3].msg;
    get_msgNo(msg, msgNo);
    isPat12(msg,flag_pat12);
    if (flag_pat12) then
      if(!exist(pat12Set,msgNo)) then
        pat12Set.length:=pat12Set.length+1;
        pat12Set.content[pat12Set.length]:=msgNo;
        Spy_known[msgNo] := true;
       deconcatPat12(msg);
       enconcatPat12();
      endif;
      ch[3].empty := true;
      clear ch[3].msg;
    endif;
  end;

---rule of intruder to get msg from ch[4] 
rule "intruderGetMsgFromCh[4]" 
  ch[4].empty = false
  ==>
  var flag_pat3:boolean;
      i, msgNo:indexType;
      msg:Message;
  begin
    msg := ch[4].msg;
    get_msgNo(msg, msgNo);
    isPat3(msg,flag_pat3);
    if (flag_pat3) then
      if(!exist(pat3Set,msgNo)) then
        pat3Set.length:=pat3Set.length+1;
        pat3Set.content[pat3Set.length]:=msgNo;
        Spy_known[msgNo] := true;
       deconcatPat3(msg);
       enconcatPat3();
      endif;
      ch[4].empty := true;
      clear ch[4].msg;
    endif;
  end;

---rule of intruder to get msg from ch[5] 
rule "intruderGetMsgFromCh[5]" 
  ch[5].empty = false
  ==>
  var flag_pat8:boolean;
      i, msgNo:indexType;
      msg:Message;
  begin
    msg := ch[5].msg;
    get_msgNo(msg, msgNo);
    isPat8(msg,flag_pat8);
    if (flag_pat8) then
      if(!exist(pat8Set,msgNo)) then
        pat8Set.length:=pat8Set.length+1;
        pat8Set.content[pat8Set.length]:=msgNo;
        Spy_known[msgNo] := true;
       deconcatPat8(msg);
       enconcatPat8();
      endif;
      ch[5].empty := true;
      clear ch[5].msg;
    endif;
  end;

---rule of intruder to get msg from ch[6] 
rule "intruderGetMsgFromCh[6]" 
  ch[6].empty = false
  ==>
  var flag_pat15:boolean;
      i, msgNo:indexType;
      msg:Message;
  begin
    msg := ch[6].msg;
    get_msgNo(msg, msgNo);
    isPat15(msg,flag_pat15);
    if (flag_pat15) then
      if(!exist(pat15Set,msgNo)) then
        pat15Set.length:=pat15Set.length+1;
        pat15Set.content[pat15Set.length]:=msgNo;
        Spy_known[msgNo] := true;
       deconcatPat15(msg);
       enconcatPat15();
      endif;
      ch[6].empty := true;
      clear ch[6].msg;
    endif;
  end;

---rule of intruder to emit msg into ch[1].
ruleset i: msgLen do
  ruleset j: roleASNums do
    rule "intruderEmitMsgIntoCh[1]"
      ch[1].empty=true & i <= pat3Set.length & pat3Set.content[i] != 0 &
      Spy_known[pat3Set.content[i]] & matchPat(msgs[pat3Set.content[i]], sPat3Set) &
      !emit[pat3Set.content[i]]
      ==>
      begin
        if (!emit[pat3Set.content[i]]) then  --- & msgs[msgs[pat3Set.content[i]].aencKey].k.ag=roleAS[j].AS
          clear ch[1];
          ch[1].msg:=msgs[pat3Set.content[i]];
          ch[1].sender:=Intruder;
          ch[1].receiver:=roleAS[j].AS;
          ch[1].empty:=false;
          emit[pat3Set.content[i]] := true;
          put "Intruder emit msg into ch1. ";
          put " msg:   ";          printMsg(ch[1].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[2].
ruleset i: msgLen do
  ruleset j: roleCNums do
    rule "intruderEmitMsgIntoCh[2]"
      ch[2].empty=true & i <= pat8Set.length & pat8Set.content[i] != 0 &
      Spy_known[pat8Set.content[i]] & matchPat(msgs[pat8Set.content[i]], sPat8Set) &
      !emit[pat8Set.content[i]]
      ==>
      begin
        if (!emit[pat8Set.content[i]]) then  --- & msgs[msgs[pat8Set.content[i]].aencKey].k.ag=roleC[j].C
          clear ch[2];
          ch[2].msg:=msgs[pat8Set.content[i]];
          ch[2].sender:=Intruder;
          ch[2].receiver:=roleC[j].C;
          ch[2].empty:=false;
          emit[pat8Set.content[i]] := true;
          put "Intruder emit msg into ch2. ";
          put " msg:   ";          printMsg(ch[2].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[3].
ruleset i: msgLen do
  ruleset j: roleSNums do
    rule "intruderEmitMsgIntoCh[3]"
      ch[3].empty=true & i <= pat12Set.length & pat12Set.content[i] != 0 &
      Spy_known[pat12Set.content[i]] & matchPat(msgs[pat12Set.content[i]], sPat12Set) &
      !emit[pat12Set.content[i]]
      ==>
      begin
        if (!emit[pat12Set.content[i]]) then  --- & msgs[msgs[pat12Set.content[i]].aencKey].k.ag=roleS[j].S
          clear ch[3];
          ch[3].msg:=msgs[pat12Set.content[i]];
          ch[3].sender:=Intruder;
          ch[3].receiver:=roleS[j].S;
          ch[3].empty:=false;
          emit[pat12Set.content[i]] := true;
          put "Intruder emit msg into ch3. ";
          put " msg:   ";          printMsg(ch[3].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[4].
ruleset i: msgLen do
  ruleset j: roleASNums do
    rule "intruderEmitMsgIntoCh[4]"
      ch[4].empty=true & i <= pat3Set.length & pat3Set.content[i] != 0 &
      Spy_known[pat3Set.content[i]] & matchPat(msgs[pat3Set.content[i]], sPat3Set) &
      !emit[pat3Set.content[i]]
      ==>
      begin
        if (!emit[pat3Set.content[i]]) then  --- & msgs[msgs[pat3Set.content[i]].aencKey].k.ag=roleAS[j].AS
          clear ch[4];
          ch[4].msg:=msgs[pat3Set.content[i]];
          ch[4].sender:=Intruder;
          ch[4].receiver:=roleAS[j].AS;
          ch[4].empty:=false;
          emit[pat3Set.content[i]] := true;
          put "Intruder emit msg into ch4. ";
          put " msg:   ";          printMsg(ch[4].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[5].
ruleset i: msgLen do
  ruleset j: roleSNums do
    rule "intruderEmitMsgIntoCh[5]"
      ch[5].empty=true & i <= pat8Set.length & pat8Set.content[i] != 0 &
      Spy_known[pat8Set.content[i]] & matchPat(msgs[pat8Set.content[i]], sPat8Set) &
      !emit[pat8Set.content[i]]
      ==>
      begin
        if (!emit[pat8Set.content[i]]) then  --- & msgs[msgs[pat8Set.content[i]].aencKey].k.ag=roleS[j].S
          clear ch[5];
          ch[5].msg:=msgs[pat8Set.content[i]];
          ch[5].sender:=Intruder;
          ch[5].receiver:=roleS[j].S;
          ch[5].empty:=false;
          emit[pat8Set.content[i]] := true;
          put "Intruder emit msg into ch5. ";
          put " msg:   ";          printMsg(ch[5].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[6].
ruleset i: msgLen do
  ruleset j: roleCNums do
    rule "intruderEmitMsgIntoCh[6]"
      ch[6].empty=true & i <= pat15Set.length & pat15Set.content[i] != 0 &
      Spy_known[pat15Set.content[i]] & matchPat(msgs[pat15Set.content[i]], sPat15Set) &
      !emit[pat15Set.content[i]]
      ==>
      begin
        if (!emit[pat15Set.content[i]]) then  --- & msgs[msgs[pat15Set.content[i]].aencKey].k.ag=roleC[j].C
          clear ch[6];
          ch[6].msg:=msgs[pat15Set.content[i]];
          ch[6].sender:=Intruder;
          ch[6].receiver:=roleC[j].C;
          ch[6].empty:=false;
          emit[pat15Set.content[i]] := true;
          put "Intruder emit msg into ch6. ";
          put " msg:   ";          printMsg(ch[6].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;
startstate
  roleS[1].S := s;
  roleS[1].AS := as;
  roleS[1].N3 := n3;
  roleS[1].st := S1;
  roleS[1].commit := false;
  roleS[1].N1 := anyNonce;
  roleS[1].N2 := anyNonce;
  roleS[1].T := anyNonce;
  roleS[1].L := anyNonce;
  roleS[1].C := anyAgent;
  roleC[1].C := c;
  roleC[1].S := s;
  roleC[1].AS := as;
  roleC[1].N1 := n1;
  roleC[1].N2 := n2;
  roleC[1].T := t;
  roleC[1].L := l;
  roleC[1].st := C1;
  roleC[1].commit := false;
  roleC[1].N3 := anyNonce;
  roleAS[1].AS := as;
  roleAS[1].st := AS1;
  roleAS[1].commit := false;
  roleAS[1].N3 := anyNonce;
  roleAS[1].N1 := anyNonce;
  roleAS[1].N2 := anyNonce;
  roleAS[1].T := anyNonce;
  roleAS[1].L := anyNonce;
  roleAS[1].S := anyAgent;
  roleAS[1].C := anyAgent;
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
    pat15Set.content[i] := 0;
    sPat15Set.content[i] := 0;
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
  pat15Set.length := 0;
  sPat15Set.length := 0;
  for i : roleSNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleS[i].S;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat4Set.length := pat4Set.length + 1;
    pat4Set.content[pat4Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleCNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleC[i].C;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat4Set.length := pat4Set.length + 1;
    pat4Set.content[pat4Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleASNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleAS[i].AS;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat4Set.length := pat4Set.length + 1;
    pat4Set.content[pat4Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;

  for i : roleSNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := agent;
    msgs[msg_end].ag := roleS[i].S;
    msgs[msg_end].length := 1;
    pat1Set.length := pat1Set.length + 1;
    pat1Set.content[pat1Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleCNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := agent;
    msgs[msg_end].ag := roleC[i].C;
    msgs[msg_end].length := 1;
    pat1Set.length := pat1Set.length + 1;
    pat1Set.content[pat1Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleASNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := agent;
    msgs[msg_end].ag := roleAS[i].AS;
    msgs[msg_end].length := 1;
    pat1Set.length := pat1Set.length + 1;
    pat1Set.content[pat1Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  msg_end := msg_end + 1;
  msgs[msg_end].msgType := agent;
  msgs[msg_end].ag := Intruder;
  msgs[msg_end].length := 1;
  pat1Set.length := pat1Set.length + 1;
  pat1Set.content[pat1Set.length] := msg_end;
  Spy_known[msg_end] := true;
  msg_end := msg_end + 1;
  msgs[msg_end].msgType := key;
  msgs[msg_end].k.ag := Intruder;
  msgs[msg_end].k.encType := PK;
  msgs[msg_end].length := 1;
  pat4Set.length := pat4Set.length + 1;
  pat4Set.content[pat4Set.length] := msg_end;
  Spy_known[msg_end] := true;
  for i : roleASNums do
    constructSpat3(roleAS[i].C, roleAS[i].S, roleAS[i].N1, gnum);
    constructSpat3(Intruder,roleAS[i].S,roleAS[i].N1, gnum);
  endfor;
  for i : roleCNums do
    constructSpat8(roleC[i].AS, roleC[i].C, roleC[i].N1, roleC[i].S, roleC[i].AS, gnum);
  endfor;
  for i : roleSNums do
    constructSpat12(roleS[i].C, roleS[i].S, roleS[i].T, roleS[i].L, roleS[i].N2, roleS[i].S, roleS[i].C, gnum);
    constructSpat12(Intruder,roleS[i].S,roleS[i].T,roleS[i].L,roleS[i].N2,roleS[i].S,Intruder, gnum);
  endfor;
  for i : roleASNums do
    constructSpat3(roleAS[i].S, roleAS[i].C, roleAS[i].N3, gnum);
    constructSpat3(Intruder,roleAS[i].C,roleAS[i].N3, gnum);
  endfor;
  for i : roleSNums do
    constructSpat8(roleS[i].AS, roleS[i].S, roleS[i].N3, roleS[i].C, roleS[i].AS, gnum);
  endfor;
  for i : roleCNums do
    constructSpat15(roleC[i].S, roleC[i].C, roleC[i].N2, roleC[i].C, gnum);
  endfor;

end;

invariant "sec2"  forall i:indexType do
    forall j:roleCNums do
      forall k: roleSNums do
        (msgs[i].msgType=nonce & msgs[i].noncePart = roleC[j].N2 &
         roleC[j].C != Intruder & roleC[j].S != Intruder &
         roleS[k].S != Intruder) ---& roleS[k].C != Intruder )
        ->
        Spy_known[i] = false
      endforall
    endforall
  endforall;

invariant "auth1"
  forall i: roleCNums do
    roleC[i].commit = true 
    ->
    (exists j: roleSNums do
      ---roleS[j].commit = true &
      roleS[i].N2 = roleC[j].N2
    endexists)
  endforall;
