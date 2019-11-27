--- [seq1] A->B (n1) : aenc{<nonce(Na).A>}pk(B);
--- [seq2] B->A (n2) : aenc{<nonce(Na).nonce(Nb)>}pk(A);
--- [seq3] A->B (n3) : aenc{nonce(Nb)}pk(B)

const
    aliceNum:1;  		--- number of initaitors (Alice/Intruder)
    bobNum:1;       	--- number of responders(Bob/Intruder)
   ---intruderNum:1;		--- number of intruders
    total_fact:20;  	--- the size of spy-known array.
    deductionsNum:20; 	--- the size of deduction array
    msgpassingNum:3;   	--- number of messages
    eventNum:30;     	--- the number of event 

type
  indexType:0..total_fact;
  aliceNums:1..aliceNum;    --scalarset (aliceNum);
  bobNums:1..bobNum;        --scalarset (bobNum);
---intruderNums:1..intruderNum;
  msgLen:1..total_fact;
  DeductionsNums:0..deductionsNum;
  msgpassingNums:1..msgpassingNum;
  eventNums:0..eventNum;

  AgentType: enum{Alice,Bob,intruderType};
  NonceType: enum{Na,Na1,Nb,Nb1};
  EncryptType: enum{PK,SK,SymK}; ---Public key, Secret key, Symmentric key

  KeyType: record
    encTyp: EncryptType;
    ag: AgentType;
  end;

  AliceStatus: enum{A1,A2,A3};
  BobStatus: enum{B1,B2,B3};
  IntruderStatus: enum{wait,gotmsg1,gotmsg2,gotmsg3,deducted1,deducted2,deducted3,emitted1,emitted2,emitted3}; 
  ---more than 4 states of intruders: it waits, it gets(3), it deducts(3),and it emits(3)

  MsgType: enum{null,agent,nonce,key,aenc,senc,concat,hash};
  Message: record
    msgType : MsgType;
    ag    	: AgentType;
    noncePart: NonceType;
    k	      : KeyType;
    aencMsg : indexType;
    aencKey	: indexType;
    sencMsg : indexType;
    sencKey	: indexType;
    concatPart1 : indexType;
    concatPart2 : indexType;
  end;

  DeduceType: enum{encryptDed, decrypt, enConcatDed, deConcatDed}; ---encryptDed:加密 decrypt:解密  enConcatDed:合成concat deConcatDed:拆分concat
  TDeduction: record	
    deduced :boolean;
    deduceKind: DeduceType;
    conclusion : indexType;
    assumption1: indexType;
    assumption2: indexType;
  end;

  Channel : record
    msg     : Message;
    sender  : AgentType;
    receiver: AgentType;
    empty   : boolean;
  end;

  RoleInit: record    ---发起者
    A   : AgentType;
    B   : AgentType;
    Na  : NonceType;
    st  : AliceStatus;
  end;

  RoleResp: record    ---接收者
    B   : AgentType;
    Nb  : NonceType;
    st  : BobStatus;
  end;

  RoleIntruder: record	---攻击者
	st: IntruderStatus;
  end;

  Event: record	        --- ???
    send 	: boolean;
    sender  : AgentType;
    receiver: AgentType;
    nonce	: NonceType;
  end;

  msgSet: record
    content: Array[msgLen] of indexType;
    length : msgLen;

var
  ch		      : Array[msgpassingNums] of Channel;
  alices 	    : Array[aliceNums] of RoleInit;
  bobs		    : Array[bobNums] of RoleResp;
  intruder    : RoleIntruder; 

  msgs		    : Array[indexType] of Message;
  pat1Set     : msgSet;   ---Pat1: Na
  pat2Set     : msgSet;   ---Pat2: A
  pat3Set     : msgSet;   ---Pat3: {Na,A} 
  pat4Set     : msgSet;   ---Pat4: Pk(B)
  pat5Set     : msgSet;   ---Pat5: {Na,A}Pk(B)
  pat6Set     : msgSet;   ---Pat6: {Na,Nb}
  pat7Set     : msgSet;   ---Pat7: {Na,Nb}Pk(A)
  pat8Set     : msgSet;   ---Pat8: {Nb}Pk(B)

  msg_end       : indexType;
  ded_end       : DeductionsNums;
  eve_end       : eventNums;
  msg1          : Message;
---  de1           : TDeduction;
  Spy_known     : Array[indexType] of boolean;
  emit          : Array[indexType] of boolean;
---  KEY           : KeyType;
  msg           : Message;   ---
  msgNo         : indexType; --- for intruder gets msg 
  eve           : Event;
  endn          : indexType;
  end1          : indexType;
  end2          : indexType;
  Deductions    : Array[DeductionsNums] of TDeduction;
  allMsgs       : array[msgLen] of indexType;
---  systemEvent   : array[eventNums] of Event;

--- Pat1 Na
procedure lookAddPat1( Na:NonceType; Var msg:Message; Var num: indexType);  
 Var index : indexType;
 begin
  index:=0;
  for i: msgLen do  --- lookup(msg)
    if (msgs[i].msgType=nonce) then 
      if (msgs[i].noncePart=msg.noncePart ) then   --- why not (msgs[i].noncePart = Na )?
      	index:=i;	
      endif;
    endif;
  endfor;

  if (index=0) then  --- lookAdd(msg)
    msg_end := msg_end + 1 ; 
    index:=msg_end;  
    msgs[index].msgType := nonce; 
    msgs[index].noncePart:=Na; 
  endif;
  num:=index;	  
  msg := msgs[index];
end;

---Pat2: A
procedure lookAddPat2( A:AgentType; Var msg:Message; Var num: indexType); 
Var index: indexType;
begin 
	index := 0;
	for i: msgLen do
		if (msgs[i].msgType = agent) then
			if (msgs[i].ag = A) then
				index := i;
			endif;
		endif;
	endfor;

	if (index = 0) then
		msg_end := msg_end + 1;
		index := msg_end;
		msgs[index].msgType := agent;
		msgs[index].ag := A;
	endif;
	num := index;
  msg := msgs[index];
end;
 
---Pat3: {Na,A}
procedure lookAddPat3( Na:NonceType; A:AgentType; Var msg:Message; Var num: indexType); 
Var index,i1,i2 : indexType;
    msg1, msg2 : Message;  
begin
  index:=0;
  lookAddPat1(Na,msg1,i1);
  lookAddPat2(A,msg2,i2);
  for i: msgLen do  
    if (msgs[i].msgType = concat) then 
        if (msgs[i].concatPart1 =i1 & msgs[i].concatPart2=i2) then 
       		index:=i;
	      endif;   
    endif;
  endfor;
  if (index=0) then 
    msg_end:=msg_end +1 ; 
    index:=msg_end; 
    msgs[index].msgType := concat; 
    msgs[index].concatPart1:=i1; 
    msgs[index].concatPart2:=i2;
  endif;
  num:=index;
  msg := msgs[index];
end;

---Pat4: Pk(B) Key(Pk,B)
procedure lookAddPat4(B: AgentType; Var msg:Message; var num: indexType);
var index:indexType;
begin
  index := 0;
  for i: msgLen do
		if (msgs[i].msgType = key) then
			if (msgs[i].k.encTyp = PK & msgs[i].k.ag = B) then
				index := i;
			endif;
		endif;
	endfor;

  if (index = 0) then
    msg_end := msg_end+1;
    index := msg_end;
    msgs[index].msgType := key;
    msgs[index].k.encTyp := PK;
    msgs[index].k.ag := B;
  endif;
  num := index;
  msg := msgs[index];
end;

--- Pat5: {Na,A}Pk(B):  aenc(concat(Na,A),pk(B))
procedure lookAddPat5(Na: NonceType; A: AgentType; B:AgentType; Var msg:Message; Var num : indexType);
Var msg1, msg2 : Message;
    index, i1, i2: indexType;
begin
  index := 0;
  lookAddPat3(Na, A, msg1, i1);
  lookAddPat4(B,msg2,i2);
  for i : msgLen do
    if (msgs[i].msgType = aenc) then
      if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
        index := i;
      endif;
    endif;
  endfor;

  if (index = 0) then
    msg_end := msg_end+1;
    index := msg_end;
    msgs[index].msgType := aenc;
    msgs[index].aencMsg := i1;
    msgs[index].aencKey := i2;
  endif;
  num := index;
  msg := msgs[index];
end;

--- Pat6: {Na, Nb} concat(Na,Nb)
procedure lookAddPat6(Na: NonceType; Nb: NonceType; Var msg: Message; Var num: indexType);
Var msg1, msg2: Message;
    index, i1, i2 : indexType;
begin
  index := 0;
  lookAddPat1(Na,msg1,i1);
  lookAddPat1(Nb,msg2,i2);
  for i : msgLen do
    if (msgs[i].msgType = concat) then
      if (msgs[i].concatPart1 = i1 & msgs[i].concatPart2 = i2) then
        index := i;
      endif;
    endif;
  endfor;
  
  if (index = 0) then
    msg_end := msg_end+1;
    index := msg_end;
    msgs[index].msgType := concat;
    msgs[index].concatPart1 := i1;
    msgs[index].concatPart2 := i2;
  endif;
  num := index;
  msg := msgs[index];
end;

--- Pat7: {Na,Nb}Pk(A) aenc({Na, Nb},Pk(A))
procedure lookAddPat7(Na: NonceType; Nb: NonceType; A:AgentType; Var msg:Message; Var num : indexType);
Var msg1, msg2 : Message;
    index, i1, i2: indexType;
begin
  index := 0;
  lookAddPat6(Na, Nb, msg1, i1);
  lookAddPat4(A,msg2,i2);
  for i : msgLen do
    if (msgs[i].msgType = aenc) then
      if (msgs[i].aencMsg = i1 & msgs[i].aencKey = i2) then
        index := i;
      endif;
    endif;
  endfor;

  if (index = 0) then
    msg_end := msg_end+1;
    index := msg_end;
    msgs[index].msgType := aenc;
    msgs[index].aencMsg := i1;
    msgs[index].aencKey := i2;
  endif;
  num := index;
  msg := msgs[index];
end;

---Pat:8 {Nb}Pk(B) aenc({Nb},pk(B))
procedure lookAddPat8(Nb: NonceType; B: AgentType; Var msg:Message; Var num: indexType);
Var msg1, msg2: Message;
    index, i1, i2: indexType;
begin
  index := 0;
  lookAddPat1(Nb,msg1,i1);
  lookAddPat4(B,msg2,i2);
  for i:msgLen do
    if (msgs[i].msgType=aenc) then
      if (msgs[i].aencMsg = i1 & msgs[i].aencKey=i2) then
        index := i;
      endif;
    endif;
  endfor;

  if (index = 0) then
    msg_end := msg_end + 1;
    index := msg_end;
    msgs[index].msgType := aenc;
    msgs[index].aencMsg := i1;
    msgs[index].aencKey := i2;
  endif;
  num := index;
  msg := msgs[index];
end;

--- decide whether msg is of a certain form:
--- Na,A,{Na,A},PK(B),{Na,A}pk(B),{Na,Nb},{Na,Nb}pk(A),{Nb}pk(B)
--- is form {Na},flag=true means yes
procedure isPat1(msg:Message;Var flag:boolean);
var flag1:boolean;
begin
    flag1:=false;
    if(msg.msgType=nonce) then
        flag1:=true;
    endif;
    flag := flag1;
end;

--- is form {A},flag=true means yes
procedure isPat2(msg:Message;Var flag:boolean);
var flag1:boolean;
begin
    flag1:=false;
    if(msg.msgType=agent) then
        flag1:=true;
    endif;
    flag := flag1;
end;

--- is form {Na,A},flag=true means yes
procedure isPat3(msg:Message;Var flag:boolean);
var flag1:boolean;
begin
    flag1:=false;
    if(msg.msgType=concat) then
        if (msgs[msg.concatPart1].msgType=nonce & msgs[msg.concatPart2].msgType=agent ) then
            flag1:=true;
        endif;
    endif;
    flag := flag1;
end;

--- is form Pk(B),flag=true means yes
procedure isPat4(msg:Message;Var flag:boolean);
var flag1:boolean;
begin
    flag1:=false;
    if(msg.msgType=key) then
        if ( msg.k.encTyp=PK) then
            flag1:=true;
        endif;
    endif;
    flag := flag1;
end;

--- is form {Na,A}pk(B),flag=true means yes
procedure isPat5(msg:Message;Var flag:boolean);
var flag1,flag_part1,flag_part2:boolean;
begin
    flag1:=false;
    flag_part1:=false;
    flag_part2:=false;
    if(msg.msgType=aenc) then
        isPat3(msgs[msg.aencMsg],flag_part1); ---pat3: {Na,A}
        isPat4(msgs[msg.aencKey],flag_part2); ---pat4: PK(B)
        if (flag_part1 & flag_part2) then
            flag1:=true;
        endif;
    endif;
    flag := flag1;
end;

--- is form {Na,Nb},flag=true means yes
procedure isPat6(msg:Message;Var flag:boolean);
var flag1:boolean;
begin
    flag1:=false;
    if(msg.msgType=concat) then
        if (msgs[msg.concatPart1].msgType=nonce & msgs[msg.concatPart2].msgType=nonce) then
            flag1:=true;
        endif;
    endif;
    flag := flag1;
end;

--- is form {Na,Nb}PK(A),flag=true means yes
procedure isPat7(msg:Message;Var flag:boolean);
var flag1,flag_part1,flag_part2:boolean;
begin
    flag1:=false;
    flag_part1:=false;
    flag_part2:=false;
    if(msg.msgType=aenc) then
        isPat6(msgs[msg.aencMsg],flag_part1);  ---pat6: {Na,Nb}
        isPat4(msgs[msg.aencKey],flag_part2);  ---pat4: Pk(A)
        if (flag_part1 & flag_part2) then
            flag1:=true;
        endif;
    endif;
    flag := flag1;
end;

--- is form {Nb}PK(B),flag=true means yes
procedure isPat8(msg:Message;Var flag:boolean);
var flag1,flag_part1,flag_part2:boolean;
begin
    flag1:=false;
    flag_part1:=false;
    flag_part2:=false;
    if(msg.msgType=aenc) then
        isPat1(msgs[msg.aencMsg],flag_part1);  --- pat1:{Na}
        isPat4(msgs[msg.aencKey],flag_part2);  --- Pat4:PK(B)
        if (flag_part1 & flag_part2) then
            flag1:=true;
        endif;
    endif;
    flag := flag1;
end;

--- procedure construct msg
procedure cons1(Na:NonceType; A:AgentType; B: AgentType; Var msg:Message; Var num:indexType);
begin
  clear msg;
  lookAddPat5(Na, A, B, msg, num);
end;

procedure cons2(Na:NonceType; Nb:NonceType; A:AgentType; Var msg:Message; Var num: indexType);
begin
  clear msg;
  lookAddPat7(Na, Nb, A,msg,num);
end;

procedure cons3(Nb:NonceType; B:AgentType; Var msg:Message; Var num: indexType);
begin
  clear msg;
  lookAddPat8(Nb,B,msg,num);
end;

--- procedure destruct msg
procedure destruct1(msg:Message; Var Na:NonceType; Var A: AgentType; Var B: AgentType);
  var k1:KeyType;
      msg1,msgNum1,msgNum2:Message;
  begin
    clear msg1;
    clear k1;
    k1:=msgs[msg.aencKey].k;
    B:=k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart1];
    msgNum2:=msgs[msg1.concatPart2];
    Na:=msgNum1.noncePart;
    A:=msgNum2.ag;
  end;

procedure destruct2(msg:Message; Var Na:NonceType; Var Nb:NonceType; Var A:AgentType);
  var k1:KeyType;
      msgNum1,msgNum2:Message;
  begin
    clear msg1;
    k1:=msgs[msg.aencKey].k;
    A:=k1.ag;
    msg1:=msgs[msg.aencMsg];
    msgNum1:=msgs[msg1.concatPart1];
    msgNum2:=msgs[msg1.concatPart2]; 
    Na:=msgNum1.noncePart;
    Nb:=msgNum2.noncePart;
  end;

procedure destruct3(msg:Message; Var Nb:NonceType; Var B:AgentType);
  var k1:KeyType;
  begin
    clear msg1;
    k1:=msgs[msg.aencKey].k;
    B:=k1.ag;
    msg1:=msgs[msg.aencMsg];
    Nb:=msg1.noncePart;
  end;

--- rule for Alice
ruleset i:aliceNums do
  rule "roleA1"
    alices[i].st = A1 & ch[1].empty = true 
    ==>
    var msg: Message;
        msgNo:indexType;
    begin
      clear msg;
      cons1(alices[i].Na,alices[i].A,alices[i].B, msg, msgNo);
      ch[1].empty := false;
      ch[1].msg := msg;
      ch[1].sender := alices[i].A;
      ch[1].receiver := intruderType;
      alices[i].st := A2;
      put "1. A -> I\n";
      put ch[1].msg;
    end;

  rule "roleA2"
    alices[i].st=A2 & ch[2].empty=false & intruder.st=emitted2 & ch[2].receiver=alices[i].A 
    ==>
    Var loc_A,loc_B: AgentType;
        loc_Na, loc_Nb: NonceType;
        msgNo: indexType;
    begin
      clear msg;
      msg:=ch[2].msg;
      destruct2(msg,loc_Na,loc_Nb,loc_A);
      if (loc_A=alices[i].A & loc_Na=alices[i].Na) then
        ch[2].empty := true;
        cons3(loc_Nb, alices[i].B, msg,msgNo);
        ch[3].msg := msg;
        alices[i].st := A3;
        ch[3].receiver := intruderType;
        ch[3].sender := alices[i].A;
        ch[3].empty := false;
        put "3. A -> I\n";
        put ch[3].msg;
      endif;
    end;

  rule "roleA3"
    alices[i].st = A3  
    ==>
    alices[i].st := A1;
  end;
end;

--- rules for bob 
ruleset i:bobNums do 
  rule "roleB1"
    bobs[i].st = B1 & ch[1].empty = false & intruder.st=emitted1 & ch[1].receiver=bobs[i].B 
    ==>
    Var loc_A,loc_B:AgentType;
        loc_Na:NonceType;
        msgNo:indexType;
    begin
      clear msg;
      msg:=ch[1].msg;       --- receive message
      destruct1(msg,loc_Na,loc_A,loc_B);
      if (loc_B=bobs[i].B ) then
        ch[1].empty := true;
        cons2(loc_Na, bobs[i].Nb, loc_A, msg, msgNo);
        ch[2].msg := msg;   --- send message 
        ch[2].empty := false;
        bobs[i].st := B2;
        ch[2].receiver:=intruderType;
        ch[2].sender := bobs[i].B;
        put "2. B -> I\n";
        put ch[2].msg;
      endif;
    end;

  rule "roleB2"
    bobs[i].st = B2 & ch[3].empty = false & intruder.st = emitted3 & ch[3].receiver=bobs[i].B 
    ==>
    Var loc_B:AgentType;
        loc_Nb:NonceType;
    begin
      clear msg;
      msg:=ch[3].msg;
      destruct3(msg,loc_Nb,loc_B);
      if (loc_B = bobs[i].B & loc_Nb=bobs[i].Nb) then
        bobs[i].st := B3;
        put "\nend\n";
        put msg;
      endif;
    end;

  rule "roleB3"
    bobs[i].st=B3
    ==>
    bobs[i].st := B1;
  end;
end;

--- rules for intruder
rule "intruderGetMsg1"
  intruder.st = wait & ch[1].empty = false & ch[1].receiver = intruderType
  ==>
  Var flag_pat5:boolean
  ---Var msgNo:indexType;
  begin
    clear msg;
    clear msgNo;
    msg := ch[1].msg;
    get_mesNo(msg, msgNo);
    isPat5(msg,flag_pat5);  ---pat5: {Na,A}Pk(B)
    if (flag_pat5) then     ---put this msg into pat5Set
      pat5Set.length:=pat5Set.length+1;
      pat5Set.content[pat5Set.length] := msgNo; 
    endif;
    ch[1].empty := true;
    intruder.st := gotmsg1;  ---the state of intruder
  end;

  rule "intruderGetMsg2"
    intruder.st = emitted1 & ch[2].empty=false & ch[2].receiver=intruderType
    ==>
    Var flag_Pat7:boolean;
    begin
        clear msg;
        clear msgNo;
        msg:=ch[2].msg;
        get_msgNo(msg, msgNo);
        isPat7(msg,flag_Pat7); ---pat7:{Na,Nb}pk(A)
        if (flag_Pat7) then    ---put this msg into pat7Set
          pat7Set.length:=pat7Set.length+1;
          pat7Set.content[pat7Set.length] := msgNo;
        endif;
        ch[2].empty := true;
        intruder.st:=gotmsg2;
    end;

  rule "intruderGetMsg3"
    intruder.st = emitted2 & ch[2].empty=false & ch[2].receiver=intruderType
    ==>
    begin
        --- some operations...
        intruder.st:=gotmsg3;
    end;

--- intruder deducting msgs
  rule "intruderDeduct1"
    intruder.st=gotmsg1 
    ==>
    begin
        --- some operations...
        intruder.st := deducted1; 
    end;

  rule "intruderDeduct2"
    intruder.st=gotmsg2
    ==>
    begin
        ---some operations...
        intruder.st := deducted3;
    end;

  rule "intruderDeduct3"
    intruder.st=gotmsg3
    ==>
    begin
        ---some operations...
        intruder.st:=deducted3;
    end;

--- intruder emit msg 1
ruleset i: msgLen do
  ruleset j: bobNums do
    rule "intruderEmitMsg1" 
    	intruder.st=deducted1 & ch[1].empty=true & allMsgs[i]>0
    	==>
        begin 
        if (Spy_known[allMsgs[i]] & emit[allMsgs[i]]=false) then
          clear ch[1].msg;
          ch[1].empty:=false;
          ch[1].msg:=msgs[allMsgs[i]];
          ch[1].sender:=intruderType;
          ch[1].receiver:=bobs[j].B;
          emit[allMsgs[i]]:=true;
          intruder.st:=emitted1;
          put "   1'I->B\n";
          put ch[1].msg;
        endif;
        end;
    end;
  end;

--- intruder emit msg 2
ruleset i:msgLen do
  ruleset j:aliceNums do
    rule "intruderEmitMsg2" 
    	intruder.st=deducted2 & ch[1].empty=true & allMsgs[i]>0
    	==>
        begin 
        if (Spy_known[allMsgs[i]] & emit[allMsgs[i]]=false) then
          clear ch[1].msg;
          ch[1].empty:=false;
          ch[1].msg:=msgs[allMsgs[i]];
          ch[1].sender:=intruderType;
          ch[1].receiver:=bobs[j].B;
          emit[allMsgs[i]]:=true;
          intruder.st:=emitted2;
          put "   1'I->B\n";
          put ch[1].msg;
        endif;
      end;
    end;
  end;

ruleset i: msgLen do
  ruleset j: bobNums do
    rule "intruderEmitMsg3" 
    	intruder.st=deducted3 & ch[3].empty=true & allMsgs[i]>0
    	==>
      begin
        if (Spy_known[allMsgs[i]] & emit[allMsgs[i]]=false)  then	
          clear ch[3];
          ch[3].empty:=false;
          ch[3].msg:=msgs[allMsgs[i]];
          ch[3].sender:=intruderType;
          ch[3].receiver:=bobs[j].B;
          emit[allMsgs[i]]:=true;
          intruder.st:=emitted3;
          put "   3'I->B\n";
          put ch[3].msg;
        endif;
      end;
    end;
  end;

startstate
  for i:aliceNums do
	alices[i].st := A1;
	alices[i].B := intruderType;
  endfor;
  alices[1].Na := Na;
  alices[1].A := Alice;

  for i:bobNums do
    bobs[i].st:=B1;
  endfor;
  bobs[1].B := Bob;
  bobs[1].Nb := Nb;

end;

