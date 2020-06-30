const
  roleANum:1;
  roleBNum:1;
  totalFact:400;
  msgLength:10;
  chanNum:10;
type
  indexType:0..totalFact;
  roleANums:1..roleANum;
  roleBNums:1..roleBNum;
  msgLen:0..msgLength;
  chanNums:1..chanNum;

  AgentType : enum{Intruder, Alice, Bob,anyAgent}; ---Intruder 
  NonceType : enum{Na, Nb, intruderNonce, anyNonce};  

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
   Nb : NonceType;
   A : AgentType;
   B : AgentType;
   locNa : NonceType;
   locNb : NonceType;
   locA : AgentType;
   locB : AgentType;
   st: AStatus;
   commit : boolean;
  end;
  RoleB : record
   Na : NonceType;
   Nb : NonceType;
   A : AgentType;
   B : AgentType;
   locNa : NonceType;
   locNb : NonceType;
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
---pat1: Na 
procedure lookAddPat1(Na:NonceType; Var msg:Message; Var num : indexType);
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

---pat1: Na 
procedure isPat1(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = nonce) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat1: Na 
procedure constructSpat1(Na:NonceType; Var num: indexType);
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
    sPat1Set.length := sPat1Set.length + 1;
    sPat1Set.content[sPat1Set.length] := index;
    num := index;
  end;

---pat2: A 
procedure lookAddPat2(A:AgentType; Var msg:Message; Var num : indexType);
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

---pat2: A 
procedure isPat2(msg:Message; Var flag:boolean);
  var flag1 : boolean;
  begin
    flag1 := false;
    if (msg.msgType = agent) then
      flag1 := true;
    endif;
    flag := flag1;
  end;

---spat2: A 
procedure constructSpat2(A:AgentType; Var num: indexType);
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
    sPat2Set.length := sPat2Set.length + 1;
    sPat2Set.content[sPat2Set.length] := index;
    num := index;
  end;

---pat3: Na.A 
procedure lookAddPat3(Na:NonceType; A:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2 : Message;
      index,i1,i2 : indexType;
  begin
   index:=0;
   lookAddPat1(Na,msg1,i1);
   lookAddPat2(A,msg2,i2);
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

---pat3: Na.A 
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
---spat3: Na.A 
procedure constructSpat3(Na:NonceType; A:AgentType; Var num: indexType);
  Var i,index, i1, i2:indexType;
  begin
    index:=0;
    constructSpat1(Na, i1);
    constructSpat2(A, i2);
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
    sPat3Set.length := sPat3Set.length + 1;
    sPat3Set.content[sPat3Set.length] := index;
    num := index;
  end;

---pat4: pk(B) 
procedure lookAddPat4(BPk :AgentType; Var msg:Message; Var num : indexType);
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

---pat4: pk(B) 
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

---spat4: pk(B) 
procedure constructSpat4(BPk :AgentType; Var num: indexType);
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
    sPat4Set.length := sPat4Set.length + 1;
    sPat4Set.content[sPat4Set.length] := index;
    num := index;
  end;

---pat5: aenc{< Na.A >}pk(B) 
procedure lookAddPat5(Na:NonceType; A:AgentType; BPk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat3(Na, A,msg1,i1);
   lookAddPat4(BPk,msg2,i2);
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

---pat5: aenc{< Na.A >}pk(B) 
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

---spat5: aenc{< Na.A >}pk(B) 
procedure constructSpat5(Na:NonceType; A:AgentType; BPk :AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat3(Na, A, i1);
    constructSpat4(BPk, i2);
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
    sPat5Set.length := sPat5Set.length + 1;
    sPat5Set.content[sPat5Set.length] := index;
    num := index;
  end;

---pat6: Na.Nb.B 
procedure lookAddPat6(Na:NonceType; Nb:NonceType; B:AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2, msg3 : Message;
      index,i1,i2,i3 : indexType;
  begin
   index:=0;
   lookAddPat1(Na,msg1,i1);
   lookAddPat1(Nb,msg2,i2);
   lookAddPat2(B,msg3,i3);
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

---pat6: Na.Nb.B 
procedure isPat6(msg:Message; Var flag:boolean);
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
---spat6: Na.Nb.B 
procedure constructSpat6(Na:NonceType; Nb:NonceType; B:AgentType; Var num: indexType);
  Var i,index, i1, i2, i3:indexType;
  begin
    index:=0;
    constructSpat1(Na, i1);
    constructSpat1(Nb, i2);
    constructSpat2(B, i3);
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
    sPat6Set.length := sPat6Set.length + 1;
    sPat6Set.content[sPat6Set.length] := index;
    num := index;
  end;

---pat7: aenc{< Na.Nb.B >}pk(A) 
procedure lookAddPat7(Na:NonceType; Nb:NonceType; B:AgentType; APk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat6(Na, Nb, B,msg1,i1);
   lookAddPat4(APk,msg2,i2);
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

---pat7: aenc{< Na.Nb.B >}pk(A) 
procedure isPat7(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat6(msgs[msg.aencMsg],flagPart1);
      isPat4(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat7: aenc{< Na.Nb.B >}pk(A) 
procedure constructSpat7(Na:NonceType; Nb:NonceType; B:AgentType; APk :AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat6(Na, Nb, B, i1);
    constructSpat4(APk, i2);
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
    sPat7Set.length := sPat7Set.length + 1;
    sPat7Set.content[sPat7Set.length] := index;
    num := index;
  end;

---pat8: aenc{< Nb >}pk(B) 
procedure lookAddPat8(Nb:NonceType; BPk :AgentType; Var msg:Message; Var num : indexType);
  Var msg1, msg2: Message;
      index,i1,i2:indexType;
  begin
   index:=0;
   lookAddPat1(Nb,msg1,i1);
   lookAddPat4(BPk,msg2,i2);
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

---pat8: aenc{< Nb >}pk(B) 
procedure isPat8(msg:Message; Var flag:boolean);
  var flag1,flagPart1,flagPart2 : boolean;
  begin
    flag1 := false;
    flagPart1 := false;
    flagPart2 := false;
    if (msg.msgType = aenc) then
      isPat1(msgs[msg.aencMsg],flagPart1);
      isPat4(msgs[msg.aencKey],flagPart2);
      if (flagPart1 & flagPart2) then 
        flag1 := true;
      endif;
    endif;
    flag := flag1;
  end;

---spat8: aenc{< Nb >}pk(B) 
procedure constructSpat8(Nb:NonceType; BPk :AgentType; Var num: indexType);
  Var i,index,i1,i2:indexType;
  begin
    index:=0;
    constructSpat1(Nb, i1);
    constructSpat4(BPk, i2);
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
    sPat8Set.length := sPat8Set.length + 1;
    sPat8Set.content[sPat8Set.length] := index;
    num := index;
  end;

procedure cons1(Na:NonceType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat1(Na,msg,num);
  end;
procedure cons2(A:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat2(A,msg,num);
  end;
procedure cons3(Na:NonceType; A:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat3(Na, A,msg,num);
  end;
procedure destruct3(msg:Message; Var Na:NonceType; Var A:AgentType);
  Var msgNum1,msgNum2: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Na := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart[2]];
    A := msgNum2.ag;

  end;
procedure cons4(BPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat4(BPk,msg,num);
  end;
procedure cons5(Na:NonceType; A:AgentType; BPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat5(Na, A, BPk,msg,num);
  end;
procedure destruct5(msg:Message; Var Na:NonceType; Var A:AgentType; Var BPk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2:Message;
  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
   BPk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart[1]];
    msgNum2:=msgs[msg1.concatPart[2]];
    Na:=msgNum1.noncePart;
    A:=msgNum2.ag;
  end;
procedure cons6(Na:NonceType; Nb:NonceType; B:AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat6(Na, Nb, B,msg,num);
  end;
procedure destruct6(msg:Message; Var Na:NonceType; Var Nb:NonceType; Var B:AgentType);
  Var msgNum1,msgNum2,msgNum3: Message;
    k: KeyType;
  begin
    msgNum1 := msgs[msg.concatPart[1]];
    Na := msgNum1.noncePart;
    msgNum2 := msgs[msg.concatPart[2]];
    Nb := msgNum2.noncePart;
    msgNum3 := msgs[msg.concatPart[3]];
    B := msgNum3.ag;

  end;
procedure cons7(Na:NonceType; Nb:NonceType; B:AgentType; APk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat7(Na, Nb, B, APk,msg,num);
  end;
procedure destruct7(msg:Message; Var Na:NonceType; Var Nb:NonceType; Var B:AgentType; Var APk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2,msgNum3:Message;
  begin
    clear msg1;
   k1 := msgs[msg.aencKey].k;
   APk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart[1]];
    msgNum2:=msgs[msg1.concatPart[2]];
    msgNum3:=msgs[msg1.concatPart[3]];
    Na:=msgNum1.noncePart;
    Nb:=msgNum2.noncePart;
    B:=msgNum3.ag;
  end;
procedure cons8(Nb:NonceType; BPk :AgentType; Var msg:Message; Var num:indexType);
  begin
    clear msg;
    clear num;    lookAddPat8(Nb, BPk,msg,num);
  end;
procedure destruct8(msg:Message; Var Nb:NonceType; Var BPk:AgentType);
  var k1:KeyType;
    msg1,msgNum1,msgNum2:Message;
   begin
    clear msg1;
    k1 := msgs[msg.aencKey].k;
    BPk := k1.ag;
    msg1:=msgs[msg.aencMsg];
    Nb:=msg1.noncePart;
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

function construct5By34(msgNo3, msgNo4:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo3 & msgs[i].aencKey = msgNo4) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo3;
     msgs[index].aencKey := msgNo4;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct6By112(msgNo1,msgNo2,msgNo3:indexType):indexType;
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

function construct7By64(msgNo6, msgNo4:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo6 & msgs[i].aencKey = msgNo4) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo6;
     msgs[index].aencKey := msgNo4;
     msgs[index].length := 1;
   endif;
   return index;
  end;

function construct8By14(msgNo1, msgNo4:indexType):indexType;
  var index: indexType;
      ---msg : Message;
  begin
   index := 0;
   for i :indexType do
     if (msgs[i].msgType = aenc) then
       if (msgs[i].aencMsg = msgNo1 & msgs[i].aencKey = msgNo4) then
         index := i;
       endif;
     endif;
   endfor;
   if (index = 0) then 
     msg_end := msg_end + 1;
     index := msg_end;
     msgs[index].msgType := aenc;
     msgs[index].aencMsg := msgNo1;
     msgs[index].aencKey := msgNo4;
     msgs[index].length := 1;
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
	    return matchNonce(m1.noncePart, m2.noncePart); 
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

procedure enconcatPat3();
  var i1, i2, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat1Set.length) do
      i2 := 1;
      while (i2 <= pat2Set.length) do
        if (matchPat(msgs[construct3By12(pat1Set.content[i1], pat2Set.content[i2])], sPat3Set) &
            !Spy_known[construct3By12(pat1Set.content[i1], pat2Set.content[i2])]) then
             concatMsgNo := construct3By12(pat1Set.content[i1], pat2Set.content[i2]);
             if (!exist(pat3Set,concatMsgNo)) then
                 pat3Set.length := pat3Set.length+1;
                 pat3Set.content[pat3Set.length]:=concatMsgNo;
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

procedure aDecryptionPat5(msg: Message);
  var key_inv:Message;
      msgPat3:indexType;
  	  flag_pat3:boolean;
  begin
    if (! Spy_known[msg.aencMsg]) then
       key_inv := inverseKey(msgs[msg.aencKey]);
       if (key_inv.k.ag = Intruder | key_inv.k.encType = PK) then
         Spy_known[msg.aencMsg]:=true;
         msgPat3:=msg.aencMsg;
         isPat3(msgs[msgPat3],flag_pat3);
         if (flag_pat3) then
           if (!exist(pat3Set,msgPat3)) then
             pat3Set.length:=pat3Set.length+1;
             pat3Set.content[pat3Set.length]:=msgPat3;
             deconcatPat3(msgs[msgPat3]);
           endif;
         endif;
       endif;
    endif;
  end;

procedure aEncryptionPat5();
  var i, j, encMsgNo:indexType;
  begin
    i := 1;
    while (i <= pat3Set.length) do
      j := 1;
      while (j<=pat4Set.length) do
        if (matchPat(msgs[construct5By34(pat3Set.content[i],pat4Set.content[j])], sPat5Set) &
           !Spy_known[construct5By34(pat3Set.content[i],pat4Set.content[j])]) then
           if (msgs[pat4Set.content[j]].k.encType=PK) then
             encMsgNo := construct5By34(pat3Set.content[i],pat4Set.content[j]);
             if (!exist(pat5Set,encMsgNo)) then
                pat5Set.length := pat5Set.length+1;
                pat5Set.content[pat5Set.length]:=encMsgNo;
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

procedure deconcatPat6(msg: Message);
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

procedure enconcatPat6();
  var i1, i2, i3, concatMsgNo: indexType;
  begin
    i1 := 1;
    while (i1 <= pat1Set.length) do
      i2 := 1;
      while (i2 <= pat1Set.length) do
        i3 := 1;
        while (i3 <= pat2Set.length) do
          if (matchPat(msgs[construct6By112(pat1Set.content[i1], pat1Set.content[i2], pat2Set.content[i3])], sPat6Set) &
              !Spy_known[construct6By112(pat1Set.content[i1], pat1Set.content[i2], pat2Set.content[i3])]) then
               concatMsgNo := construct6By112(pat1Set.content[i1], pat1Set.content[i2], pat2Set.content[i3]);
               if (!exist(pat6Set,concatMsgNo)) then
                   pat6Set.length := pat6Set.length+1;
                   pat6Set.content[pat6Set.length]:=concatMsgNo;
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

procedure aDecryptionPat7(msg: Message);
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
             deconcatPat6(msgs[msgPat6]);
           endif;
         endif;
       endif;
    endif;
  end;

procedure aEncryptionPat7();
  var i, j, encMsgNo:indexType;
  begin
    i := 1;
    while (i <= pat6Set.length) do
      j := 1;
      while (j<=pat4Set.length) do
        if (matchPat(msgs[construct7By64(pat6Set.content[i],pat4Set.content[j])], sPat7Set) &
           !Spy_known[construct7By64(pat6Set.content[i],pat4Set.content[j])]) then
           if (msgs[pat4Set.content[j]].k.encType=PK) then
             encMsgNo := construct7By64(pat6Set.content[i],pat4Set.content[j]);
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

procedure aDecryptionPat8(msg: Message);
  var key_inv:Message;
      msgPat1:indexType;
  	  flag_pat1:boolean;
  begin
    if (! Spy_known[msg.aencMsg]) then
       key_inv := inverseKey(msgs[msg.aencKey]);
       if (key_inv.k.ag = Intruder | key_inv.k.encType = PK) then
         Spy_known[msg.aencMsg]:=true;
         msgPat1:=msg.aencMsg;
         isPat1(msgs[msgPat1],flag_pat1);
         if (flag_pat1) then
           if (!exist(pat1Set,msgPat1)) then
             pat1Set.length:=pat1Set.length+1;
             pat1Set.content[pat1Set.length]:=msgPat1;
           endif;
         endif;
       endif;
    endif;
  end;

procedure aEncryptionPat8();
  var i, j, encMsgNo:indexType;
  begin
    i := 1;
    while (i <= pat1Set.length) do
      j := 1;
      while (j<=pat4Set.length) do
        if (matchPat(msgs[construct8By14(pat1Set.content[i],pat4Set.content[j])], sPat8Set) &
           !Spy_known[construct8By14(pat1Set.content[i],pat4Set.content[j])]) then
           if (msgs[pat4Set.content[j]].k.encType=PK) then
             encMsgNo := construct8By14(pat1Set.content[i],pat4Set.content[j]);
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

ruleset i:roleANums do
rule " roleA1 "
roleA[i].st = A1 & ch[1].empty = true & !roleA[i].commit
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons5(roleA[i].Na,roleA[i].A,roleA[i].B,msg,msgNo);
   ch[1].empty := false;
   ch[1].msg := msg;
   ch[1].sender := roleA[i].A;
   ch[1].receiver := Intruder;
   roleA[i].st := A2;
end;
rule " roleA2 "
roleA[i].st = A2 & ch[2].empty = false & !roleA[i].commit
==>
var flag_pat7:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[2].msg;
   isPat7(msg, flag_pat7);
   if(flag_pat7) then
     destruct7(msg,roleA[i].locNa,roleA[i].locNb,roleA[i].locB,roleA[i].locA);
     if(matchNonce(roleA[i].locNa, roleA[i].Na) & matchNonce(roleA[i].locNb, roleA[i].Nb) & matchAgent(roleA[i].locB, roleA[i].B) & matchAgent(roleA[i].locA, roleA[i].A))then
       roleA[i].st := A3;
     endif;
   endif;
   clear ch[2].msg;
   ch[2].empty:=true;
end;
rule " roleA3 "
roleA[i].st = A3 & ch[3].empty = true & !roleA[i].commit
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons8(roleA[i].locNb,roleA[i].B,msg,msgNo);
   ch[3].empty := false;
   ch[3].msg := msg;
   ch[3].sender := roleA[i].A;
   ch[3].receiver := Intruder;
   roleA[i].st := A1;
   roleA[i].commit := true;
end;
endruleset;

ruleset i:roleBNums do
rule " roleB1 "
roleB[i].st = B1 & ch[1].empty = false & !roleB[i].commit
==>
var flag_pat5:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[1].msg;
   isPat5(msg, flag_pat5);
   if(flag_pat5) then
     destruct5(msg,roleB[i].locNa,roleB[i].locA,roleB[i].locB);
     if(matchNonce(roleB[i].locNa, roleB[i].Na) & matchAgent(roleB[i].locA, roleB[i].A) & matchAgent(roleB[i].locB, roleB[i].B))then
       roleB[i].st := B2;
     endif;
   endif;
   clear ch[1].msg;
   ch[1].empty:=true;
end;
rule " roleB2 "
roleB[i].st = B2 & ch[2].empty = true & !roleB[i].commit
==>
var msg:Message;
    msgNo:indexType;
begin
   clear msg;
   cons7(roleB[i].locNa,roleB[i].Nb,roleB[i].B,roleB[i].locA,msg,msgNo);
   ch[2].empty := false;
   ch[2].msg := msg;
   ch[2].sender := roleB[i].B;
   ch[2].receiver := Intruder;
   roleB[i].st := B3;
end;
rule " roleB3 "
roleB[i].st = B3 & ch[3].empty = false & !roleB[i].commit
==>
var flag_pat8:boolean;
    msg:Message;
    msgNo:indexType;
begin
   clear msg;
   msg := ch[3].msg;
   isPat8(msg, flag_pat8);
   if(flag_pat8) then
     destruct8(msg,roleB[i].locNb,roleB[i].locB);
     if(matchNonce(roleB[i].locNb, roleB[i].Nb) & matchAgent(roleB[i].locB, roleB[i].B))then
       roleB[i].st := B1;
     endif;
   endif;
   clear ch[3].msg;
   ch[3].empty:=true;
   roleB[i].commit := true;
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
        --- nonce: Na
        --- agent: A
        i := 1;
        while (i <= pat3Set.length) do
          deconcatPat3(msgs[pat3Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat3();
        --- pk(B)
        i := 1;
        while (i <= pat5Set.length) do
          aDecryptionPat5(msgs[pat5Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat5();
        i := 1;
        while (i <= pat6Set.length) do
          deconcatPat6(msgs[pat6Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat6();
        i := 1;
        while (i <= pat7Set.length) do
          aDecryptionPat7(msgs[pat7Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat7();
        i := 1;
        while (i <= pat8Set.length) do
          aDecryptionPat8(msgs[pat8Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat8();
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
      i, msgNo:indexType;
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
        --- nonce: Na
        --- agent: A
        i := 1;
        while (i <= pat3Set.length) do
          deconcatPat3(msgs[pat3Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat3();
        --- pk(B)
        i := 1;
        while (i <= pat5Set.length) do
          aDecryptionPat5(msgs[pat5Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat5();
        i := 1;
        while (i <= pat6Set.length) do
          deconcatPat6(msgs[pat6Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat6();
        i := 1;
        while (i <= pat7Set.length) do
          aDecryptionPat7(msgs[pat7Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat7();
        i := 1;
        while (i <= pat8Set.length) do
          aDecryptionPat8(msgs[pat8Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat8();
      endif;
      ch[2].empty := true;
      clear ch[2].msg;
    endif;
  end;

---rule of intruder to get msg from ch[3] 
rule "intruderGetMsgFromCh[3]" 
  ch[3].empty = false
  ==>
  var flag_pat8:boolean;
      i, msgNo:indexType;
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
        --- nonce: Na
        --- agent: A
        i := 1;
        while (i <= pat3Set.length) do
          deconcatPat3(msgs[pat3Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat3();
        --- pk(B)
        i := 1;
        while (i <= pat5Set.length) do
          aDecryptionPat5(msgs[pat5Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat5();
        i := 1;
        while (i <= pat6Set.length) do
          deconcatPat6(msgs[pat6Set.content[i]]);
          i := i+1;
        endwhile;
        enconcatPat6();
        i := 1;
        while (i <= pat7Set.length) do
          aDecryptionPat7(msgs[pat7Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat7();
        i := 1;
        while (i <= pat8Set.length) do
          aDecryptionPat8(msgs[pat8Set.content[i]]);
          i := i+1;
        endwhile;
        aEncryptionPat8();
      endif;
      ch[3].empty := true;
      clear ch[3].msg;
    endif;
  end;

---rule of intruder to emit msg into ch[1].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[1]"
      ch[1].empty=true & i <= pat5Set.length & pat5Set.content[i] != 0 &
      Spy_known[pat5Set.content[i]] & matchPat(msgs[pat5Set.content[i]], sPat5Set) &
      !emit[pat5Set.content[i]]
      ==>
      begin
        if (!emit[pat5Set.content[i]]) then  --- & msgs[msgs[pat5Set.content[i]].aencKey].k.ag=roleB[j].B
          clear ch[1];
          ch[1].msg:=msgs[pat5Set.content[i]];
          ch[1].sender:=Intruder;
          ch[1].receiver:=roleB[j].B;
          ch[1].empty:=false;
          emit[pat5Set.content[i]] := true;
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[2].
ruleset i: msgLen do
  ruleset j: roleANums do
    rule "intruderEmitMsgIntoCh[2]"
      ch[2].empty=true & i <= pat7Set.length & pat7Set.content[i] != 0 &
      Spy_known[pat7Set.content[i]] & matchPat(msgs[pat7Set.content[i]], sPat7Set) &
      !emit[pat7Set.content[i]]
      ==>
      begin
        if (!emit[pat7Set.content[i]]) then  --- & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=roleA[j].A
          clear ch[2];
          ch[2].msg:=msgs[pat7Set.content[i]];
          ch[2].sender:=Intruder;
          ch[2].receiver:=roleA[j].A;
          ch[2].empty:=false;
          emit[pat7Set.content[i]] := true;
        endif;
      end;
  endruleset;
endruleset;

---rule of intruder to emit msg into ch[3].
ruleset i: msgLen do
  ruleset j: roleBNums do
    rule "intruderEmitMsgIntoCh[3]"
      ch[3].empty=true & i <= pat8Set.length & pat8Set.content[i] != 0 &
      Spy_known[pat8Set.content[i]] & matchPat(msgs[pat8Set.content[i]], sPat8Set) &
      !emit[pat8Set.content[i]]
      ==>
      begin
        if (!emit[pat8Set.content[i]]) then  --- & msgs[msgs[pat8Set.content[i]].aencKey].k.ag=roleB[j].B
          clear ch[3];
          ch[3].msg:=msgs[pat8Set.content[i]];
          ch[3].sender:=Intruder;
          ch[3].receiver:=roleB[j].B;
          ch[3].empty:=false;
          emit[pat8Set.content[i]] := true;
        endif;
      end;
  endruleset;
endruleset;
startstate
  roleA[1].A := Alice;
  roleA[1].B := Bob;
  roleA[1].Na := Na;
  roleA[1].st := A1;
  roleA[1].commit := false;
  roleA[1].Nb := anyNonce;
  roleB[1].B := Bob;
  roleB[1].Nb := Nb;
  roleB[1].st := B1;
  roleB[1].commit := false;
  roleB[1].Na := anyNonce;
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
  for i : roleANums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleA[i].A;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat4Set.length := pat4Set.length + 1;
    pat4Set.content[pat4Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleBNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := key;
    msgs[msg_end].k.ag := roleB[i].B;
    msgs[msg_end].k.encType:=PK;
    msgs[msg_end].length := 1;
    pat4Set.length := pat4Set.length + 1;
    pat4Set.content[pat4Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;

  for i : roleANums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := agent;
    msgs[msg_end].ag := roleA[i].A;
    msgs[msg_end].length := 1;
    pat2Set.length := pat2Set.length + 1;
    pat2Set.content[pat2Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  for i : roleBNums do
    msg_end := msg_end+1;
    msgs[msg_end].msgType := agent;
    msgs[msg_end].ag := roleB[i].B;
    msgs[msg_end].length := 1;
    pat2Set.length := pat2Set.length + 1;
    pat2Set.content[pat2Set.length] :=msg_end;
    Spy_known[msg_end] := true;
  endfor;
  msg_end := msg_end + 1;
  msgs[msg_end].msgType := agent;
  msgs[msg_end].ag := Intruder;
  msgs[msg_end].length := 1;
  pat2Set.length := pat2Set.length + 1;
  pat2Set.content[pat2Set.length] := msg_end;
  Spy_known[msg_end] := true;
  msg_end := msg_end + 1;
  msgs[msg_end].msgType := key;
  msgs[msg_end].k.ag := Intruder;
  msgs[msg_end].k.encType := PK;
  msgs[msg_end].length := 1;
  pat4Set.length := pat4Set.length + 1;
  pat4Set.content[pat4Set.length] := msg_end;
  Spy_known[msg_end] := true;
  msg_end := msg_end + 1;
  msgs[msg_end].msgType := nonce;
  msgs[msg_end].noncePart := intruderNonce;
  msgs[msg_end].length := 1;
  pat1Set.length := pat1Set.length + 1;
  pat1Set.content[pat1Set.length] := msg_end;
  Spy_known[msg_end] := true;
  for i : roleBNums do
    constructSpat5(roleB[i].Na, roleB[i].A, roleB[i].B, gnum);
    constructSpat5(roleB[i].Na,Intruder,roleB[i].B, gnum);
  endfor;
  for i : roleANums do
    constructSpat7(roleA[i].Na, roleA[i].Nb, roleA[i].B, roleA[i].A, gnum);
    constructSpat7(roleA[i].Na,roleA[i].Nb,Intruder,roleA[i].A, gnum);
  endfor;
  for i : roleBNums do
    constructSpat8(roleB[i].Nb, roleB[i].B, gnum);
  endfor;

end;

invariant "secrecy"  forall i:indexType do
    forall j:roleBNums do
      forall k: roleANums do
        (msgs[i].msgType=nonce & msgs[i].noncePart = roleB[j].Nb &
         roleB[j].B != Intruder & roleB[j].A != Intruder &
         roleA[k].A != Intruder) ---& roleA[k].B != Intruder )
        ->
        Spy_known[i] = false
      endforall
    endforall
  endforall;

invariant "weakB"
  forall i: roleANums do
    roleA[i].commit = true 
    ->
    (exists j: roleBNums do
      ---roleB[j].commit = true &
      roleB[i].Na = roleA[j].Na
    endexists)
  endforall;
