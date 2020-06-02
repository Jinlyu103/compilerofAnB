const
  roleANum:1;
  roleBNum:1;
  totalFact:1000;
  msgLength:10;
  chanNum:10;
type
  indexType:0..totalFact;
  roleANums:1..roleANum;
  roleBNums:1..roleBNum;
  msgLen:0..msgLength;
  chanNums:1..chanNum;

  AgentType : enum{Intruder, Alice, Bob,anyAgent}; ---Intruder 
  NonceType : enum{Na, Xa1, Ya1, Nb, Xb1, Yb1, anyNonce};  

  EncryptType : enum{PK,SK,Symk};
  KeyType: record 
    encType: EncryptType; 
    ag: AgentType; 
  end;

  AStatus: enum{A1,A2,A3};
  BStatus: enum{B1,B2,B3};

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
  RoleA : record
   Na : NonceType;
   Xa : NonceType;
   Ya : NonceType;
   Nb : NonceType;
   Xb : NonceType;
   Yb : NonceType;
   A : AgentType;
   B : AgentType;
   locNa : NonceType;
   locXa : NonceType;
   locYa : NonceType;
   locNb : NonceType;
   locXb : NonceType;
   locYb : NonceType;
   locA : AgentType;
   locB : AgentType;
   st: AStatus;
   commit : boolean;
  end;
  RoleB : record
   Na : NonceType;
   Xa : NonceType;
   Ya : NonceType;
   Nb : NonceType;
   Xb : NonceType;
   Yb : NonceType;
   A : AgentType;
   B : AgentType;
   locNa : NonceType;
   locXa : NonceType;
   locYa : NonceType;
   locNb : NonceType;
   locXb : NonceType;
   locYb : NonceType;
   locA : AgentType;
   locB : AgentType;
   st: BStatus;
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
  roleA : Array[roleANums] of RoleA;
  roleB : Array[roleBNums] of RoleB;

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
---pat1: A 
procedure lookAddPat1(A:AgentType; Var msg:Message; Var num : indexType);
 Var index : indexType;
 begin
   index:=0;
   for i: indexType do
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
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat1: A 
procedure isPat1(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = agent) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat1: A 
procedure constructSpat1(A:AgentType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = agent) then
        if (msgs[i].ag = A) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := agent;
      msgs[index].ag := A;
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat1\n";
    sPat1Set.length := sPat1Set.length + 1;
    sPat1Set.content[sPat1Set.length] := index;
    num := index;
  end;

---pat2: Na 
procedure lookAddPat2(Na:NonceType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
      index:=0;
      for i: indexType do
        if(msgs[i].msgType=nonce) then
          if(msgs[i].noncePart=Na) then
            index:=i;
          endif;
        endif;
      endfor;
      if(index=0) then
        msg_end := msg_end + 1 ;
        index := msg_end;
        msgs[index].msgType := nonce;
        msgs[index].noncePart:=Na; 
        msgs[index].length := 1;
      endif;
      num:=index;
      msg:=msgs[index];
  end;

---pat2: Na 
procedure isPat2(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat2: Na 
procedure constructSpat2(Na:NonceType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = nonce) then
        if (msgs[i].noncePart = Na) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := nonce;
      msgs[index].noncePart := Na;
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat2\n";
    sPat2Set.length := sPat2Set.length + 1;
    sPat2Set.content[sPat2Set.length] := index;
    num := index;
  end;

---pat3: pk(B) 
procedure lookAddPat3(BPk :AgentType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    index:=0;
    for i: indexType do
      if (msgs[i].msgType = key) then
        if (msgs[i].k.encType = PK & msgs[i].k.ag = BPk) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType:=PK; 
      msgs[index].k.ag:=BPk;
      msgs[index].length := 1;
    endif;
    num:=index;
    msg:=msgs[index];
  end;

---pat3: pk(B) 
procedure isPat3(msg:Message; Var flag:boolean);
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

---spat3: pk(B) 
procedure constructSpat3(BPk :AgentType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = key & msgs[i].k.encType = PK) then
        if (msgs[i].k.ag = BPk) then
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
      msgs[index].k.ag := BPk;
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat3\n";
    sPat3Set.length := sPat3Set.length + 1;
    sPat3Set.content[sPat3Set.length] := index;
    num := index;
  end;

---pat4: aenc{< Ya >}pk(B) 
procedure lookAddPat4(Ya:NonceType; BPk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat2(Ya,msg1,i1);
   lookAddPat3(BPk,msg2,i2);
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

---pat4: aenc{< Ya >}pk(B) 
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

---spat4: aenc{< Ya >}pk(B) 
procedure constructSpat4(Ya:NonceType; BPk :AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat2(Ya, i1);
    constructSpat3(BPk, i2);
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

---pat5: Na.B.Xa.aenc{< Ya >}pk(B) 
procedure lookAddPat5(Na:NonceType; B:AgentType; Xa:NonceType; Ya:NonceType; BPk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3, msg4 : Message;
      index,i1,i2,i3,i4 : indexType;
  begin
   index:=0;
   lookAddPat2(Na,msg1,i1);
   lookAddPat1(B,msg2,i2);
   lookAddPat2(Xa,msg3,i3);
   lookAddPat4(Ya,BPk,msg4,i4);
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

---pat5: Na.B.Xa.aenc{< Ya >}pk(B) 
procedure isPat5(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3,flagPart4: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     flagPart4 := false;
     if(msg.msgType = concat) then
        isPat2(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
        isPat2(msgs[msg.concatPart[3]],flagPart3);
        isPat4(msgs[msg.concatPart[4]],flagPart4);
       if (flagPart1 & flagPart2 & flagPart3 & flagPart4) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat5: Na.B.Xa.aenc{< Ya >}pk(B) 
procedure constructSpat5(Na:NonceType; B:AgentType; Xa:NonceType; Ya:NonceType; BPk :AgentType; Var num: indexType);
  Var i,index, i1, i2, i3, i4:indexType;
  begin
    index:=0;
    constructSpat2(Na, i1);
    constructSpat1(B, i2);
    constructSpat2(Xa, i3);
    constructSpat4(Ya, BPk, i4);
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

---pat6: sk(A) 
procedure lookAddPat6(ASk :AgentType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    index:=0;
    for i: indexType do
      if (msgs[i].msgType = key) then
        if (msgs[i].k.encType = SK & msgs[i].k.ag = ASk) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType:=SK; 
      msgs[index].k.ag:=ASk;
    endif;
    num:=index;
    msg:=msgs[index];
  end;

---pat6: sk(A) 
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

---spat6: sk(A) 
procedure constructSpat6(ASk :AgentType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = key & msgs[i].k.encType = SK) then
        if (msgs[i].k.ag = ASk) then
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
      msgs[index].k.ag := ASk;
      msgs[index].length := 1;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat6\n";
    sPat6Set.length := sPat6Set.length + 1;
    sPat6Set.content[sPat6Set.length] := index;
    num := index;
  end;

---pat7: aenc{< Na.B.Xa.aenc{< Ya >}pk(B) >}sk(A) 
procedure lookAddPat7(Na:NonceType; B:AgentType; Xa:NonceType; Ya:NonceType; BPk :AgentType; ASk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat5(Na, B, Xa, Ya, BPk,msg1,i1);
   lookAddPat6(ASk,msg2,i2);
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

---pat7: aenc{< Na.B.Xa.aenc{< Ya >}pk(B) >}sk(A) 
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

---spat7: aenc{< Na.B.Xa.aenc{< Ya >}pk(B) >}sk(A) 
procedure constructSpat7(Na:NonceType; B:AgentType; Xa:NonceType; Ya:NonceType; BPk :AgentType; ASk :AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat5(Na, B, Xa, Ya, BPk, i1);
    constructSpat6(ASk, i2);
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

---pat8: A.aenc{< Na.B.Xa.aenc{< Ya >}pk(B) >}sk(A) 
procedure lookAddPat8(A:AgentType; Na:NonceType; B:AgentType; Xa:NonceType; Ya:NonceType; BPk :AgentType; ASk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat1(A,msg1,i1);
   lookAddPat7(Na,B,Xa,Ya,BPk,ASk,msg2,i2);
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

---pat8: A.aenc{< Na.B.Xa.aenc{< Ya >}pk(B) >}sk(A) 
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
---spat8: A.aenc{< Na.B.Xa.aenc{< Ya >}pk(B) >}sk(A) 
procedure constructSpat8(A:AgentType; Na:NonceType; B:AgentType; Xa:NonceType; Ya:NonceType; BPk :AgentType; ASk :AgentType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat1(A, i1);
    constructSpat7(Na, B, Xa, Ya, BPk, ASk, i2);
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

---pat9: Nb.A.Na.Xb.aenc{< Yb >}pk(A) 
procedure lookAddPat9(Nb:NonceType; A:AgentType; Na:NonceType; Xb:NonceType; Yb:NonceType; APk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3, msg4, msg5 : Message;
      index,i1,i2,i3,i4,i5 : indexType;
  begin
   index:=0;
   lookAddPat2(Nb,msg1,i1);
   lookAddPat1(A,msg2,i2);
   lookAddPat2(Na,msg3,i3);
   lookAddPat2(Xb,msg4,i4);
   lookAddPat4(Yb,APk,msg5,i5);
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

---pat9: Nb.A.Na.Xb.aenc{< Yb >}pk(A) 
procedure isPat9(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2,flagPart3,flagPart4,flagPart5: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     flagPart3 := false;
     flagPart4 := false;
     flagPart5 := false;
     if(msg.msgType = concat) then
        isPat2(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
        isPat2(msgs[msg.concatPart[3]],flagPart3);
        isPat2(msgs[msg.concatPart[4]],flagPart4);
        isPat4(msgs[msg.concatPart[5]],flagPart5);
       if (flagPart1 & flagPart2 & flagPart3 & flagPart4 & flagPart5) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat9: Nb.A.Na.Xb.aenc{< Yb >}pk(A) 
procedure constructSpat9(Nb:NonceType; A:AgentType; Na:NonceType; Xb:NonceType; Yb:NonceType; APk :AgentType; Var num: indexType);
  Var i,index, i1, i2, i3, i4, i5:indexType;
  begin
    index:=0;
    constructSpat2(Nb, i1);
    constructSpat1(A, i2);
    constructSpat2(Na, i3);
    constructSpat2(Xb, i4);
    constructSpat4(Yb, APk, i5);
    i := 1;
    while(i<= msg_end) do
      if (msgs[i].msgType = concat & msgs[i].length = 5) then
        if (msgs[i].concatPart[1] = i1 & msgs[i].concatPart[2] = i2 & msgs[i].concatPart[3] = i3 & msgs[i].concatPart[4] = i4 & msgs[i].concatPart[5] = i5) then
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
      msgs[index].concatPart[5] := i5;
      msgs[index].length := 5;
    endif;
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat9\n";
    sPat9Set.length := sPat9Set.length + 1;
    sPat9Set.content[sPat9Set.length] := index;
    num := index;
  end;

---pat10: aenc{< Nb.A.Na.Xb.aenc{< Yb >}pk(A) >}sk(B) 
procedure lookAddPat10(Nb:NonceType; A:AgentType; Na:NonceType; Xb:NonceType; Yb:NonceType; APk :AgentType; BSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat9(Nb, A, Na, Xb, Yb, APk,msg1,i1);
   lookAddPat6(BSk,msg2,i2);
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

---pat10: aenc{< Nb.A.Na.Xb.aenc{< Yb >}pk(A) >}sk(B) 
procedure isPat10(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat9(msgs[msg.aencMsg],flagPart1);
      isPat6(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat10: aenc{< Nb.A.Na.Xb.aenc{< Yb >}pk(A) >}sk(B) 
procedure constructSpat10(Nb:NonceType; A:AgentType; Na:NonceType; Xb:NonceType; Yb:NonceType; APk :AgentType; BSk :AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat9(Nb, A, Na, Xb, Yb, APk, i1);
    constructSpat6(BSk, i2);
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
    put "  cons Spat10\n";
    sPat10Set.length := sPat10Set.length + 1;
    sPat10Set.content[sPat10Set.length] := index;
    num := index;
  end;

---pat11: B.aenc{< Nb.A.Na.Xb.aenc{< Yb >}pk(A) >}sk(B) 
procedure lookAddPat11(B:AgentType; Nb:NonceType; A:AgentType; Na:NonceType; Xb:NonceType; Yb:NonceType; APk :AgentType; BSk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat1(B,msg1,i1);
   lookAddPat10(Nb,A,Na,Xb,Yb,APk,BSk,msg2,i2);
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

---pat11: B.aenc{< Nb.A.Na.Xb.aenc{< Yb >}pk(A) >}sk(B) 
procedure isPat11(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat10(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat11: B.aenc{< Nb.A.Na.Xb.aenc{< Yb >}pk(A) >}sk(B) 
procedure constructSpat11(B:AgentType; Nb:NonceType; A:AgentType; Na:NonceType; Xb:NonceType; Yb:NonceType; APk :AgentType; BSk :AgentType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat1(B, i1);
    constructSpat10(Nb, A, Na, Xb, Yb, APk, BSk, i2);
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
    put "  cons Spat11\n";
    sPat11Set.length := sPat11Set.length + 1;
    sPat11Set.content[sPat11Set.length] := index;
    num := index;
  end;

---pat12: aenc{< Nb >}sk(A) 
procedure lookAddPat12(Nb:NonceType; ASk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat2(Nb,msg1,i1);
   lookAddPat6(ASk,msg2,i2);
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

---pat12: aenc{< Nb >}sk(A) 
procedure isPat12(msg:Message; Var flag:boolean);
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

---spat12: aenc{< Nb >}sk(A) 
procedure constructSpat12(Nb:NonceType; ASk :AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat2(Nb, i1);
    constructSpat6(ASk, i2);
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
    put "  cons Spat12\n";
    sPat12Set.length := sPat12Set.length + 1;
    sPat12Set.content[sPat12Set.length] := index;
    num := index;
  end;

---pat13: A.aenc{< Nb >}sk(A) 
procedure lookAddPat13(A:AgentType; Nb:NonceType; ASk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat1(A,msg1,i1);
   lookAddPat12(Nb,ASk,msg2,i2);
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

---pat13: A.aenc{< Nb >}sk(A) 
procedure isPat13(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat1(msgs[msg.concatPart[1]],flagPart1);
        isPat12(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat13: A.aenc{< Nb >}sk(A) 
procedure constructSpat13(A:AgentType; Nb:NonceType; ASk :AgentType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat1(A, i1);
    constructSpat12(Nb, ASk, i2);
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

procedure cons1(A:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat1(A,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat1\n";
  end;
procedure cons2(Na:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat2(Na,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat2\n";
  end;
procedure cons3(BPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat3(BPk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat3\n";
  end;
procedure cons4(Ya:NonceType; BPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat4(Ya, BPk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat4\n";
  end;
procedure destruct4(msg:Message; Var Ya:NonceType; Var BPk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2:Message;
   begin
    clear msg1;
    k1 := msgs[msg.aencKey].k;
    BPk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    Ya:=msg1.noncePart;
  end;
procedure cons5(Na:NonceType; B:AgentType; Xa:NonceType; Ya:NonceType; BPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat5(Na, B, Xa, Ya, BPk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat5\n";
  end;
procedure destruct5(msg:Message; Var Na:NonceType; Var B:AgentType; Var Xa:NonceType; Var Ya:NonceType; Var BPk:AgentType);
  Var msgNum1,msgNum2,msgNum3,msgNum4: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Na := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart[2]];
    B := msgNum2.ag;
    msgNum3 := msgs[msg.concatPart[3]];
    Xa := msgNum3.noncePart;
    msgNum4 := msgs[msg.concatPart[4]];
    k := msgs[msgNum4.aencKey].k;
    BPk := k.ag;
    Ya := msgs[msgNum4.aencMsg].noncePart
  end;
procedure cons6(ASk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(ASk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat6\n";
  end;
procedure cons7(Na:NonceType; B:AgentType; Xa:NonceType; Ya:NonceType; BPk :AgentType; ASk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat7(Na, B, Xa, Ya, BPk, ASk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat7\n";
  end;
procedure destruct7(msg:Message; Var Na:NonceType; Var B:AgentType; Var Xa:NonceType; Var Ya:NonceType; Var BPk:AgentType; Var ASk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2,msgNum3,msgNum4:Message;
  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
   ASk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart[1]];
    msgNum2:=msgs[msg1.concatPart[2]];
    msgNum3:=msgs[msg1.concatPart[3]];
    msgNum4:=msgs[msg1.concatPart[4]];
    Na:=msgNum1.noncePart;
    B:=msgNum2.ag;
    Xa:=msgNum3.noncePart;
  end;
procedure cons8(A:AgentType; Na:NonceType; B:AgentType; Xa:NonceType; Ya:NonceType; BPk :AgentType; ASk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat8(A, Na, B, Xa, Ya, BPk, ASk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat8\n";
  end;
procedure destruct8(msg:Message; Var A:AgentType; Var Na:NonceType; Var B:AgentType; Var Xa:NonceType; Var Ya:NonceType; Var BPk:AgentType; Var ASk:AgentType);
  Var msgNum1,msgNum2: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    A := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    k := msgs[msgNum2.aencKey].k;
    ASk := k.ag;
    destruct5(msgs[msgNum2.aencMsg], Na, B, Xa, Ya, BPk)
  end;
procedure cons9(Nb:NonceType; A:AgentType; Na:NonceType; Xb:NonceType; Yb:NonceType; APk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat9(Nb, A, Na, Xb, Yb, APk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat9\n";
  end;
procedure destruct9(msg:Message; Var Nb:NonceType; Var A:AgentType; Var Na:NonceType; Var Xb:NonceType; Var Yb:NonceType; Var APk:AgentType);
  Var msgNum1,msgNum2,msgNum3,msgNum4,msgNum5: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Nb := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart[2]];
    A := msgNum2.ag;
    msgNum3 := msgs[msg.concatPart[3]];
    Na := msgNum3.noncePart;
    msgNum4 := msgs[msg.concatPart[4]];
    Xb := msgNum4.noncePart;
    msgNum5 := msgs[msg.concatPart[5]];
    k := msgs[msgNum5.aencKey].k;
    APk := k.ag;
    Yb := msgs[msgNum5.aencMsg].noncePart
  end;
procedure cons10(Nb:NonceType; A:AgentType; Na:NonceType; Xb:NonceType; Yb:NonceType; APk :AgentType; BSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat10(Nb, A, Na, Xb, Yb, APk, BSk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat10\n";
  end;
procedure destruct10(msg:Message; Var Nb:NonceType; Var A:AgentType; Var Na:NonceType; Var Xb:NonceType; Var Yb:NonceType; Var APk:AgentType; Var BSk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2,msgNum3,msgNum4,msgNum5:Message;
  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
   BSk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart[1]];
    msgNum2:=msgs[msg1.concatPart[2]];
    msgNum3:=msgs[msg1.concatPart[3]];
    msgNum4:=msgs[msg1.concatPart[4]];
    msgNum5:=msgs[msg1.concatPart[5]];
    Nb:=msgNum1.noncePart;
    A:=msgNum2.ag;
    Na:=msgNum3.noncePart;
    Xb:=msgNum4.noncePart;
  end;
procedure cons11(B:AgentType; Nb:NonceType; A:AgentType; Na:NonceType; Xb:NonceType; Yb:NonceType; APk :AgentType; BSk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat11(B, Nb, A, Na, Xb, Yb, APk, BSk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat11\n";
  end;
procedure destruct11(msg:Message; Var B:AgentType; Var Nb:NonceType; Var A:AgentType; Var Na:NonceType; Var Xb:NonceType; Var Yb:NonceType; Var APk:AgentType; Var BSk:AgentType);
  Var msgNum1,msgNum2: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    B := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    k := msgs[msgNum2.aencKey].k;
    BSk := k.ag;
    destruct9(msgs[msgNum2.aencMsg], Nb, A, Na, Xb, Yb, APk)
  end;
procedure cons12(Nb:NonceType; ASk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat12(Nb, ASk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat12\n";
  end;
procedure destruct12(msg:Message; Var Nb:NonceType; Var ASk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2:Message;
   begin
    clear msg1;
    k1 := msgs[msg.aencKey].k;
    ASk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    Nb:=msg1.noncePart;
  end;
procedure cons13(A:AgentType; Nb:NonceType; ASk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat13(A, Nb, ASk,msg,num);
    put msg_end;
    printMsg(msgs[msg_end]);
    put "  cons Spat13\n";
  end;
procedure destruct13(msg:Message; Var A:AgentType; Var Nb:NonceType; Var ASk:AgentType);
  Var msgNum1,msgNum2: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    A := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    k := msgs[msgNum2.aencKey].k;
    ASk := k.ag;
    Nb := msgs[msgNum2.aencMsg].noncePart
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

function construct5By2124(msgNo1,msgNo2,msgNo3,msgNo4:indexType):indexType;
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

function construct9By21224(msgNo1,msgNo2,msgNo3,msgNo4,msgNo5:indexType):indexType;
  var index : indexType;
      ---msg : Message;
  begin
   index := 0;
   for i : indexType do
     if (msgs[i].msgType = concat & msgs[i].length = 5) then
       if (msgs[i].concatPart[1] = msgNo1 & msgs[i].concatPart[2] = msgNo2 & msgs[i].concatPart[3] = msgNo3 & msgs[i].concatPart[4] = msgNo4 & msgs[i].concatPart[5] = msgNo5) then
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
     msgs[index].concatPart[5] := msgNo5;
     msgs[index].length := 5;
   endif;
   return index;
  end;

function construct10By96(msgNo9, msgNo6:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo9 & msgs[i].aencKey = msgNo6) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo9;
     msgs[index].aencKey := msgNo6;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct11By110(msgNo1,msgNo2:indexType):indexType;
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

function construct12By26(msgNo2, msgNo6:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo2 & msgs[i].aencKey = msgNo6) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo2;
     msgs[index].aencKey := msgNo6;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct13By112(msgNo1,msgNo2:indexType):indexType;
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
  var msgPat1, msgPat2, msgPat3, msgPat4:indexType;
  	  flagPat1, flagPat2, flagPat3, flagPat4:boolean;
  begin
    if (!Spy_known[msg.concatPart[1]]) then
      Spy_known[msg.concatPart[1]] := true;
      msgPat1 := msg.concatPart[1];
      isPat2(msgs[msgPat1],flagPat1);
      if (flagPat1) then
        if(!exist(pat2Set,msgPat1)) then
           pat2Set.length:=pat2Set.length+1;
           pat2Set.content[pat2Set.length] := msgPat1;
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
    while (i1 <= pat2Set.length) do
      i2 := 1;
      while (i2 <= pat1Set.length) do
        i3 := 1;
        while (i3 <= pat2Set.length) do
          i4 := 1;
          while (i4 <= pat4Set.length) do
            if (matchPat(msgs[construct5By2124(pat2Set.content[i1], pat1Set.content[i2], pat2Set.content[i3], pat4Set.content[i4])], sPat5Set) &
                !Spy_known[construct5By2124(pat2Set.content[i1], pat1Set.content[i2], pat2Set.content[i3], pat4Set.content[i4])]) then
                 concatMsgNo := construct5By2124(pat2Set.content[i1], pat1Set.content[i2], pat2Set.content[i3], pat4Set.content[i4]);
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

procedure aDeryptionPat7(msg: Message);
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

procedure deconcatPat9(msg: Message);
  var msgPat1, msgPat2, msgPat3, msgPat4, msgPat5:indexType;
  	  flagPat1, flagPat2, flagPat3, flagPat4, flagPat5:boolean;
  begin
    if (!Spy_known[msg.concatPart[1]]) then
      Spy_known[msg.concatPart[1]] := true;
      msgPat1 := msg.concatPart[1];
      isPat2(msgs[msgPat1],flagPat1);
      if (flagPat1) then
        if(!exist(pat2Set,msgPat1)) then
           pat2Set.length:=pat2Set.length+1;
           pat2Set.content[pat2Set.length] := msgPat1;
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
      isPat2(msgs[msgPat4],flagPat4);
      if (flagPat4) then
        if(!exist(pat2Set,msgPat4)) then
           pat2Set.length:=pat2Set.length+1;
           pat2Set.content[pat2Set.length] := msgPat4;
        endif;
      endif;
    endif;
    if (!Spy_known[msg.concatPart[5]]) then
      Spy_known[msg.concatPart[5]] := true;
      msgPat5 := msg.concatPart[5];
      isPat4(msgs[msgPat5],flagPat5);
      if (flagPat5) then
        if(!exist(pat4Set,msgPat5)) then
           pat4Set.length:=pat4Set.length+1;
           pat4Set.content[pat4Set.length] := msgPat5;
        endif;
      endif;
    endif;
  end;

procedure enconcatPat9();
  var i1, i2, i3, i4, i5, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat2Set.length) do
      i2 := 1;
      while (i2 <= pat1Set.length) do
        i3 := 1;
        while (i3 <= pat2Set.length) do
          i4 := 1;
          while (i4 <= pat2Set.length) do
            i5 := 1;
            while (i5 <= pat4Set.length) do
              if (matchPat(msgs[construct9By21224(pat2Set.content[i1], pat1Set.content[i2], pat2Set.content[i3], pat2Set.content[i4], pat4Set.content[i5])], sPat9Set) &
                  !Spy_known[construct9By21224(pat2Set.content[i1], pat1Set.content[i2], pat2Set.content[i3], pat2Set.content[i4], pat4Set.content[i5])]) then
                   concatMsgNo := construct9By21224(pat2Set.content[i1], pat1Set.content[i2], pat2Set.content[i3], pat2Set.content[i4], pat4Set.content[i5]);
                   if (!exist(pat9Set,concatMsgNo)) then
                       pat9Set.length := pat9Set.length+1;
                       pat9Set.content[pat9Set.length]:=concatMsgNo;
                   endif; 
                   if (!Spy_known[concatMsgNo]) then
                      Spy_known[concatMsgNo] := true;
                   endif;
              endif;
              i5 := i5 + 1;
            endwhile;
            i4 := i4 + 1;
          endwhile;
          i3 := i3 + 1;
        endwhile;
        i2 := i2 + 1;
      endwhile;
      i1 := i1 + 1;
    endwhile;
  end;

procedure aDeryptionPat10(msg: Message);
  var key_inv:Message;
      msgPat9:indexType;
  	  flag_pat9:boolean;
  begin
    if (! Spy_known[msg.aencMsg]) then
       key_inv := inverseKey(msgs[msg.aencKey]);
       if (key_inv.k.ag = Intruder | key_inv.k.encType = PK) then
         Spy_known[msg.aencMsg]:=true;
         msgPat9:=msg.aencMsg;
         isPat9(msgs[msgPat9],flag_pat9);
         if (flag_pat9) then
           if (!exist(pat9Set,msgPat9)) then
             pat9Set.length:=pat9Set.length+1;
             pat9Set.content[pat9Set.length]:=msgPat9;
           endif;
         endif;
       endif;
    endif;
  end;

procedure aEncryptionPat10();
  var i, j, encMsgNo:indexType;
  begin
    i := 1;
    while (i <= pat9Set.length) do
      j := 1;
      while (j<=pat6Set.length) do
        if (matchPat(msgs[construct10By96(pat9Set.content[i],pat6Set.content[j])], sPat10Set) &
           !Spy_known[construct10By96(pat9Set.content[i],pat6Set.content[j])]) then
           if (msgs[pat6Set.content[j]].k.encType=PK) then
             encMsgNo := construct10By96(pat9Set.content[i],pat6Set.content[j]);
             if (!exist(pat10Set,encMsgNo)) then
                pat10Set.length := pat10Set.length+1;
                pat10Set.content[pat10Set.length]:=encMsgNo;
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

procedure deconcatPat11(msg: Message);
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
      isPat10(msgs[msgPat2],flagPat2);
      if (flagPat2) then
        if(!exist(pat10Set,msgPat2)) then
           pat10Set.length:=pat10Set.length+1;
           pat10Set.content[pat10Set.length] := msgPat2;
        endif;
      endif;
    endif;
  end;

procedure enconcatPat11();
  var i1, i2, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat1Set.length) do
      i2 := 1;
      while (i2 <= pat10Set.length) do
        if (matchPat(msgs[construct11By110(pat1Set.content[i1], pat10Set.content[i2])], sPat11Set) &
            !Spy_known[construct11By110(pat1Set.content[i1], pat10Set.content[i2])]) then
             concatMsgNo := construct11By110(pat1Set.content[i1], pat10Set.content[i2]);
             if (!exist(pat11Set,concatMsgNo)) then
                 pat11Set.length := pat11Set.length+1;
                 pat11Set.content[pat11Set.length]:=concatMsgNo;
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

procedure aDeryptionPat12(msg: Message);
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

procedure aEncryptionPat12();
  var i, j, encMsgNo:indexType;
  begin
    i := 1;
    while (i <= pat2Set.length) do
      j := 1;
      while (j<=pat6Set.length) do
        if (matchPat(msgs[construct12By26(pat2Set.content[i],pat6Set.content[j])], sPat12Set) &
           !Spy_known[construct12By26(pat2Set.content[i],pat6Set.content[j])]) then
           if (msgs[pat6Set.content[j]].k.encType=PK) then
             encMsgNo := construct12By26(pat2Set.content[i],pat6Set.content[j]);
             if (!exist(pat12Set,encMsgNo)) then
                pat12Set.length := pat12Set.length+1;
                pat12Set.content[pat12Set.length]:=encMsgNo;
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
      isPat12(msgs[msgPat2],flagPat2);
      if (flagPat2) then
        if(!exist(pat12Set,msgPat2)) then
           pat12Set.length:=pat12Set.length+1;
           pat12Set.content[pat12Set.length] := msgPat2;
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
      while (i2 <= pat12Set.length) do
        if (matchPat(msgs[construct13By112(pat1Set.content[i1], pat12Set.content[i2])], sPat13Set) &
            !Spy_known[construct13By112(pat1Set.content[i1], pat12Set.content[i2])]) then
             concatMsgNo := construct13By112(pat1Set.content[i1], pat12Set.content[i2]);
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

ruleset i:roleANums do
rule " roleA1 "
roleA[i].st = A1 & ch[1].empty = true & !roleA[i].commit
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons8(roleA[i].A,roleA[i].Na,roleA[i].B,roleA[i].Xa,roleA[i].Ya,roleA[i].B,roleA[i].A,msg,msgNo);
   ch[1].empty := false;
   ch[1].msg := msg;
   ch[1].sender := roleA[i].A;
   ch[1].receiver := Intruder;
   roleA[i].st := A2;
   put "roleA send into ch[1]. ";
   put " msg: ";
   printMsg(ch[1].msg);
   put "\n";
end;
rule " roleA2 "
roleA[i].st = A2 & ch[2].empty = false & !roleA[i].commit
==>
var flag_pat11:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[2].msg;
   isPat11(msg, flag_pat11);
   if(flag_pat11) then
     destruct11(msg,roleA[i].locB,roleA[i].locNb,roleA[i].locA,roleA[i].locNa,roleA[i].locXb,roleA[i].locYb,roleA[i].locA,roleA[i].locB);
     if(matchAgent(roleA[i].locB, roleA[i].B) & matchNonce(roleA[i].locNb, roleA[i].Nb) & matchAgent(roleA[i].locA, roleA[i].A) & matchNonce(roleA[i].locNa, roleA[i].Na) & matchNonce(roleA[i].locXb, roleA[i].Xb) & matchNonce(roleA[i].locYb, roleA[i].Yb) & matchAgent(roleA[i].locA, roleA[i].A) & matchAgent(roleA[i].locB, roleA[i].B))then
       ch[2].empty:=true;
       clear ch[2].msg;
       roleA[i].st := A3;
     endif;
   endif;
   put "roleA recieve from ch[2]. ";
   put " msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleA3 "
roleA[i].st = A3 & ch[3].empty = true & !roleA[i].commit
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons13(roleA[i].A,roleA[i].locNb,roleA[i].A,msg,msgNo);
   ch[3].empty := false;
   ch[3].msg := msg;
   ch[3].sender := roleA[i].A;
   ch[3].receiver := Intruder;
   roleA[i].st := A1;
   put "roleA send into ch[3]. ";
   put " msg: ";
   printMsg(ch[3].msg);
   put "\n";
   roleA[i].commit := true;
end;
endruleset;

ruleset i:roleBNums do
rule " roleB1 "
roleB[i].st = B1 & ch[1].empty = false & !roleB[i].commit
==>
var flag_pat8:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[1].msg;
   isPat8(msg, flag_pat8);
   if(flag_pat8) then
     destruct8(msg,roleB[i].locA,roleB[i].locNa,roleB[i].locB,roleB[i].locXa,roleB[i].locYa,roleB[i].locB,roleB[i].locA);
     if(matchAgent(roleB[i].locA, roleB[i].A) & matchNonce(roleB[i].locNa, roleB[i].Na) & matchAgent(roleB[i].locB, roleB[i].B) & matchNonce(roleB[i].locXa, roleB[i].Xa) & matchNonce(roleB[i].locYa, roleB[i].Ya) & matchAgent(roleB[i].locB, roleB[i].B) & matchAgent(roleB[i].locA, roleB[i].A))then
       ch[1].empty:=true;
       clear ch[1].msg;
       roleB[i].st := B2;
     endif;
   endif;
   put "roleB recieve from ch[1]. ";
   put " msg: ";
   printMsg(msg);
   put "\n";
end;
rule " roleB2 "
roleB[i].st = B2 & ch[2].empty = true & !roleB[i].commit
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons11(roleB[i].B,roleB[i].Nb,roleB[i].locA,roleB[i].locNa,roleB[i].Xb,roleB[i].Yb,roleB[i].locA,roleB[i].B,msg,msgNo);
   ch[2].empty := false;
   ch[2].msg := msg;
   ch[2].sender := roleB[i].B;
   ch[2].receiver := Intruder;
   roleB[i].st := B3;
   put "roleB send into ch[2]. ";
   put " msg: ";
   printMsg(ch[2].msg);
   put "\n";
end;
rule " roleB3 "
roleB[i].st = B3 & ch[3].empty = false & !roleB[i].commit
==>
var flag_pat13:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[3].msg;
   isPat13(msg, flag_pat13);
   if(flag_pat13) then
     destruct13(msg,roleB[i].locA,roleB[i].locNb,roleB[i].locA);
     if(matchAgent(roleB[i].locA, roleB[i].A) & matchNonce(roleB[i].locNb, roleB[i].Nb) & matchAgent(roleB[i].locA, roleB[i].A))then
       ch[3].empty:=true;
       clear ch[3].msg;
       roleB[i].st := B1;
     endif;
   endif;
   put "roleB recieve from ch[3]. ";
   put " msg: ";
   printMsg(msg);
   put "\n";
   roleB[i].commit := true;
end;
endruleset;


---rule of intruder to get msg from ch[1] 
rule "intruderGetMsgFromCh[1]" 
  ch[1].empty = false
  ==>
  var flag_pat8:boolean;
      i, msgNo:indexType;
      msg:Message;
  begin
    msg := ch[1].msg;
    get_msgNo(msg, msgNo);
    isPat8(msg,flag_pat8);
    if (flag_pat8) then
      if(!exist(pat8Set,msgNo)) then
        pat8Set.length:=pat8Set.length+1;
        pat8Set.content[pat8Set.length]:=msgNo;
        Spy_known[msgNo] := true;
        --- agent: A
        --- nonce: Na
        --- pk(B)
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
        --- sk(A)
        i := 1;
        while (i <= pat7Set.length) do
          aDeryptionPat7(msgs[pat7Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat7();
        i := 1;
        while (i <= pat8Set.length) do
          deconcatPat8(msgs[pat8Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat8();
        i := 1;
        while (i <= pat9Set.length) do
          deconcatPat9(msgs[pat9Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat9();
        i := 1;
        while (i <= pat10Set.length) do
          aDeryptionPat10(msgs[pat10Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat10();
        i := 1;
        while (i <= pat11Set.length) do
          deconcatPat11(msgs[pat11Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat11();
        i := 1;
        while (i <= pat12Set.length) do
          aDeryptionPat12(msgs[pat12Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat12();
        i := 1;
        while (i <= pat13Set.length) do
          deconcatPat13(msgs[pat13Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat13();
      endif;
      ch[1].empty := true;
      clear ch[1].msg;
    endif;
  end;

---rule of intruder to get msg from ch[2] 
rule "intruderGetMsgFromCh[2]" 
  ch[2].empty = false
  ==>
  var flag_pat11:boolean;
      i, msgNo:indexType;
      msg:Message;
  begin
    msg := ch[2].msg;
    get_msgNo(msg, msgNo);
    isPat11(msg,flag_pat11);
    if (flag_pat11) then
      if(!exist(pat11Set,msgNo)) then
        pat11Set.length:=pat11Set.length+1;
        pat11Set.content[pat11Set.length]:=msgNo;
        Spy_known[msgNo] := true;
        --- agent: A
        --- nonce: Na
        --- pk(B)
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
        --- sk(A)
        i := 1;
        while (i <= pat7Set.length) do
          aDeryptionPat7(msgs[pat7Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat7();
        i := 1;
        while (i <= pat8Set.length) do
          deconcatPat8(msgs[pat8Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat8();
        i := 1;
        while (i <= pat9Set.length) do
          deconcatPat9(msgs[pat9Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat9();
        i := 1;
        while (i <= pat10Set.length) do
          aDeryptionPat10(msgs[pat10Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat10();
        i := 1;
        while (i <= pat11Set.length) do
          deconcatPat11(msgs[pat11Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat11();
        i := 1;
        while (i <= pat12Set.length) do
          aDeryptionPat12(msgs[pat12Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat12();
        i := 1;
        while (i <= pat13Set.length) do
          deconcatPat13(msgs[pat13Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat13();
      endif;
      ch[2].empty := true;
      clear ch[2].msg;
    endif;
  end;

---rule of intruder to get msg from ch[3] 
rule "intruderGetMsgFromCh[3]" 
  ch[3].empty = false
  ==>
  var flag_pat13:boolean;
      i, msgNo:indexType;
      msg:Message;
  begin
    msg := ch[3].msg;
    get_msgNo(msg, msgNo);
    isPat13(msg,flag_pat13);
    if (flag_pat13) then
      if(!exist(pat13Set,msgNo)) then
        pat13Set.length:=pat13Set.length+1;
        pat13Set.content[pat13Set.length]:=msgNo;
        Spy_known[msgNo] := true;
        --- agent: A
        --- nonce: Na
        --- pk(B)
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
        --- sk(A)
        i := 1;
        while (i <= pat7Set.length) do
          aDeryptionPat7(msgs[pat7Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat7();
        i := 1;
        while (i <= pat8Set.length) do
          deconcatPat8(msgs[pat8Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat8();
        i := 1;
        while (i <= pat9Set.length) do
          deconcatPat9(msgs[pat9Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat9();
        i := 1;
        while (i <= pat10Set.length) do
          aDeryptionPat10(msgs[pat10Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat10();
        i := 1;
        while (i <= pat11Set.length) do
          deconcatPat11(msgs[pat11Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat11();
        i := 1;
        while (i <= pat12Set.length) do
          aDeryptionPat12(msgs[pat12Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat12();
        i := 1;
        while (i <= pat13Set.length) do
          deconcatPat13(msgs[pat13Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat13();
      endif;
      ch[3].empty := true;
      clear ch[3].msg;
    endif;
  end;

---rule of intruder to emit msg into ch[1].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[1]"
      ch[1].empty=true & i <= pat8Set.length & pat8Set.content[i] != 0 &
      Spy_known[pat8Set.content[i]] & matchPat(msgs[pat8Set.content[i]], sPat8Set) &
      !emit[pat8Set.content[i]]
      ==>
      begin
        if (!emit[pat8Set.content[i]]) then  --- & msgs[msgs[pat8Set.content[i]].aencKey].k.ag=roleB[j].B
          clear ch[1];
          ch[1].msg:=msgs[pat8Set.content[i]];
          ch[1].sender:=Intruder;
          ch[1].receiver:=roleB[j].B;
          ch[1].empty:=false;
          emit[pat8Set.content[i]] := true;
          put "Intruder emit msg into ch1. ";
          put " msg:   ";          printMsg(ch[1].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[2].
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsgIntoCh[2]"
      ch[2].empty=true & i <= pat11Set.length & pat11Set.content[i] != 0 &
      Spy_known[pat11Set.content[i]] & matchPat(msgs[pat11Set.content[i]], sPat11Set) &
      !emit[pat11Set.content[i]]
      ==>
      begin
        if (!emit[pat11Set.content[i]]) then  --- & msgs[msgs[pat11Set.content[i]].aencKey].k.ag=roleA[j].A
          clear ch[2];
          ch[2].msg:=msgs[pat11Set.content[i]];
          ch[2].sender:=Intruder;
          ch[2].receiver:=roleA[j].A;
          ch[2].empty:=false;
          emit[pat11Set.content[i]] := true;
          put "Intruder emit msg into ch2. ";
          put " msg:   ";          printMsg(ch[2].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[3].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[3]"
      ch[3].empty=true & i <= pat13Set.length & pat13Set.content[i] != 0 &
      Spy_known[pat13Set.content[i]] & matchPat(msgs[pat13Set.content[i]], sPat13Set) &
      !emit[pat13Set.content[i]]
      ==>
      begin
        if (!emit[pat13Set.content[i]]) then  --- & msgs[msgs[pat13Set.content[i]].aencKey].k.ag=roleB[j].B
          clear ch[3];
          ch[3].msg:=msgs[pat13Set.content[i]];
          ch[3].sender:=Intruder;
          ch[3].receiver:=roleB[j].B;
          ch[3].empty:=false;
          emit[pat13Set.content[i]] := true;
          put "Intruder emit msg into ch3. ";
          put " msg:   ";          printMsg(ch[3].msg);
          put "\n";
        endif;
      end;
  endruleset;
endruleset;
startstate
  roleA[1].A := Alice;
  roleA[1].B := Bob;
  roleA[1].Na := Na;
  roleA[1].Xa := Xa1;
  roleA[1].Ya := Ya1;
  roleA[1].st := A1;
  roleA[1].commit := false;
  roleA[1].Nb := anyNonce;
  roleA[1].Xb := anyNonce;
  roleA[1].Yb := anyNonce;
  roleB[1].B := Bob;
  roleB[1].Nb := Nb;
  roleB[1].Xb := Xb1;
  roleB[1].Yb := Yb1;
  roleB[1].st := B1;
  roleB[1].commit := false;
  roleB[1].Na := anyNonce;
  roleB[1].Xa := anyNonce;
  roleB[1].Ya := anyNonce;
  roleB[1].A := anyAgent;
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
  for i : roleANums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleA[i].A;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat3Set.length := pat3Set.length + 1;
    pat3Set.content[pat3Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleBNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleB[i].B;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat3Set.length := pat3Set.length + 1;
    pat3Set.content[pat3Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleBNums do
    constructSpat8(roleB[i].A, roleB[i].Na, roleB[i].B, roleB[i].Xa, roleB[i].Ya, roleB[i].B, roleB[i].A, gnum);
  endfor;
  for i : roleANums do
    constructSpat11(roleA[i].B, roleA[i].Nb, roleA[i].A, roleA[i].Na, roleA[i].Xb, roleA[i].Yb, roleA[i].A, roleA[i].B, gnum);
  endfor;
  for i : roleBNums do
    constructSpat13(roleB[i].A, roleB[i].Nb, roleB[i].A, gnum);
  endfor;

end;

invariant "sec1"
  forall i:indexType do
    (msgs[i].msgType=nonce & msgs[i].noncePart = Ya1)
    ->
    Spy_known[i] = false
end;

invariant "auth1"
  forall i: roleANums do
    roleA[i].commit = true 
    ->
    (exists j: roleBNums do
      ---roleB[j].commit = true &
      roleB[i].Ya = roleA[j].Ya
    endexists)
  endforall;

invariant "auth2"
  forall i: roleBNums do
    roleB[i].commit = true 
    ->
    (exists j: roleANums do
      ---roleA[j].commit = true &
      roleA[i].Yb = roleB[j].Yb
    endexists)
  endforall;
