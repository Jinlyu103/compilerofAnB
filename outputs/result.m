const
  roleANum:1;
  roleBNum:1;
  roleSNum:1;
  totalFact:100;
  msgLength:15;
  chanNum:10;
type
  indexType:0..totalFact;
  roleANums:1..roleANum;
  roleBNums:1..roleBNum;
  roleSNums:1..roleSNum;
  msgLen:0..msgLength;
  chanNums:1..chanNum;

  AgentType : enum{Intruder, Alice, Bob, Server,anyAgent}; ---Intruder 
  NonceType : enum{Na, Nb, anyNonce};  

  EncryptType : enum{PK,SK,Symk};
  KeyType: record 
    encType: EncryptType; 
    ag: AgentType; 
    ag1:AgentType;
    ag2:AgentType;
  end;

  AStatus: enum{A1,A2,A3,A4,A5};
  BStatus: enum{B1,B2,B3};
  SStatus: enum{S1,S2};

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
   Nb : NonceType;
   A : AgentType;
   B : AgentType;
   S : AgentType;
   locNa : NonceType;
   locNb : NonceType;
   locA : AgentType;
   locB : AgentType;
   locS : AgentType;
   st: AStatus;
   commit : boolean;
  end;
  RoleB : record
   Na : NonceType;
   Nb : NonceType;
   A : AgentType;
   B : AgentType;
   S : AgentType;
   locNa : NonceType;
   locNb : NonceType;
   locA : AgentType;
   locB : AgentType;
   locS : AgentType;
   st: BStatus;
   commit : boolean;
  end;
  RoleS : record
   Na : NonceType;
   Nb : NonceType;
   A : AgentType;
   B : AgentType;
   S : AgentType;
   locNa : NonceType;
   locNb : NonceType;
   locA : AgentType;
   locB : AgentType;
   locS : AgentType;
   st: SStatus;
   commit : boolean;
  end;

  msgSet: record
    content : Array[indexType] of indexType;
    length : indexType;
  end;

var
  ch : Array[chanNums] of Channel;
  roleA : Array[roleANums] of RoleA;
  roleB : Array[roleBNums] of RoleB;
  roleS : Array[roleSNums] of RoleS;

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

  Spy_known: Array[indexType] of boolean;
  ---systemEvent   : array[eventNums] of Event;
  ---eve_end       : eventNums;
  emit: Array[indexType] of boolean;
  gnum : indexType;

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
    sPat2Set.length := sPat2Set.length + 1;
    sPat2Set.content[sPat2Set.length] := index;
    num := index;
  end;

---pat3: A.B.Na 
procedure lookAddPat3(A:AgentType; B:AgentType; Na:NonceType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3 : Message;
      index,i1,i2,i3 : indexType;
  begin
   index:=0;
   lookAddPat1(A,msg1,i1);
   lookAddPat1(B,msg2,i2);
   lookAddPat2(Na,msg3,i3);
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

---pat3: A.B.Na 
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
---spat3: A.B.Na 
procedure constructSpat3(A:AgentType; B:AgentType; Na:NonceType; Var num: indexType);
  Var i,index, i1, i2, i3:indexType;
  begin
    index:=0;
    constructSpat1(A, i1);
    constructSpat1(B, i2);
    constructSpat2(Na, i3);
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
    sPat3Set.length := sPat3Set.length + 1;
    sPat3Set.content[sPat3Set.length] := index;
    num := index;
  end;

---pat4: k(A,B) 
procedure lookAddPat4(Asymk1:AgentType; Bsymk2:AgentType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    index := 0;
    for i :indexType do
      if (msgs[i].msgType = key) then 
        if (msgs[i].k.encType = Symk & msgs[i].k.ag1 = Asymk1 & msgs[i].k.ag2 = Bsymk2) then
          index := i;
        endif;
      endif;
    endfor;
    if (index = 0) then
      msg_end := msg_end + 1;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType := Symk;
      msgs[index].k.ag1:=Asymk1;
      msgs[index].k.ag2:=Bsymk2;
    endif;
    num := index;
    msg := msgs[index];
  end;

---pat4: k(A,B) 
procedure isPat4(msg:Message; Var flag:boolean);
  var flag1:boolean;
  begin
    flag1:=false;
    if msg.msgType = key & msg.k.encType = Symk then
      flag1:=true;
    endif;
    flag:=flag1;
  end;

---spat4: k(A,B) 
procedure constructSpat4(Asymk1:AgentType; Bsymk2:AgentType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = key & msgs[i].k.encType = Symk) then
        if (msgs[i].k.ag1 = Asymk1 & msgs[i].k.ag2 = Bsymk2) then
          index := i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType := Symk;
      msgs[index].k.ag1 := Asymk1;
      msgs[index].k.ag2 := Bsymk2;
      msgs[index].length := 1;
    endif;
    sPat4Set.length := sPat4Set.length + 1;
    sPat4Set.content[sPat4Set.length] := index;
    num := index;
  end;

---pat5: k(A,B).A 
procedure lookAddPat5(Asymk1:AgentType; Bsymk2:AgentType; A:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat4(Asymk1, Bsymk2,msg1,i1);
   lookAddPat1(A,msg2,i2);
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

---pat5: k(A,B).A 
procedure isPat5(msg:Message; Var flag:boolean);
  var flag1, flagPart1,flagPart2: boolean;
  begin
     flag1 := false;
     flagPart1 := false;
     flagPart2 := false;
     if(msg.msgType = concat) then
        isPat4(msgs[msg.concatPart[1]],flagPart1);
        isPat1(msgs[msg.concatPart[2]],flagPart2);
       if (flagPart1 & flagPart2) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat5: k(A,B).A 
procedure constructSpat5(Asymk1:AgentType; Bsymk2:AgentType; A:AgentType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat4(Asymk1, Bsymk2, i1);
    constructSpat1(A, i2);
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
    sPat5Set.length := sPat5Set.length + 1;
    sPat5Set.content[sPat5Set.length] := index;
    num := index;
  end;

---pat6: senc{< k(A,B).A >}k(B,S) 
procedure lookAddPat6(Asymk1:AgentType; Bsymk2:AgentType; A:AgentType; Bsymk1:AgentType; Ssymk2:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat5(Asymk1, Bsymk2, A,msg1,i1);
   lookAddPat4(Bsymk1, Ssymk2,msg2,i2);
   for i : indexType do
     if (msgs[i].msgType = senc) then
       if (msgs[i].sencMsg = i1 & msgs[i].sencKey = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := senc;
     msgs[index].sencMsg := i1; 
     msgs[index].sencKey := i2; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat6: senc{< k(A,B).A >}k(B,S) 
procedure isPat6(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1:=false;
    flagPart2:=false;
    if msg.msgType = senc then
      isPat5(msgs[msg.sencMsg],flagPart1);
      isPat4(msgs[msg.sencKey],flagPart2);
      if flagPart1 & flagPart2 then
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat6: senc{< k(A,B).A >}k(B,S) 
procedure constructSpat6(Asymk1:AgentType; Bsymk2:AgentType; A:AgentType; Bsymk1:AgentType; Ssymk2:AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat5(Asymk1, Bsymk2, A, i1);
    constructSpat4(Bsymk1, Ssymk2, i2);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = senc) then
        if (msgs[i].sencMsg = i1 & msgs[i].sencKey = i2) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := senc;
      msgs[index].sencMsg := i1; 
      msgs[index].sencKey := i2; 
      msgs[index].length := 1;
    endif;
    sPat6Set.length := sPat6Set.length + 1;
    sPat6Set.content[sPat6Set.length] := index;
    num := index;
  end;

---pat7: Na.B.k(A,B).senc{< k(A,B).A >}k(B,S) 
procedure lookAddPat7(Na:NonceType; B:AgentType; Asymk1:AgentType; Bsymk2:AgentType; A:AgentType; Bsymk1:AgentType; Ssymk2:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3, msg4 : Message;
      index,i1,i2,i3,i4 : indexType;
  begin
   index:=0;
   lookAddPat2(Na,msg1,i1);
   lookAddPat1(B,msg2,i2);
   lookAddPat4(Asymk1, Bsymk2,msg3,i3);
   lookAddPat6(Asymk1,Bsymk2,A,Bsymk1,Ssymk2,msg4,i4);
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

---pat7: Na.B.k(A,B).senc{< k(A,B).A >}k(B,S) 
procedure isPat7(msg:Message; Var flag:boolean);
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
        isPat4(msgs[msg.concatPart[3]],flagPart3);
        isPat6(msgs[msg.concatPart[4]],flagPart4);
       if (flagPart1 & flagPart2 & flagPart3 & flagPart4) then 
         flag1 := true;
       endif;
     endif;
     flag := flag1;
  end;
---spat7: Na.B.k(A,B).senc{< k(A,B).A >}k(B,S) 
procedure constructSpat7(Na:NonceType; B:AgentType; Asymk1:AgentType; Bsymk2:AgentType; A:AgentType; Bsymk1:AgentType; Ssymk2:AgentType; Var num: indexType);
  Var i,index, i1, i2, i3, i4:indexType;
  begin
    index:=0;
    constructSpat2(Na, i1);
    constructSpat1(B, i2);
    constructSpat4(Asymk1, Bsymk2, i3);
    constructSpat6(Asymk1, Bsymk2, A, Bsymk1, Ssymk2, i4);
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
    sPat7Set.length := sPat7Set.length + 1;
    sPat7Set.content[sPat7Set.length] := index;
    num := index;
  end;

---pat8: senc{< Na.B.k(A,B).senc{< k(A,B).A >}k(B,S) >}k(A,S) 
procedure lookAddPat8(Na:NonceType; B:AgentType; Asymk1:AgentType; Bsymk2:AgentType; A:AgentType; Bsymk1:AgentType; Ssymk2:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat7(Na, B, Asymk1, Bsymk2, A, Bsymk1, Ssymk2,msg1,i1);
   lookAddPat4(Asymk1, Ssymk2,msg2,i2);
   for i : indexType do
     if (msgs[i].msgType = senc) then
       if (msgs[i].sencMsg = i1 & msgs[i].sencKey = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := senc;
     msgs[index].sencMsg := i1; 
     msgs[index].sencKey := i2; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat8: senc{< Na.B.k(A,B).senc{< k(A,B).A >}k(B,S) >}k(A,S) 
procedure isPat8(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1:=false;
    flagPart2:=false;
    if msg.msgType = senc then
      isPat7(msgs[msg.sencMsg],flagPart1);
      isPat4(msgs[msg.sencKey],flagPart2);
      if flagPart1 & flagPart2 then
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat8: senc{< Na.B.k(A,B).senc{< k(A,B).A >}k(B,S) >}k(A,S) 
procedure constructSpat8(Na:NonceType; B:AgentType; Asymk1:AgentType; Bsymk2:AgentType; A:AgentType; Bsymk1:AgentType; Ssymk2:AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat7(Na, B, Asymk1, Bsymk2, A, Bsymk1, Ssymk2, i1);
    constructSpat4(Asymk1, Ssymk2, i2);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = senc) then
        if (msgs[i].sencMsg = i1 & msgs[i].sencKey = i2) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := senc;
      msgs[index].sencMsg := i1; 
      msgs[index].sencKey := i2; 
      msgs[index].length := 1;
    endif;
    sPat8Set.length := sPat8Set.length + 1;
    sPat8Set.content[sPat8Set.length] := index;
    num := index;
  end;

---pat9: senc{< Nb >}k(A,B) 
procedure lookAddPat9(Nb:NonceType; Asymk1:AgentType; Bsymk2:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat2(Nb,msg1,i1);
   lookAddPat4(Asymk1, Bsymk2,msg2,i2);
   for i : indexType do
     if (msgs[i].msgType = senc) then
       if (msgs[i].sencMsg = i1 & msgs[i].sencKey = i2) then
          index:=i;
       endif;
     endif;
   endfor;
   if(index=0) then
     msg_end := msg_end + 1 ;
     index := msg_end;
     msgs[index].msgType := senc;
     msgs[index].sencMsg := i1; 
     msgs[index].sencKey := i2; 
     msgs[index].length := 1;
   endif;
   num:=index;
   msg:=msgs[index];
  end;

---pat9: senc{< Nb >}k(A,B) 
procedure isPat9(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1:=false;
    flagPart2:=false;
    if msg.msgType = senc then
      isPat2(msgs[msg.sencMsg],flagPart1);
      isPat4(msgs[msg.sencKey],flagPart2);
      if flagPart1 & flagPart2 then
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat9: senc{< Nb >}k(A,B) 
procedure constructSpat9(Nb:NonceType; Asymk1:AgentType; Bsymk2:AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat2(Nb, i1);
    constructSpat4(Asymk1, Bsymk2, i2);
    i := 1;
    while(i <= msg_end) do
      if (msgs[i].msgType = senc) then
        if (msgs[i].sencMsg = i1 & msgs[i].sencKey = i2) then
           index:=i;
        endif;
      endif;
      i := i+1;
    endwhile;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := senc;
      msgs[index].sencMsg := i1; 
      msgs[index].sencKey := i2; 
      msgs[index].length := 1;
    endif;
    sPat9Set.length := sPat9Set.length + 1;
    sPat9Set.content[sPat9Set.length] := index;
    num := index;
  end;

---pat10: pk(A) 
procedure lookAddPat10(APk:AgentType; Var msg:Message; Var num : indexType);
  Var index : indexType;
  begin
    index:=0;
    for i: indexType do
      if (msgs[i].msgType = key) then
        if (msgs[i].k.encType = PK & msgs[i].k.ag = APk) then
          index:=i;
        endif;
      endif;
    endfor;
    if(index=0) then
      msg_end := msg_end + 1 ;
      index := msg_end;
      msgs[index].msgType := key;
      msgs[index].k.encType:=PK; 
      msgs[index].k.ag:=APk;
      msgs[index].length := 1;
    endif;
    num:=index;
    msg:=msgs[index];
  end;

---pat10: pk(A) 
procedure isPat10(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = key & msg.k.encType = PK) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat10: pk(A) 
procedure constructSpat10(APk:AgentType; Var num: indexType);
  Var i, index : indexType;
  begin
   index:=0;
   i := 1;
   while(i<= msg_end) do
      if (msgs[i].msgType = key & msgs[i].k.encType = PK) then
        if (msgs[i].k.ag = APk) then
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
      msgs[index].k.ag := APk;
      msgs[index].length := 1;
    endif;
    sPat10Set.length := sPat10Set.length + 1;
    sPat10Set.content[sPat10Set.length] := index;
    num := index;
  end;

procedure cons1(A:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat1(A,msg,num);
  end;
procedure cons2(Na:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat2(Na,msg,num);
  end;
procedure cons3(A:AgentType; B:AgentType; Na:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat3(A, B, Na,msg,num);
  end;
procedure destruct3(msg:Message; Var A:AgentType; Var B:AgentType; Var Na:NonceType);
  Var msgNum1,msgNum2,msgNum3: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    A := msgNum1.ag;
    msgNum2 := msgs[msg.concatPart[2]];
    B := msgNum2.ag;
    msgNum3 := msgs[msg.concatPart[3]];
    Na := msgNum3.noncePart
  end;
procedure cons4(Asymk1:AgentType; Bsymk2:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat4(Asymk1, Bsymk2,msg,num);
  end;
procedure cons5(Asymk1:AgentType; Bsymk2:AgentType; A:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat5(Asymk1, Bsymk2, A,msg,num);
  end;
procedure destruct5(msg:Message; Var Asymk1:AgentType; Var Bsymk2:AgentType; Var A:AgentType);
  Var msgNum1,msgNum2: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Asymk1 := msgNum1.k.ag1;
    Bsymk2 := msgNum1.k.ag2;
    msgNum2 := msgs[msg.concatPart[2]];
    A := msgNum2.ag
  end;
procedure cons6(Asymk1:AgentType; Bsymk2:AgentType; A:AgentType; Bsymk1:AgentType; Ssymk2:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(Asymk1, Bsymk2, A, Bsymk1, Ssymk2,msg,num);
  end;
procedure destruct6(msg:Message; Var Asymk1:AgentType; Var Bsymk2:AgentType; Var A:AgentType; Var Bsymk1:AgentType; Var Ssymk2:AgentType);
  var sencMsg,msgNum1,msgNum2:Message;
      k1: KeyType;
  begin
    clear sencMsg;
    sencMsg:=msgs[msg.sencMsg];
    k1:=msgs[msg.sencKey].k;
    Bsymk1:=k1.ag1;
    Ssymk2:=k1.ag2;
    msgNum1:=msgs[sencMsg.concatPart[1]];
    msgNum2:=msgs[sencMsg.concatPart[2]];
    Asymk1:=msgNum1.k.ag1;
    Bsymk2:=msgNum1.k.ag2;
    A:=msgNum2.ag;
  end;
procedure cons7(Na:NonceType; B:AgentType; Asymk1:AgentType; Bsymk2:AgentType; A:AgentType; Bsymk1:AgentType; Ssymk2:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat7(Na, B, Asymk1, Bsymk2, A, Bsymk1, Ssymk2,msg,num);
  end;
procedure destruct7(msg:Message; Var Na:NonceType; Var B:AgentType; Var Asymk1:AgentType; Var Bsymk2:AgentType; Var A:AgentType; Var Bsymk1:AgentType; Var Ssymk2:AgentType);
  Var msgNum1,msgNum2,msgNum3,msgNum4: Message;
      k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Na := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart[2]];
    B := msgNum2.ag;
    msgNum3 := msgs[msg.concatPart[3]];
    Asymk1 := msgNum3.k.ag1;
    Bsymk2 := msgNum3.k.ag2;
    msgNum4 := msgs[msg.concatPart[4]];
    k := msgs[msgNum4.aencKey].k;
    Bsymk1 := k.ag1;
    Ssymk2 := k.ag2
  end;
procedure cons8(Na:NonceType; B:AgentType; Asymk1:AgentType; Bsymk2:AgentType; A:AgentType; Bsymk1:AgentType; Ssymk2:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat8(Na, B, Asymk1, Bsymk2, A, Bsymk1, Ssymk2,msg,num);
  end;
procedure destruct8(msg:Message; Var Na:NonceType; Var B:AgentType; Var Asymk1:AgentType; Var Bsymk2:AgentType; Var A:AgentType; Var Bsymk1:AgentType; Var Ssymk2:AgentType);
  var sencMsg,msgNum1,msgNum2,msgNum3,msgNum4:Message;
      k1: KeyType;
  begin
    clear sencMsg;
    sencMsg:=msgs[msg.sencMsg];
    k1:=msgs[msg.sencKey].k;
    Asymk1:=k1.ag1;
    Ssymk2:=k1.ag2;
    msgNum1:=msgs[sencMsg.concatPart[1]];
    msgNum2:=msgs[sencMsg.concatPart[2]];
    msgNum3:=msgs[sencMsg.concatPart[3]];
    msgNum4:=msgs[sencMsg.concatPart[4]];
    Na:=msgNum1.noncePart;
    B:=msgNum2.ag;
    Asymk1:=msgNum3.k.ag1;
    Bsymk2:=msgNum3.k.ag2;
    destruct6(msgNum4,Asymk1, Bsymk2, A, Bsymk1, Ssymk2);
  end;
procedure cons9(Nb:NonceType; Asymk1:AgentType; Bsymk2:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat9(Nb, Asymk1, Bsymk2,msg,num);
  end;
procedure destruct9(msg:Message; Var Nb:NonceType; Var Asymk1:AgentType; Var Bsymk2:AgentType);
  var k1:KeyType;
      sencMsg:Message;
   begin
      clear sencMsg;
      k1 := msgs[msg.sencKey].k;
      Asymk1 := k1.ag1;
      Bsymk2 := k1.ag2;
      sencMsg:=msgs[msg.sencMsg];
      Nb:=sencMsg.noncePart;
   end;
procedure cons10(APk:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat10(APk,msg,num);
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
          | (msg.msgType=key & (msgs[i].k.encType=msg.k.encType & msg.k.encType != Symk & msgs[i].k.ag=msg.k.ag))
          | (msg.msgType=key & (msgs[i].k.encType=msg.k.encType & msg.k.encType = Symk & msgs[i].k.ag1=msg.k.ag1 & msgs[i].k.ag2=msg.k.ag2))
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
      if (msgK.k.encType = PK) then
        key_inv.k.encType := SK;
        key_inv.k.ag := msgK.k.ag;
      elsif (msgK.k.encType = SK) then
        key_inv.k.encType := PK;
        key_inv.k.ag := msgK.k.ag;
      elsif (msgK.k.encType = Symk) then
        key_inv.k.encType := Symk;
        key_inv.k.ag1 := msgK.k.ag1;
        key_inv.k.ag2 := msgK.k.ag2;
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

function construct5By41(msgNo1,msgNo2:indexType):indexType;
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

function construct6By54(msgNo5, msgNo4:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = senc) then
       if (msgs[i].sencMsg = msgNo5 & msgs[i].sencKey = msgNo4) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := senc;
     msgs[index].sencMsg := msgNo5;
     msgs[index].sencKey := msgNo4;
     msgs[index].length := 1;
   endif;
   return index;
  end;
function construct7By2146(msgNo1,msgNo2,msgNo3,msgNo4:indexType):indexType;
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

function construct8By74(msgNo7, msgNo4:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = senc) then
       if (msgs[i].sencMsg = msgNo7 & msgs[i].sencKey = msgNo4) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := senc;
     msgs[index].sencMsg := msgNo7;
     msgs[index].sencKey := msgNo4;
     msgs[index].length := 1;
   endif;
   return index;
  end;
function construct9By24(msgNo2, msgNo4:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = senc) then
       if (msgs[i].sencMsg = msgNo2 & msgs[i].sencKey = msgNo4) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := senc;
     msgs[index].sencMsg := msgNo2;
     msgs[index].sencKey := msgNo4;
     msgs[index].length := 1;
   endif;
   return index;
  end;
--- Sorry, construct_function of this pattern has not been written!

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
      if m1.k.encType = PK then
        return (m1.k.encType = m2.k.encType) & (matchAgent(m1.k.ag, m2.k.ag));
      elsif m1.k.encType = SK then
        return (m1.k.encType = m2.k.encType) & (matchAgent(m1.k.ag, m2.k.ag));
      elsif m1.k.encType = Symk then
        return (m1.k.encType = m2.k.encType) & (matchAgent(m1.k.ag1, m2.k.ag1)) & (matchAgent(m1.k.ag2, m2.k.ag2));
      endif;
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
ruleset i:roleANums do
rule " roleA1 "
roleA[i].st = A1 & ch[1].empty = true & !roleA[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons3(roleA[i].A,roleA[i].B,roleA[i].Na,msg,msgNo);
   ch[1].empty := false;
   ch[1].msg := msg;
   ch[1].sender := roleA[i].A;
   ch[1].receiver := Intruder;
   roleA[i].st := A2;
   put "send1. ";
   put ch[1].sender;
   put "   ";
   put ch[1].receiver;
   put "   msg: ";
   printMsg(ch[1].msg);
   put "\n";
end;
rule " roleA2 "
roleA[i].st = A2 & ch[2].empty = false & !roleA[i].commit
==>
var flag_pat8:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[2].msg;
   isPat8(msg, flag_pat8);
   if(flag_pat8) then
     destruct8(msg,roleA[i].locNa,roleA[i].locB,roleA[i].locA,roleA[i].locB,roleA[i].locA,roleA[i].locB,roleA[i].locS);
     if(matchNonce(roleA[i].locNa, roleA[i].Na) & matchAgent(roleA[i].locB, roleA[i].B) & matchAgent(roleA[i].locA, roleA[i].A) & matchAgent(roleA[i].locB, roleA[i].B) & matchAgent(roleA[i].locA, roleA[i].A) & matchAgent(roleA[i].locB, roleA[i].B) & matchAgent(roleA[i].locS, roleA[i].S))then
       ch[2].empty:=true;
       clear ch[2].msg;
       roleA[i].st := A3;
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
rule " roleA3 "
roleA[i].st = A3 & ch[3].empty = true & !roleA[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons6(roleA[i].A,roleA[i].B,roleA[i].A,roleA[i].B,roleA[i].S,msg,msgNo);
   ch[3].empty := false;
   ch[3].msg := msg;
   ch[3].sender := roleA[i].A;
   ch[3].receiver := Intruder;
   roleA[i].st := A4;
   put "send3. ";
   put ch[3].sender;
   put "   ";
   put ch[3].receiver;
   put "   msg: ";
   printMsg(ch[3].msg);
   put "\n";
end;
rule " roleA4 "
roleA[i].st = A4 & ch[4].empty = false & !roleA[i].commit
==>
var flag_pat9:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[4].msg;
   isPat9(msg, flag_pat9);
   if(flag_pat9) then
     destruct9(msg,roleA[i].locNb,roleA[i].locA,roleA[i].locB);
     if(matchNonce(roleA[i].locNb, roleA[i].Nb) & matchAgent(roleA[i].locA, roleA[i].A) & matchAgent(roleA[i].locB, roleA[i].B))then
       ch[4].empty:=true;
       clear ch[4].msg;
       roleA[i].st := A5;
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
rule " roleA5 "
roleA[i].st = A5 & ch[5].empty = true & !roleA[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons9(roleA[i].Nb,roleA[i].A,roleA[i].B,msg,msgNo);
   ch[5].empty := false;
   ch[5].msg := msg;
   ch[5].sender := roleA[i].A;
   ch[5].receiver := Intruder;
   roleA[i].st := A1;
   put "send5. ";
   put ch[5].sender;
   put "   ";
   put ch[5].receiver;
   put "   msg: ";
   printMsg(ch[5].msg);
   put "\n";
   roleA[i].commit := true;
end;
endruleset;

ruleset i:roleBNums do
rule " roleB1 "
roleB[i].st = B1 & ch[3].empty = false & !roleB[i].commit
==>
var flag_pat6:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[3].msg;
   isPat6(msg, flag_pat6);
   if(flag_pat6) then
     destruct6(msg,roleB[i].locA,roleB[i].locB,roleB[i].locA,roleB[i].locB,roleB[i].locS);
     if(matchAgent(roleB[i].locA, roleB[i].A) & matchAgent(roleB[i].locB, roleB[i].B) & matchAgent(roleB[i].locA, roleB[i].A) & matchAgent(roleB[i].locB, roleB[i].B) & matchAgent(roleB[i].locS, roleB[i].S))then
       ch[3].empty:=true;
       clear ch[3].msg;
       roleB[i].st := B2;
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
rule " roleB2 "
roleB[i].st = B2 & ch[4].empty = true & !roleB[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons9(roleB[i].Nb,roleB[i].A,roleB[i].B,msg,msgNo);
   ch[4].empty := false;
   ch[4].msg := msg;
   ch[4].sender := roleB[i].B;
   ch[4].receiver := Intruder;
   roleB[i].st := B3;
   put "send2. ";
   put ch[4].sender;
   put "   ";
   put ch[4].receiver;
   put "   msg: ";
   printMsg(ch[4].msg);
   put "\n";
end;
rule " roleB3 "
roleB[i].st = B3 & ch[5].empty = false & !roleB[i].commit
==>
var flag_pat9:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[5].msg;
   isPat9(msg, flag_pat9);
   if(flag_pat9) then
     destruct9(msg,roleB[i].locNb,roleB[i].locA,roleB[i].locB);
     if(matchNonce(roleB[i].locNb, roleB[i].Nb) & matchAgent(roleB[i].locA, roleB[i].A) & matchAgent(roleB[i].locB, roleB[i].B))then
       ch[5].empty:=true;
       clear ch[5].msg;
       roleB[i].st := B1;
     endif;
   endif;
   put "recv3. ";
   put ch[5].sender;
   put "   ";
   put ch[5].receiver;
   put "   msg: ";
   printMsg(msg);
   put "\n";
   roleB[i].commit := true;
end;
endruleset;

ruleset i:roleSNums do
rule " roleS1 "
roleS[i].st = S1 & ch[1].empty = false & !roleS[i].commit
==>
var flag_pat3:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[1].msg;
   isPat3(msg, flag_pat3);
   if(flag_pat3) then
     destruct3(msg,roleS[i].locA,roleS[i].locB,roleS[i].locNa);
     if(matchAgent(roleS[i].locA, roleS[i].A) & matchAgent(roleS[i].locB, roleS[i].B) & matchNonce(roleS[i].locNa, roleS[i].Na))then
       ch[1].empty:=true;
       clear ch[1].msg;
       roleS[i].st := S2;
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
rule " roleS2 "
roleS[i].st = S2 & ch[2].empty = true & !roleS[i].commit 
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons8(roleS[i].Na,roleS[i].B,roleS[i].A,roleS[i].B,roleS[i].A,roleS[i].B,roleS[i].S,msg,msgNo);
   ch[2].empty := false;
   ch[2].msg := msg;
   ch[2].sender := roleS[i].S;
   ch[2].receiver := Intruder;
   roleS[i].st := S1;
   put "send2. ";
   put ch[2].sender;
   put "   ";
   put ch[2].receiver;
   put "   msg: ";
   printMsg(ch[2].msg);
   put "\n";
   roleS[i].commit := true;
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
  var flag_pat8:boolean;
      msgNo:indexType;
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
      endif;
      ch[2].empty := true;
      clear ch[2].msg;
    endif;
  end;

---rule of intruder to get msg from ch[3] 
rule "intruderGetMsgFromCh[3]" 
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
  var flag_pat9:boolean;
      msgNo:indexType;
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
      endif;
      ch[5].empty := true;
      clear ch[5].msg;
    endif;
  end;

---rule of intruder to emit msg into ch[1].
ruleset i: msgLen do
  ruleset j: roleSNums do
    rule "intruderEmitMsgIntoCh[1]"
      ch[1].empty=true & i <= pat3Set.length & pat3Set.content[i] != 0 & Spy_known[pat3Set.content[i]] & matchPat(msgs[pat3Set.content[i]], sPat3Set)
      ==>
      begin
        if (!emit[pat3Set.content[i]]) then  --- & msgs[msgs[pat3Set.content[i]].aencKey].k.ag=roleS[j].S
          clear ch[1];
          ch[1].msg:=msgs[pat3Set.content[i]];
          ch[1].sender:=Intruder;
          ch[1].receiver:=roleS[j].S;
          ch[1].empty:=false;
          emit[pat3Set.content[i]] := true;
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
  ruleset j: roleANums do
    rule "intruderEmitMsgIntoCh[2]"
      ch[2].empty=true & i <= pat8Set.length & pat8Set.content[i] != 0 & Spy_known[pat8Set.content[i]] & matchPat(msgs[pat8Set.content[i]], sPat8Set)
      ==>
      begin
        if (!emit[pat8Set.content[i]]) then  --- & msgs[msgs[pat8Set.content[i]].aencKey].k.ag=roleA[j].A
          clear ch[2];
          ch[2].msg:=msgs[pat8Set.content[i]];
          ch[2].sender:=Intruder;
          ch[2].receiver:=roleA[j].A;
          ch[2].empty:=false;
          emit[pat8Set.content[i]] := true;
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
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[3]"
      ch[3].empty=true & i <= pat6Set.length & pat6Set.content[i] != 0 & Spy_known[pat6Set.content[i]] & matchPat(msgs[pat6Set.content[i]], sPat6Set)
      ==>
      begin
        if (!emit[pat6Set.content[i]]) then  --- & msgs[msgs[pat6Set.content[i]].aencKey].k.ag=roleB[j].B
          clear ch[3];
          ch[3].msg:=msgs[pat6Set.content[i]];
          ch[3].sender:=Intruder;
          ch[3].receiver:=roleB[j].B;
          ch[3].empty:=false;
          emit[pat6Set.content[i]] := true;
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
  ruleset j: roleANums do
    rule "intruderEmitMsgIntoCh[4]"
      ch[4].empty=true & i <= pat9Set.length & pat9Set.content[i] != 0 & Spy_known[pat9Set.content[i]] & matchPat(msgs[pat9Set.content[i]], sPat9Set)
      ==>
      begin
        if (!emit[pat9Set.content[i]]) then  --- & msgs[msgs[pat9Set.content[i]].aencKey].k.ag=roleA[j].A
          clear ch[4];
          ch[4].msg:=msgs[pat9Set.content[i]];
          ch[4].sender:=Intruder;
          ch[4].receiver:=roleA[j].A;
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
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[5]"
      ch[5].empty=true & i <= pat9Set.length & pat9Set.content[i] != 0 & Spy_known[pat9Set.content[i]] & matchPat(msgs[pat9Set.content[i]], sPat9Set)
      ==>
      begin
        if (!emit[pat9Set.content[i]]) then  --- & msgs[msgs[pat9Set.content[i]].aencKey].k.ag=roleB[j].B
          clear ch[5];
          ch[5].msg:=msgs[pat9Set.content[i]];
          ch[5].sender:=Intruder;
          ch[5].receiver:=roleB[j].B;
          ch[5].empty:=false;
          emit[pat9Set.content[i]] := true;
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
--- enconcat and deconcat rules for pat: concat(A.B.Na)

ruleset i:msgLen do 
  rule "deconcat 3"	---pat3
    i<=pat3Set.length & pat3Set.content[i] != 0 & Spy_known[pat3Set.content[i]] &
    !(Spy_known[msgs[pat3Set.content[i]].concatPart[1]] & Spy_known[msgs[pat3Set.content[i]].concatPart[2]])
    ==>
    var msgPat11,msgPat12:indexType;
        flag_pat11,flag_pat12:boolean;
    begin
      if (!Spy_known[msgs[pat3Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat3Set.content[i]].concatPart[1]]:=true;
        msgPat11 := msgs[pat3Set.content[i]].concatPart[1];
        isPat1(msgs[msgPat11],flag_pat11);
        if (flag_pat11) then
          if(!exist(pat1Set,msgPat11)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length] := msgPat11;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat3Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat3Set.content[i]].concatPart[2]]:=true;
        msgPat12 := msgs[pat3Set.content[i]].concatPart[2];
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
    rule "enconcat 3"	---pat3
      i0<=pat1Set.length & Spy_known[pat1Set.content[i0]] &
      i1<=pat1Set.length & Spy_known[pat1Set.content[i1]] &
      i2<=pat2Set.length & Spy_known[pat2Set.content[i2]] &
      matchPat(msgs[construct3By112(pat1Set.content[i0],pat1Set.content[i1],pat2Set.content[i2])], sPat3Set)&
      !Spy_known[construct3By112(pat1Set.content[i0],pat1Set.content[i1],pat2Set.content[i2])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct3By112(pat1Set.content[i0],pat1Set.content[i1],pat2Set.content[i2]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat3Set,concatMsgNo)) then
          pat3Set.length:=pat3Set.length+1;
          pat3Set.content[pat3Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;
endruleset;

--- enconcat and deconcat rules for pat: concat(k(A,B).A)

ruleset i:msgLen do 
  rule "deconcat 5"	---pat5
    i<=pat5Set.length & pat5Set.content[i] != 0 & Spy_known[pat5Set.content[i]] &
    !(Spy_known[msgs[pat5Set.content[i]].concatPart[1]] & Spy_known[msgs[pat5Set.content[i]].concatPart[2]])
    ==>
    var msgPat4,msgPat1:indexType;
        flag_pat4,flag_pat1:boolean;
    begin
      if (!Spy_known[msgs[pat5Set.content[i]].concatPart[1]]) then
        Spy_known[msgs[pat5Set.content[i]].concatPart[1]]:=true;
        msgPat4 := msgs[pat5Set.content[i]].concatPart[1];
        isPat4(msgs[msgPat4],flag_pat4);
        if (flag_pat4) then
          if(!exist(pat4Set,msgPat4)) then
             pat4Set.length:=pat4Set.length+1;
             pat4Set.content[pat4Set.length] := msgPat4;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat5Set.content[i]].concatPart[2]]) then
        Spy_known[msgs[pat5Set.content[i]].concatPart[2]]:=true;
        msgPat1 := msgs[pat5Set.content[i]].concatPart[2];
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
    rule "enconcat 5"	---pat5
      i0<=pat4Set.length & Spy_known[pat4Set.content[i0]] &
      i1<=pat1Set.length & Spy_known[pat1Set.content[i1]] &
      matchPat(msgs[construct5By41(pat4Set.content[i0],pat1Set.content[i1])], sPat5Set)&
      !Spy_known[construct5By41(pat4Set.content[i0],pat1Set.content[i1])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct5By41(pat4Set.content[i0],pat1Set.content[i1]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat5Set,concatMsgNo)) then
          pat5Set.length:=pat5Set.length+1;
          pat5Set.content[pat5Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;

--- encrypt and decrypt rules of pat senc(k(A,B).A,k(B,S))
ruleset i:msgLen do
  rule "sdecrypt 6" --pat6
    i<=pat6Set.length & pat6Set.content[i] != 0
    & Spy_known[pat6Set.content[i]] & !Spy_known[msgs[pat6Set.content[i]].sencMsg]
    ==>
    var key_inv:Message;
	      msgPat5,keyNo:indexType;
	      flag_pat5:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat6Set.content[i]].sencKey]);
      get_msgNo(key_inv,keyNo);
      if ( (key_inv.k.encType = Symk & (key_inv.k.ag1 = Intruder | key_inv.k.ag2 = Intruder)) | Spy_known[keyNo]) then
        Spy_known[msgs[pat6Set.content[i]].sencMsg]:=true;
        msgPat5:=msgs[pat6Set.content[i]].sencMsg;
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

ruleset i:msgLen do 
  ruleset j:msgLen do 
    rule "sencrypt 6"  --pat6
      i<=pat5Set.length & pat5Set.content[i] != 0 & Spy_known[pat5Set.content[i]] &
      j<=pat4Set.length & pat4Set.content[j] != 0 & Spy_known[pat4Set.content[j]] &
      matchPat(msgs[construct6By54(pat5Set.content[i],pat4Set.content[j])], sPat6Set) &
      !Spy_known[construct6By54(pat5Set.content[i],pat4Set.content[j])] 
       ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat4Set.content[j]].k.encType=Symk) then
          encMsgNo := construct6By54(pat5Set.content[i],pat4Set.content[j]);
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

--- enconcat and deconcat rules for pat: concat(Na.B.k(A,B).senc{< k(A,B).A >}k(B,S))

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
  ruleset i3: msgLen do 
    rule "enconcat 7"	---pat7
      i0<=pat2Set.length & Spy_known[pat2Set.content[i0]] &
      i1<=pat1Set.length & Spy_known[pat1Set.content[i1]] &
      i2<=pat4Set.length & Spy_known[pat4Set.content[i2]] &
      i3<=pat6Set.length & Spy_known[pat6Set.content[i3]] &
      matchPat(msgs[construct7By2146(pat2Set.content[i0],pat1Set.content[i1],pat4Set.content[i2],pat6Set.content[i3])], sPat7Set)&
      !Spy_known[construct7By2146(pat2Set.content[i0],pat1Set.content[i1],pat4Set.content[i2],pat6Set.content[i3])]
      ==>
      var concatMsgNo:indexType;
      begin
        concatMsgNo := construct7By2146(pat2Set.content[i0],pat1Set.content[i1],pat4Set.content[i2],pat6Set.content[i3]);
        Spy_known[concatMsgNo]:=true;
        if (!exist(pat7Set,concatMsgNo)) then
          pat7Set.length:=pat7Set.length+1;
          pat7Set.content[pat7Set.length]:=concatMsgNo;
        endif;
      end;
endruleset;
endruleset;
endruleset;
endruleset;

--- encrypt and decrypt rules of pat senc(Na.B.k(A,B).senc{< k(A,B).A >}k(B,S),k(A,S))
ruleset i:msgLen do
  rule "sdecrypt 8" --pat8
    i<=pat8Set.length & pat8Set.content[i] != 0
    & Spy_known[pat8Set.content[i]] & !Spy_known[msgs[pat8Set.content[i]].sencMsg]
    ==>
    var key_inv:Message;
	      msgPat7,keyNo:indexType;
	      flag_pat7:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat8Set.content[i]].sencKey]);
      get_msgNo(key_inv,keyNo);
      if ( (key_inv.k.encType = Symk & (key_inv.k.ag1 = Intruder | key_inv.k.ag2 = Intruder)) | Spy_known[keyNo]) then
        Spy_known[msgs[pat8Set.content[i]].sencMsg]:=true;
        msgPat7:=msgs[pat8Set.content[i]].sencMsg;
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
    rule "sencrypt 8"  --pat8
      i<=pat7Set.length & pat7Set.content[i] != 0 & Spy_known[pat7Set.content[i]] &
      j<=pat4Set.length & pat4Set.content[j] != 0 & Spy_known[pat4Set.content[j]] &
      matchPat(msgs[construct8By74(pat7Set.content[i],pat4Set.content[j])], sPat8Set) &
      !Spy_known[construct8By74(pat7Set.content[i],pat4Set.content[j])] 
       ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat4Set.content[j]].k.encType=Symk) then
          encMsgNo := construct8By74(pat7Set.content[i],pat4Set.content[j]);
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

--- encrypt and decrypt rules of pat senc(Nb,k(A,B))
ruleset i:msgLen do
  rule "sdecrypt 9" --pat9
    i<=pat9Set.length & pat9Set.content[i] != 0
    & Spy_known[pat9Set.content[i]] & !Spy_known[msgs[pat9Set.content[i]].sencMsg]
    ==>
    var key_inv:Message;
	      msgPat2,keyNo:indexType;
	      flag_pat2:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat9Set.content[i]].sencKey]);
      get_msgNo(key_inv,keyNo);
      if ( (key_inv.k.encType = Symk & (key_inv.k.ag1 = Intruder | key_inv.k.ag2 = Intruder)) | Spy_known[keyNo]) then
        Spy_known[msgs[pat9Set.content[i]].sencMsg]:=true;
        msgPat2:=msgs[pat9Set.content[i]].sencMsg;
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
    rule "sencrypt 9"  --pat9
      i<=pat2Set.length & pat2Set.content[i] != 0 & Spy_known[pat2Set.content[i]] &
      j<=pat4Set.length & pat4Set.content[j] != 0 & Spy_known[pat4Set.content[j]] &
      matchPat(msgs[construct9By24(pat2Set.content[i],pat4Set.content[j])], sPat9Set) &
      !Spy_known[construct9By24(pat2Set.content[i],pat4Set.content[j])] 
       ==>
      var encMsgNo:indexType;
      begin
        if (msgs[pat4Set.content[j]].k.encType=Symk) then
          encMsgNo := construct9By24(pat2Set.content[i],pat4Set.content[j]);
          if (!exist(pat9Set,encMsgNo)) then
            pat9Set.length := pat9Set.length+1;
            pat9Set.content[pat9Set.length]:=encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo] := true;
          endif;
        endif;
      end;
  endruleset;
endruleset;

startstate
  roleA[1].A := Alice;
  roleA[1].B := Bob;
  roleA[1].S := Server;
  roleA[1].Na := Na;
    roleA[1].st := A1;
  roleA[1].commit := false;
  roleA[1].Nb := anyNonce;
  roleB[1].B := Bob;
  roleB[1].S := Server;
  roleB[1].Nb := Nb;
    roleB[1].st := B1;
  roleB[1].commit := false;
  roleB[1].Na := anyNonce;
  roleB[1].A := anyAgent;
  roleS[1].S := Server;
  roleS[1].A := Alice;
  roleS[1].B := Bob;
        roleS[1].st := S1;
  roleS[1].commit := false;
  roleS[1].Na := anyNonce;
  roleS[1].Nb := anyNonce;
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

  for i:indexType do 
    Spy_known[i] := false;
  endfor;

  msg_end:=msg_end+1;
  msgs[msg_end].msgType := key;
  msgs[msg_end].k.ag:=Intruder;
  msgs[msg_end].k.encType:=SK;
  msgs[msg_end].length := 1;
  pat10Set.length := pat10Set.length + 1; 
  pat10Set.content[pat10Set.length] :=msg_end;
  Spy_known[msg_end] := true;
    for i : roleANums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleA[i].A;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat10Set.length := pat10Set.length + 1;
    pat10Set.content[pat10Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleBNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleB[i].B;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat10Set.length := pat10Set.length + 1;
    pat10Set.content[pat10Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleSNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleS[i].S;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat10Set.length := pat10Set.length + 1;
    pat10Set.content[pat10Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleSNums do
    constructSpat3(roleS[i].A,roleS[i].B,roleS[i].Na, gnum);
  endfor;
  for i : roleANums do
    constructSpat8(roleA[i].Na,roleA[i].B,roleA[i].A,roleA[i].A,roleA[i].A,roleA[i].B,roleA[i].B, gnum);
  endfor;
  for i : roleBNums do
    constructSpat6(roleB[i].A,roleB[i].A,roleB[i].A,roleB[i].B,roleB[i].B, gnum);
  endfor;
  for i : roleANums do
    constructSpat9(roleA[i].Nb,roleA[i].A,roleA[i].A, gnum);
  endfor;
  for i : roleBNums do
    constructSpat9(roleB[i].Nb,roleB[i].A,roleB[i].A, gnum);
  endfor;

end;

invariant "secrecy1" 
forall i:indexType do
    (msgs[i].msgType=nonce & msgs[i].noncePart=Nb)
     ->
     Spy_known[i] = false
end;

invariant "secrecy2" 
forall i:indexType do
    (msgs[i].msgType=key & msgs[i].k.encType=Symk & msgs[i].k.ag1=Alice & msgs[i].k.ag2=Bob)
     ->
     Spy_known[i] = false
end;

invariant "weakB"
  forall i: roleANums do
    roleA[i].commit = true 
    ->
    (exists j: roleBNums do
      ---roleB[j].commit = true &
      roleB[i].Na = roleA[j].Na
    endexists)
  endforall;
