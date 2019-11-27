--- [seq1] A->B (n1) : aenc{<nonce(Na).A>}pk(B);
--- [seq2] B->A (n2) : aenc{<nonce(Na).nonce(Nb)>}pk(A);
--- [seq3] A->B (n3) : aenc{nonce(Nb)}pk(B)

const
aliceNum:1;  		--- number of initaitors (Alice/Intruder)
bobNum:1;       	--- number of responders(Bob/Intruder)
-- intruderNum:1;		--- number of intruders
total_fact:200;  	--- the size of spy-known array.
deductionsNum:400; 	--- the size of deduction array
msgpassingNum:3;   	--- number of messages
eventNum:50;     	--- the size of event numbers(msg numbers?)

type
  indexType:0..total_fact;
  aliceNums:1..aliceNum; --scalarset (aliceNum);
  bobNums:1..bobNum; --scalarset (bobNum);
  msgLen:1..total_fact;
  DeductionsNums:1..deductionsNum;
  msgpassingNums:1..msgpassingNum;
  eventNums:1..eventNum;

  AgentType: enum{Alice,Bob,indexTyperuder_};
  NonceType: enum{Na,Na1,Nb,Nb1};
  EncryptType: enum{PK,SK,SymK}; ---Public key, Secret key, Symmentric key
  
  KeyType: record
    encTyp: EncryptType;
    ag: AgentType;
  end;

  AliceStatus: enum{A1,A2,A3};
  BobStatus: enum{B1,B2,B3};
  indexTyperuderStatus: enum{waiting,getmsg1,getmsg2,getmsg3,emitting1,emitting2,emitting3};

  MsgType: enum{null,agent,nonce,key,aenc,senc,concat,hash};

  Message: record
    msgType : MsgType;
    ag	: AgentType;
    noncePart: NonceType;
    k	: KeyType;
    aencMsg : indexType;
    aencKey	: indexType;
    sencMsg : indexType;
    sencKey	: indexType;
    concatPart1 : indexType;
    concatPart2 : indexType;
    ---concatPart3 : indexType;
  end;

  DeduceType: enum{encryptDed, decrypt, enpairDed, depairDed};
  TDeduction: record	
    deduced :boolean;
    deduceKind: DeduceType;
    conclusion : msgLen;
    assumption1: msgLen;
    assumption2: msgLen;
  end;

  Channel : record
    msg     : Message;
    sender  : AgentType;
    receiver: AgentType;
    empty   : boolean;
  end;

  RoleInit: record   
    A   : AgentType;
    B   : AgentType;
    Na  : NonceType;
    st  : AliceStatus;
  end;

  RoleResp: record   
    B   : AgentType;
    Nb  : NonceType;
    st  : BobStatus;
  end;

  RoleindexTyperuder: record	
	  st: indexTyperuderStatus;
  end;

  Event: record	
    send 	: boolean;
    sender  : AgentType;
    receiver: AgentType;
    nonce	: NonceType;
  end;

var
  ch		: Array[msgpassingNums] of Channel;
  alices 	: Array[aliceNums] of RoleInit;
  bobs		: Array[bobNums] of RoleResp;
  indexTyperuder: RoleindexTyperuder; 
  msgs		: Array[indexType] of Message;
  msg_end        : indexType;
  ded_end        : 0..deductionsNum;
  eve_end        : 0..eventNum;
  msg1           : Message;
  de1            : TDeduction;
  Spy_known      : Array[msgLen] of boolean;
  emit           : Array[msgLen] of boolean;
  KEY            : KeyType;
  msg            : Message;
  eve            : Event;
  endn           : indexType;
  end1           : indexType;
  end2           : indexType;
  Deductions     : Array[DeductionsNums] of TDeduction;
  allMsgs        : array[msgLen] of indexType;
  allMsg1s       : array[msgLen] of indexType;
  allMsg2s       : array[msgLen] of indexType;
  allMsg3s       : array[msgLen] of indexType;
  allMsg4s       : array[msgLen] of indexType;
  allMsgnum1     : indexType;
  allMsgnum2     : indexType;
  allMsgnum3     : indexType;
  systemEvent    : array[eventNums] of Event;

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

--- get_mes. what is this procedure for?
---procedure get_mes (msg:Message;var n1:indexType);
---var m1,m2:Message;
---begin
--- lookAdd(msg,n1);
---	replace(msg);
---	for i:msgLen do
---     	  addded(msgs[allMsgs[i]]);
---    	endfor;
---end;

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
      ch[1].receiver := indexTyperuder_;
      alices[i].st := A2;
      put "1. A -> I\n";
      put ch[1].msg;
    end;

  rule "roleA2"
    alices[i].st=A2 & ch[2].empty=false & indexTyperuder.st=emitting2 & ch[2].receiver=alices[i].A 
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
        ch[3].receiver := indexTyperuder_;
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
    bobs[i].st = B1 & ch[1].empty = false & indexTyperuder.st=emitting1 & ch[1].receiver=bobs[i].B 
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
        ch[2].receiver:=indexTyperuder_;
        ch[2].sender := bobs[i].B;
        put "2. B -> I\n";
        put ch[2].msg;
      endif;
    end;

  rule "roleB2"
    bobs[i].st = B2 & ch[3].empty = false & indexTyperuder.st = emitting3 & ch[3].receiver=bobs[i].B 
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
rule "indexTyperuderGetMsg1"
  indexTyperuder.st = waiting & ch[1].empty = false & ch[1].receiver = indexTyperuder_
  ==>
  Var msgNo:indexType;
  begin
  ---  get_mes(ch[1].msg, msgNo);
    ch[1].empty := true;
    indexTyperuder.st := getmsg1;
  ---  if (!Spy_known[msgNo]) then
    ---  addKnowledge(msgNo);
  ---  endif;
  end;

rule "indexTyperuderGetMsg2"
	indexTyperuder.st=emitting1 & ch[2].empty=false & ch[2].receiver = indexTyperuder_
	==>
	var msgNo:indexType;
	begin
	---	get_mes(ch[2].msg,msgNo);
		ch[2].empty := true;
		indexTyperuder.st := getmsg2;
		if (!Spy_known[msgNo]) then
		---  addKnowledge(msgNo);
		endif;
	end;

rule "indexTyperuderGetMsg3"
	indexTyperuder.st=emitting2 & ch[3].empty =false & ch[3].receiver=indexTyperuder_
	==>
	var msgNo:indexType;
	begin
	---	get_mes(ch[3].msg,msgNo);
		ch[3].empty := true;
		indexTyperuder.st := getmsg3;
		if (!Spy_known[msgNo]) then
		---  addKnowledge(msgNo) ;
		endif;
	end;

ruleset i: msgLen do
  ruleset j: bobNums do
    rule "indexTyperuderEmittingMsg1" 
    	indexTyperuder.st=getmsg1 & ch[1].empty=true & allMsgs[i]>0
    	==>
      begin 
        if (Spy_known[allMsgs[i]] & emit[allMsgs[i]]=false) then
          clear ch[1].msg;
          ch[1].empty:=false;
          ch[1].msg:=msgs[allMsgs[i]];
          ch[1].sender:=indexTyperuder_;
          ch[1].receiver:=bobs[j].B;
          emit[allMsgs[i]]:=true;
          indexTyperuder.st:=emitting1;
          put "   1'I->B\n";
          put ch[1].msg;
        endif;
      end;
    end;
  end;

ruleset i:msgLen do
  ruleset j:aliceNums do
    rule "indexTyperuderEmittingMsg2" 
    	indexTyperuder.st=getmsg1 & ch[1].empty=true & allMsgs[i]>0
    	==>
      begin 
        if (Spy_known[allMsgs[i]] & emit[allMsgs[i]]=false) then
          clear ch[1].msg;
          ch[1].empty:=false;
          ch[1].msg:=msgs[allMsgs[i]];
          ch[1].sender:=indexTyperuder_;
          ch[1].receiver:=bobs[j].B;
          emit[allMsgs[i]]:=true;
          indexTyperuder.st:=emitting1;
          put "   1'I->B\n";
          put ch[1].msg;
        endif;
      end;
    end;
  end;

ruleset i: msgLen do
  ruleset j: bobNums do
    rule "indexTyperuderEmittingMsg3" 
    	indexTyperuder.st=getmsg3 & ch[3].empty=true & allMsgs[i]>0
    	==>
      begin
        if (Spy_known[allMsgs[i]] & emit[allMsgs[i]]=false)  then	
          clear ch[3];
          ch[3].empty:=false;
          ch[3].msg:=msgs[allMsgs[i]];
          ch[3].sender:=indexTyperuder_;
          ch[3].receiver:=bobs[j].B;
          emit[allMsgs[i]]:=true;
          indexTyperuder.st:=emitting3;
          put "   3'I->B\n";
          put ch[3].msg;
        endif;
      end;
    end;
  end;

startstate
  for i:aliceNums do
		alices[i].st := A1;
		alices[i].B := indexTyperuder_;
	endfor;
  alices[1].Na := Na;
  alices[1].A := Alice;

  for i:bobNums do
    bobs[i].st:=B1;
  endfor;
  bobs[1].B := Bob;
  bobs[1].Nb := Nb;

  indexTyperuder.st := waiting;
  for i:msgLen do 
    Spy_known[i]:=false;
  endfor;

  for i : msgLen do
    emit[i]:=false;
  endfor;

  for i:msgLen do   --- initailization of Array msgs[msgLen] and allMsgs[msgLen]
    msgs[i].msgType := null;
    allMsgs[i] := 0;
  endfor;

  msg_end := 0;

--- init states for channels
  for i: msgpassingNums do 
    clear ch[i];
    ch[i].empty := true;
  endfor;

  clear systemEvent;
  for i:eventNums do
    systemEvent[i].send := false;
  endfor;
  eve_end:=0;

end;



