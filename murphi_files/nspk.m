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
  msgs		: Array[indexType] of Message;   ---all facts
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

procedure findeve(S:AgentType; R:AgentType; N:NonceType); ---S:sender; R: receiver
begin
	for i:eventNums do
	  if systemEvent[i].send = false then
		if (systemEvent[i].sender=S &
		    systemEvent[i].receiver=R &
		    systemEvent[i].nonce=N) then
		    systemEvent[i].send := true;
		else
		    eve_end := eve_end+1; 
		    systemEvent[eve_end].sender := S;
		    systemEvent[eve_end].receiver:=R;
		    systemEvent[eve_end].nonce := N;
		    systemEvent[eve_end].send := true;
		endif;
	  endif;
	end;
end;

procedure lookup(msg:Message;var index:indexType);
begin
	index := 0;
	for i:msgLen do
	  if (msgs[i].msgType=msg.msgType) then
	     if (msgs[i].msgType=agent) then
		if (msgs[i].ag=msg.ag ) then 
			index:=i;
		 endif;
	     elsif (msgs[i].msgType=nonce) then
		if (msgs[i].noncePart=msg.noncePart) then
			index:=i;
		endif;
	     elsif (msgs[i].msgType=key) then
		if (msgs[i].k.encTyp=msg.k.encTyp & msgs[i].k.ag=msg.k.ag) then
			index:=i;
		endif;
	     elsif (msgs[i].msgType=aenc) then
		if (msgs[i].aencMsg=msg.aencMsg & msgs[i].aencKey=msg.aencKey) then
			index:=i;
		endif;
	     elsif (msgs[i].msgType=senc) then
		if (msgs[i].sencMsg=msg.sencMsg & msgs[i].sencKey=msg.sencKey) then
			index:=i;
		endif;
	     elsif (msgs[i].msgType=concat) then
		if (msgs[i].concatPart1=msg.concatPart1 & msgs[i].concatPart2=msg.concatPart2) then
			index:=i;
		endif;
	     endif;
	  endif;
	end;
end;

procedure lookAdd(msg:Message;var index:indexType);
begin
	lookup(msg,index);
	if (index=0) then
		msg_end:=msg_end+1;
		msgs[msg_end]:=msg;
		index:=msg_end;
	endif;
end;

procedure replace(msg:Message);  --- what's the procedure replace meaning?
var n1:indexType;
    msg0,msg1,msg2:Message;
begin
	endn:=0;
	for i:msgLen do
	    allMsgs[i]:= 0;
	endfor;
 	if (msg.msgType=agent) then
  	   for i:msgLen do
		if (msgs[i].msgType=agent) then
			endn:=endn+1;
			allMsgs[endn]:=i;
		endif;
	   endfor;
 	elsif (msg.msgType=nonce) then
   	   for i:msgLen do
	  	if (msgs[i].msgType=nonce) then
	      		endn:=endn+1;
		  	allMsgs[endn]:=i;
	  	endif;
	   endfor;
	elsif (msg.msgType=key) then
    	   for i:msgLen do
	  	if (msgs[i].msgType=key) then
	      		endn:=endn+1;
		  	allMsgs[endn]:=i;
	  	endif;
	   endfor;
 	elsif (msg.msgType=aenc) then
    	   msg1:=msgs[msg.aencKey];
	   msg2:=msgs[msg.aencMsg];
	   replace(msg1);
	   end1:=endn;
	   for i:msgLen do
	  	allMsg1s[i]:= allMsgs[i];
    	   endfor;
	   replace(msg2);
	   end2:=endn;
	   for i:msgLen do
	  	allMsg2s[i]:= allMsgs[i];
    	   endfor;
	   endn:=0;
	   for i:msgLen do
      		allMsgs[i]:= 0;
    	   endfor;
	   for i:msgLen do
	  	for j:msgLen do
	   		if (i<(end1+1)&j<(end2+1)) then
	    			msg0.msgType:=aenc;
				msg0.aencKey:=allMsg1s[i];
				msg0.aencMsg:=allMsg2s[j];
				lookAdd(msg0,n1);
				endn:=endn+1;
				allMsgs[endn]:=n1;
			endif;
	  	endfor;
	   endfor;
 	elsif (msg.msgType=concat) then
    	   msg1:=msgs[msg.concatPart1];
	   msg2:=msgs[msg.concatPart2];
	   replace(msg1);
	   end1:=endn;
	   for i:msgLen do
	  	allMsg3s[i]:= allMsgs[i];
    	   endfor;
	   replace(msg2);
	   end2:=endn;
	   for i:msgLen do
	  	allMsg4s[i]:= allMsgs[i];
    	   endfor;
	   endn:=0;
	   for i:msgLen do
      		allMsgs[i]:= 0;
    	   endfor;
	   for i:msgLen do
	   	for j:msgLen do
	   		if (i<(end1+1)&j<(end2+1)) then
	    			msg0.msgType:=concat;
				msg0.concatPart1:=allMsg3s[i];
				msg0.concatPart2:=allMsg4s[j];
				lookAdd(msg0,n1);
				endn:=endn+1;
				allMsgs[endn]:=n1;
	   		endif;
	  	endfor;
	   endfor;
 	endif;
end;

procedure inverse (msgK:Message;var msgk:Message);  --- Get the inverse key(msgk) of key(msgK)!
begin
   if (msgK.msgType=key) then
      	  msgk.msgType:=msgK.msgType;
	  msgk.k.ag:=msgK.k.ag;
	  msgk.k.encTyp:=msgK.k.encTyp;
      if (msgK.k.encTyp=PK) then
	      msgk.k.encTyp:=SK;
	  elsif (msgK.k.encTyp=SK) then
	      msgk.k.encTyp:=PK;	  
	  endif
  endif
end;

procedure findded (ded:TDeduction;var find:boolean); -- ???
begin
   find:=false;
   for i:DeductionsNums do
	   if (Deductions[i].deduceKind=ded.deduceKind&
	       Deductions[i].conclusion=ded.conclusion&
	       Deductions[i].assumption1=ded.assumption1&
		   Deductions[i].assumption2=ded.assumption2) then
		   find:=true;
	   endif;
   endfor;
end;

procedure addded (msg:Message); --??
var  m1,m2,n1,n2:indexType;
     msg0,msg1,msg2:Message;
     find1:boolean;
begin
 if (msg.msgType=aenc) then
    	msg1:=msgs[msg.aencKey];
	inverse(msg1,msg0);
	lookAdd(msg0,n1);
	msg2:=msgs[msg.aencMsg];
	lookAdd(msg1,m1);
	lookAdd(msg2,m2);
	lookAdd(msg,n2);
	
    	clear de1;
	de1.deduced:=false;
	de1.deduceKind:=encryptDed;
	de1.conclusion:=n2;
	de1.assumption1:=m1;
	de1.assumption2:=m2;
	findded(de1,find1);
	if (find1=false) then
	ded_end:=ded_end+1;
	Deductions[ded_end]:=de1;
	endif;
	
	clear de1;
	de1.deduced:=false;
	de1.deduceKind:=decrypt;
	de1.conclusion:=m2;
	de1.assumption1:=n2;
	de1.assumption2:=n1;
	findded(de1,find1);
	if (find1=false) then
	ded_end:=ded_end+1;
	Deductions[ded_end]:=de1;
	endif;
	addded (msg2);
	
 	elsif (msg.msgType=concat) then
    	msg1:=msgs[msg.concatPart1];
	msg2:=msgs[msg.concatPart2];
	lookAdd(msg1,m1);
	lookAdd(msg2,m2);
	lookAdd(msg,n2);
	
    	clear de1;
	de1.deduced:=false;
	de1.deduceKind:=depairDed;
	de1.conclusion:=m1;
	de1.assumption1:=n2;
	de1.assumption2:=m2;
	findded(de1,find1);
	if (find1=false) then
	ded_end:=ded_end+1;
	Deductions[ded_end]:=de1;
	endif;

	clear de1;
	de1.deduced:=false;
	de1.deduceKind:=depairDed;
	de1.conclusion:=m2;
	de1.assumption1:=n2;
	de1.assumption2:=m1;
	findded(de1,find1);
	if (find1=false) then
	ded_end:=ded_end+1;
	Deductions[ded_end]:=de1;
	endif;

	clear de1;
	de1.deduced:=false;
	de1.deduceKind:=enpairDed;
	de1.conclusion:=n2;
	de1.assumption1:=m1;
	de1.assumption2:=m2;
	findded(de1,find1);
	if (find1=false) then
	ded_end:=ded_end+1;
	Deductions[ded_end]:=de1;
	endif;
	
	addded (msg1);
	addded (msg2);
 endif;
end;


procedure get_mes (msg:Message;var n1:indexType);
var m1,m2:Message;
begin
    	lookAdd(msg,n1);
	replace(msg);
	for i:msgLen do
     	  addded(msgs[allMsgs[i]]);
    	endfor;
end;

procedure addKnowledge(msgNo:indexType); 
  var i:DeductionsNums;
  begin
	Spy_known[msgNo]:=true;
	for i: DeductionsNums do
	  if (  Spy_known[Deductions[i].assumption1]=true &
		(Spy_known[Deductions[i].assumption2]=true |Deductions[i].assumption2=0) & 
		Spy_known[Deductions[i].conclusion]=false) then
	    	Spy_known[Deductions[i].conclusion]:=true;
		Deductions[i].deduced:=true;
		addKnowledge(Deductions[i].conclusion);
      	  endif;
	endfor;
  end;  

----procedure construct msg
procedure cons1(Na:NonceType;A:AgentType;B:AgentType;  Var msg:Message; Var num: indexType);
var num1,num2:indexType;
    k1:KeyType;
begin
	clear msg;
	msg.msgType:=nonce;
	msg.noncePart:=Na;
	lookAdd(msg,num1);

	clear msg;
	msg.msgType:=agent;
	msg.ag:=A;
	lookAdd(msg,num2);

	clear msg;
	msg.msgType:=concat;
	msg.concatPart1:=num1;
	msg.concatPart2:=num2;
	lookAdd(msg,num1);

	clear msg;
	clear k1;
	msg.msgType:=key;
	k1.ag:=B;
	k1.encTyp:=PK;
	msg.k:=k1;
	lookAdd(msg,num2);

	clear msg;
	msg.msgType:=aenc;
	msg.aencMsg:=num1;
	msg.aencKey:=num2;
	lookAdd(msg,num);
end;

procedure cons2(Na:NonceType;Nb:NonceType; A:AgentType; Var msg:Message; Var num: indexType);
var num1,num2:indexType;
    k1:KeyType;
begin
	clear msg;
	msg.msgType:=nonce;
	msg.noncePart:=Na;
	lookAdd(msg,num1);

	clear msg;
	msg.msgType:=nonce;
	msg.noncePart:=Nb;
	lookAdd(msg,num2);

	clear msg;
	msg.msgType:=concat;
	msg.concatPart1:=num1;
	msg.concatPart2:=num2;
	lookAdd(msg,num1);

	clear msg;
	clear k1;
	msg.msgType:=key;
	k1.ag:=A;
	k1.encTyp:=PK;
	msg.k:=k1;
	lookAdd(msg,num2);

	clear msg;
	msg.msgType:=aenc;
	msg.aencMsg:=num1;
	msg.aencKey:=num2;
	lookAdd(msg,num);
end;

procedure cons3(Nb:NonceType; B:AgentType; Var msg:Message; Var num: indexType);
var num1,num2:indexType;
    k1:KeyType;
begin
	clear msg;
	msg.msgType:=nonce;
	msg.noncePart:=Nb;
	lookAdd(msg,num1);

	clear msg;
	clear k1;
	msg.msgType:=key;
	k1.ag:=B;
	k1.encTyp:=PK;
	msg.k:=k1;
	lookAdd(msg,num2);

	clear msg;
	msg.msgType:=aenc;
	msg.aencMsg:=num1;
	msg.aencKey:=num2;
	lookAdd(msg,num);
end;

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

------ rule for alice 
ruleset i:aliceNums do
  rule "roleA1 "
	alices[i].st = A1 & ch[1].empty=true
	==>
	var msg: Message;
	    msgNo:indexType;
	begin
		clear msg;
		cons1(alices[i].Na,alices[i].A,alices[i].B,msg,msgNo);
		ch[1].empty:=false;	
		ch[1].msg:=msg;
		ch[1].sender:=alices[i].A;
		ch[1].receiver:=indexTyperuder_;
		alices[i].st:=A2;
		put "1.A->I\n";
		put ch[1].msg;
	end;

  rule "roleA2 "
	alices[i].st=A2 & ch[2].empty=false & 
	indexTyperuder.st=emitting2 & ch[2].receiver=alices[i].A
	==>
	var loc_A,loc_B:AgentType;
	    loc_Na,loc_Nb:NonceType;
	    msgNo:indexType;
	begin
		clear msg;
		msg:=ch[2].msg;
		destruct2(msg,loc_Na,loc_Nb,loc_A);
		if (loc_A=alices[i].A & loc_Na = alices[i].Na) then
		  ch[2].empty:=true;
		  cons3(loc_Nb,alices[i].B,msg,msgNo);
		  ch[3].msg := msg;
		  alices[i].st := A3;
		  ch[3].receiver:=indexTyperuder_;
		  ch[3].sender:=alices[i].A;
		  ch[3].empty:= false;
		  put"3.A->I\n";
		  put ch[3].msg;
		endif;
	end;

---  role "roleA3 "
---	alices[i].st=A3 & ch[3].empty=true
---	==>
---	var msg:Message;
---	msgNo:indexType;
---	begin
---		clear msg;
---		cons3(Loc_Nb,alices[i].B,msg,msgNo);
---		ch[3].msg := msg;
---	end;
end;

--- rule for bob
ruleset i:bobNums do
  rule "roleB1 "
	bobs[i].st=B1 & ch[1].empty=false & 
	indexTyperuder.st=emitting1 & ch[1].receiver=bobs[i].B
	==>
	var loc_A,loc_B:AgentType;
	    loc_Na:NonceType;
	    msgNo:indexType;
	begin
		clear msg;
		msg:=ch[1].msg;
		destruct1(msg,loc_Na,loc_A,loc_B);
		if loc_B=bobs[i].B then
		  ch[1].empty := true;
		  cons2(loc_Na,bobs[i].Nb,loc_A,msg,msgNo);
		  ch[2].msg:=msg;
		  ch[2].empty:= false;
		  bobs[i].st:=B2;
		  ch[2].receiver:=indexTyperuder_;
		  ch[2].sender:= bobs[i].B;
		  put "2.B->I\n";
		  put ch[2].msg;
		endif;
	end;

  rule "roleB2 "
	bobs[i].st=B2 & ch[3].empty=false &
	indexTyperuder.st=emitting3 & ch[3].receiver = bobs[i].B
	==>
	var loc_B:AgentType;
	    loc_Nb:NonceType;
	begin
		clear msg;
		msg:=ch[3].msg;
		destruct3(msg,loc_Nb,loc_B);
		if (loc_B = bobs[i].B & loc_Nb = bobs[i].Nb) then
		  bobs[i].st := B3;
		  put "\nend\n";
		  put msg;
		endif;
	end;
	
end;

--- rule for indexTyperuder
  rule "indexTyperuderGetMsg1"
	indexTyperuder.st=waiting & ch[1].empty=false &	ch[1].receiver = indexTyperuder_ 
	==>
	var msgNo:indexType;
		begin
			get_mes(ch[1].msg,msgNo);
			ch[1].empty := true;
			indexTyperuder.st:=getmsg1;
			if (!Spy_known[msgNo]) then
			  addKnowledge(msgNo);
			endif;	
		end;

  rule "indexTyperuderGetMsg2"
	indexTyperuder.st=emitting1 & ch[2].empty=false & ch[2].receiver = indexTyperuder_
	==>
	var msgNo:indexType;
	begin
		get_mes(ch[2].msg,msgNo);
		ch[2].empty := true;
		indexTyperuder.st := getmsg2;
		if (!Spy_known[msgNo]) then
		  addKnowledge(msgNo);
		endif;
	end;

  rule "indexTyperuderGetMsg3"
	indexTyperuder.st=emitting2 & ch[3].empty =false & ch[3].receiver=indexTyperuder_
	==>
	var msgNo:indexType;
	begin
		get_mes(ch[3].msg,msgNo);
		ch[3].empty := true;
		indexTyperuder.st := getmsg3;
		if (!Spy_known[msgNo]) then
		  addKnowledge(msgNo) ;
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

 ruleset i: msgLen do
   ruleset j: aliceNums do
    rule "indexTyperuderEmittingMsg2" 
    	indexTyperuder.st=getmsg2 & ch[2].empty=true & allMsgs[i]>0
   	==>
	begin 
	   if (Spy_known[allMsgs[i]] & emit[allMsgs[i]]=false)   then
		clear ch[2];
		ch[2].empty:=false;
		ch[2].msg:=msgs[allMsgs[i]];
		ch[2].sender:=indexTyperuder_;
		ch[2].receiver:=alices[j].A;
		emit[allMsgs[i]]:=true;
		indexTyperuder.st:=emitting2;
		put "   2'I->A\n";
		put ch[2].msg;
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
		bobs[i].st := B1;
	endfor;
	bobs[1].B := Bob;
	bobs[1].Nb := Nb;

	indexTyperuder.st:=waiting;
	for i: msgLen do
		Spy_known[i]:=false;
	endfor;

	for i: msgLen do
		emit[i]:=false;
	endfor;

--- init statement for channels
	for i: msgpassingNums do
	    	clear ch[i];
		ch[i].empty:=true;
	endfor;

	clear systemEvent;
	for i:eventNums do
        	systemEvent[i].send := false ;
    	endfor;
	eve_end:=0;

	----please add definition of messgaes msgs
    
	clear msgs;

	for i: indexType do
		clear msg1;
		msg1.msgType:=null;
		msgs[i]:=msg1;
	endfor;

	Spy_known[1]:=true;
	Spy_known[2]:=true;
	Spy_known[3]:=true;
	Spy_known[4]:=true;
	Spy_known[5]:=true;
	Spy_known[6]:=true;
	Spy_known[7]:=true;

	clear msg1;
	msg1.msgType:=agent;
	msg1.ag:=indexTyperuder_;
	msgs[1]:=msg1;

	clear msg1;
	clear KEY;
	msg1.msgType:=key;
	KEY.encTyp:=PK;
	KEY.ag:=Alice;
	msg1.k:=KEY;
	msgs[2]:=msg1;

	clear msg1;
	clear KEY;
	msg1.msgType:=key;
	KEY.encTyp:=PK;
	KEY.ag:=Bob;
	msg1.k:=KEY;
	msgs[3]:=msg1;

	clear msg1;
	clear KEY;
	msg1.msgType:=key;
	KEY.encTyp:=PK;
	KEY.ag:=indexTyperuder_;
	msg1.k:=KEY;
	msgs[4]:=msg1;

	clear msg1;
	clear KEY;
	msg1.msgType:=key;
	KEY.encTyp:=SK;
	KEY.ag:=indexTyperuder_;
	msg1.k:=KEY;
	msgs[5]:=msg1;

	clear msg1;
	msg1.msgType:=nonce;
	msg1.noncePart:=Na1;
	msgs[6]:=msg1;
	clear msg1;
	msg1.msgType:=nonce;
	msg1.noncePart:=Nb1;
	msgs[7]:=msg1;

	endn:=0;
	msg_end:=7;
	ded_end:=0;

	----please add definition of deductions 

	clear Deductions;
end;

invariant "sec"
  forall i:msgLen do
   (msgs[i].msgType=nonce &
   (msgs[i].noncePart=Na|msgs[i].noncePart=Nb)) 
    ->
   Spy_known[i]=false
end;



