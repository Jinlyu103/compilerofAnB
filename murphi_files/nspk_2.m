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
  msgLen:0..total_fact;
  DeductionsNums:0..deductionsNum;
  msgpassingNums:1..msgpassingNum;
  eventNums:0..eventNum;

  AgentType   : enum{Alice,Bob,intruderType};
  NonceType   : enum{Na,Na1,Nb,Nb1};
  EncryptType : enum{PK,SK,SymK}; ---Public key, Secret key, Symmentric key

  KeyType: record
    encTyp: EncryptType;
    ag: AgentType;
  end;

  AliceStatus   : enum{A1,A2,A3};
  BobStatus     : enum{B1,B2,B3};
  IntruderStatus: enum{wait,gotmsg1,gotmsg2,gotmsg3,emitted1,emitted2,emitted3}; 

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

/*--- never used.
  DeduceType: enum{encryptDed, decrypt, enConcatDed, deConcatDed}; ---encryptDed:加密 decrypt:解密  enConcatDed:合成concat deConcatDed:拆分concat
  TDeduction: record	
    deduced :boolean;
    deduceKind: DeduceType;
    conclusion : indexType;
    assumption1: indexType;
    assumption2: indexType;
  end;
*/
  Channel : record
    msg     : Message;
    sender  : AgentType;
    receiver: AgentType;
    empty   : boolean;
  end;

  RoleInit: record    ---发起者 roleA
    A   : AgentType;
    B   : AgentType;
    Na  : NonceType;
    st  : AliceStatus;
  end;

  RoleResp: record    ---接收者 roleB
    B   : AgentType;
    Nb  : NonceType;
    st  : BobStatus;
  end;

  RoleIntruder: record	---攻击者
	  B : AgentType;
    st: IntruderStatus;
  end;
/*
--- never used.
  Event: record	        --- ???
    send 	: boolean;
    sender  : AgentType;
    receiver: AgentType;
    nonce	: NonceType;
  end;
*/
  msgSet: record
    content: Array[msgLen] of indexType;
    length : msgLen;
  end;

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
  Spy_known     : Array[indexType] of boolean;
  emit          : Array[indexType] of boolean;
  ---msg           : Message;   
  ---ded_end       : DeductionsNums;
  ---eve_end       : eventNums;
  ---eve           : Event;
  ---endn          : indexType;
  ---end1          : indexType;
  ---end2          : indexType;
  ---Deductions    : Array[DeductionsNums] of TDeduction;
  ---allMsgs       : array[msgLen] of indexType;
  ---systemEvent   : array[eventNums] of Event;

--- Pat1 Na
procedure lookAddPat1( Na:NonceType; Var msg:Message; Var num: indexType);  
  Var index : indexType;
  begin
    index:=0;
    for i: msgLen do  --- lookup(msg)
      if (msgs[i].msgType=nonce) then 
        if (msgs[i].noncePart=Na) then   
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
procedure lookAddPat2(A:AgentType; Var msg:Message; Var num: indexType); 
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
procedure lookAddPat3(Na:NonceType; A:AgentType; Var msg:Message; Var num: indexType); 
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
    clear num;
    lookAddPat5(Na, A, B, msg, num);
  end;

procedure cons2(Na:NonceType; Nb:NonceType; A:AgentType; Var msg:Message; Var num: indexType);
  begin
    clear msg;
    clear num;
    lookAddPat7(Na, Nb, A,msg,num);
  end;

procedure cons3(Nb:NonceType; B:AgentType; Var msg:Message; Var num: indexType);
  begin
    clear msg;
    clear num;
    lookAddPat8(Nb,B,msg,num);
  end;

--- procedure destruct msg
procedure destruct1(msg:Message; Var Na:NonceType; Var A: AgentType; Var B: AgentType);
  var k1:KeyType;
      msg1,msgNum1,msgNum2:Message;
  begin
    clear msg1;
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
      msg1,msgNum1,msgNum2:Message;
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
      msg1:Message;
  begin
    clear msg1;
    k1:=msgs[msg.aencKey].k;
    B:=k1.ag;
    msg1:=msgs[msg.aencMsg];
    Nb:=msg1.noncePart;
  end;

procedure get_msgNo(msg:Message; Var num:indexType);
  var index:indexType;
  begin
    index:=0;
    for i: msgLen do 
      if (msgs[i].msgType = msg.msgType) then
        if ( (msg.msgType=agent & msgs[i].ag=msg.ag)
          | (msg.msgType=nonce & msgs[i].noncePart=msg.noncePart)
          | (msg.msgType=key & (msgs[i].k.encTyp=msg.k.encTyp & msgs[i].k.ag=msg.k.ag))
          | (msg.msgType=aenc & (msgs[i].aencMsg=msg.aencMsg & msgs[i].aencKey=msg.aencKey))
          | (msg.msgType=senc & (msgs[i].sencMsg=msg.sencMsg & msgs[i].sencKey=msg.sencKey))
          ) then
          index:=i;
        endif;
      endif;
    endfor;
    num:=index;
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
      if msg.k.encTyp = PK then
        put "PK(";
        put msg.k.ag;
        put ")";
      elsif msg.k.encTyp=SK then
        put "SK(";
        put msg.k.ag;
        put ")";
      elsif msg.k.encTyp=SymK then
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
      put "concat{";
      printMsg(msgs[msg.concatPart1]);
      put ",";
      printMsg(msgs[msg.concatPart2]);
      put "}";
    endif;
  end;

--- function: lookUp/inverseKey/constructs
function inverseKey(msgK:Message):Message;
  var key_inv:Message;
  begin
    key_inv.msgType := null;
    if (msgK.msgType=key) then
      key_inv.msgType := msgK.msgType;
      key_inv.k.ag := msgK.k.ag;
      key_inv.k.encTyp:= msgK.k.encTyp;
      if (msgK.k.encTyp=PK) then 
        key_inv.k.encTyp := SK;
      elsif (msgK.k.encTyp=SK) then
        key_inv.k.encTyp := PK;
      endif;
    endif;
    return key_inv;
  end;

function lookUp(msg: Message): indexType;
  var index: indexType;
  begin
    index := 0;
    for i: indexType do
      if(msgs[i].msgType=msg.msgType) then
        if (msgs[i].msgType=agent & msgs[i].ag=msg.ag) then
          index := i;
        elsif (msgs[i].msgType=nonce & msgs[i].noncePart=msg.noncePart) then
          index := i;
        elsif (msgs[i].msgType=key & (msgs[i].k.encTyp=msg.k.encTyp & msgs[i].k.ag=msg.k.ag)) then
          index := i;
        elsif (msgs[i].msgType = aenc & (msgs[i].aencKey=msg.aencKey & msgs[i].aencMsg=msg.aencMsg)) then
          index := i;
        elsif (msgs[i].msgType = senc & (msgs[i].sencKey=msg.sencKey & msgs[i].sencMsg=msg.sencMsg)) then
          index := i;
        elsif (msgs[i].msgType = concat & (msgs[i].concatPart1=msg.concatPart1 & msgs[i].concatPart2=msg.concatPart2)) then
          index := i;
        endif;
      endif;
    endfor;
    return index;
  end;

---Pat1:Na; Pat2: A; Pat3: concat(Na,A)
function construct3By12(msgNo1,msgNo2:indexType):indexType;
  var index : indexType;
      locNa : NonceType;
      locA  : AgentType;
      msg   : Message;
  begin
    index := 0;
    locNa := msgs[msgNo1].noncePart;
    locA  := msgs[msgNo2].ag;
    lookAddPat3(locNa,locA,msg,index);
    return index;
  end;

---pat3: concat(Na,A); pat4: key(PK, B); pat5:aenc({Na,A},Pk(B))
function construct5By34(msgNo3,msgNo4:indexType):indexType;
  var index : indexType;
      locNa : NonceType;
      locA  : AgentType;
      k_ag  : AgentType;  --- agent B
      msg   : Message;
  begin
    index := 0;
    locNa := msgs[msgs[msgNo3].concatPart1].noncePart;
    locA  := msgs[msgs[msgNo3].concatPart2].ag;
    k_ag  := msgs[msgNo4].k.ag;
    lookAddPat5(locNa,locA,k_ag,msg,index);
    return index;
  end;

---Pat1:Na; Pat1: Nb; Pat6: concat(Na,Nb)
function construct6By11(msgNo1,msgNo2:indexType):indexType;
  var index : indexType;
      locNa : NonceType;
      locNb : NonceType;
      msg   : Message;
  begin
    index := 0;
    locNa := msgs[msgNo1].noncePart;
    locNb  := msgs[msgNo2].noncePart;
    lookAddPat6(locNa,locNb,msg,index);
    return index;
  end;

--- pat6:concat(Na,Nb); pat4:key(PK, B); pat7: aenc({Na,Nb},pk(A))
function construct7By64(msgNo6,msgNo4:indexType):indexType;
  var index : indexType;
      locNa : NonceType;
      locNb : NonceType;
      k_ag  : AgentType;  --- agent A
      msg   : Message;
  begin
    index := 0;
    locNa := msgs[msgs[msgNo6].concatPart1].noncePart;
    locNb := msgs[msgs[msgNo6].concatPart2].noncePart;
    k_ag  := msgs[msgNo4].k.ag;
    lookAddPat7(locNa,locNb,k_ag,msg,index);
    return index;
  end;

--- pat1:Nb; pat4:key(PK, B); pat8: aenc({Nb},pk(A))
function construct8By14(msgNo1,msgNo4:indexType):indexType;
  var index : indexType;
      locNb : NonceType;
      k_ag  : AgentType;  --- agent B
      msg   : Message;
  begin
    index := 0;
    locNb := msgs[msgNo1].noncePart;
    k_ag  := msgs[msgNo4].k.ag;
    lookAddPat8(locNb,k_ag,msg,index);
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

--- rule for Alice
ruleset i:aliceNums do
  rule "roleA1"   ---send msg:{Na,A}Pk(intruder)
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
      put "ch[1]: A -> I\n";
      ---put ch[1].msg;
      printMsg(ch[1].msg);
      put "\n";
    end;

  rule "roleA2"  --- receive msg: {Na,Nb}Pk(A)
    alices[i].st=A2 & ch[2].empty=false & intruder.st=emitted2 & ch[2].receiver=alices[i].A 
    ==>
    Var loc_A,loc_B: AgentType;
        loc_Na, loc_Nb: NonceType;
        msgNo: indexType;
        msg : Message;
    begin
      clear msg;
      msg:=ch[2].msg;
      destruct2(msg,loc_Na,loc_Nb,loc_A);      
      if (loc_A=alices[i].A & loc_Na=alices[i].Na) then
        ch[2].empty := true;
        cons3(loc_Nb, alices[i].B, msg,msgNo);
        ch[3].empty:=true;
        ch[3].msg := msg;
        ch[3].receiver := intruderType;
        ch[3].sender := alices[i].A;
        alices[i].st := A3;
        -------------------------------
      endif;
    end;

  rule "roleA3"  ---send msg: {Nb}Pk(intruder)
    alices[i].st = A3 & ch[3].empty = true
    ==>
    begin    	
      ch[3].empty := false;
      put "ch[3]: A -> I\n";
      printMsg(ch[3].msg);
      put "\n";
      alices[i].st := A1;
    end;
end;

--- rules for bob 
ruleset i:bobNums do 
  rule "roleB1"
    bobs[i].st = B1 & ch[1].empty = false & ch[1].receiver=bobs[i].B  --- & intruder.st=emitted1
    ==>
    Var loc_A,loc_B:AgentType;
        loc_Na:NonceType;
        msgNo1:indexType;
        msg:Message;
    begin
      clear msg;
      msg:=ch[1].msg;       --- receive message
      destruct1(msg,loc_Na,loc_A,loc_B); --- destruct1 is not "Bob's" decryption operation.
      if (loc_B=bobs[i].B ) then        
        ch[1].empty := true;        
        cons2(loc_Na, bobs[i].Nb, loc_A, msg, msgNo1); ----construct msg: {Na,Nb}pk(A)
        
        clear ch[2];
        ch[2].empty := true;
        ch[2].msg := msg;            
        bobs[i].st := B2;
        ch[2].receiver:=loc_A;
        ch[2].sender := bobs[i].B;        
      endif;
    end;

  rule "roleB2" ----send msg: {Na,Nb}pk(A)
    bobs[i].st = B2 & ch[2].empty = true 
    ==>
    begin
      ch[2].empty := false;
      put "ch[2]: B -> I\n";  
      printMsg(ch[2].msg);
      put "\n";
      bobs[i].st := B3;
    end;
    
  rule "roleB3" ---- receive msg : {Na}Pk(B)
    bobs[i].st = B3 & ch[3].empty = false & ch[3].receiver=bobs[i].B ---& intruder.st = emitted3
    ==>
    Var loc_B:AgentType;
        loc_Nb:NonceType;
        msg:Message;
    begin
      clear msg;
      msg:=ch[3].msg;
      destruct3(msg,loc_Nb,loc_B);
      if (loc_B = bobs[i].B & loc_Nb=bobs[i].Nb) then
        ---put "\nend\n";
        ---put msg;
        printMsg(msg);
        put "\n";
        bobs[i].st := B1;
      endif;
    end;
end;

--- rules for intruder
rule "intruderGetMsg1"
  ch[1].empty=false  ---intruder.st = wait &  & ch[1].receiver=intruderType
  ==>
  Var flag_pat5:boolean;
      msgNo:indexType;
      msg:Message;
  begin
    ---clear msg;
    ---clear msgNo;
    msg := ch[1].msg;
    get_msgNo(msg, msgNo);
    isPat5(msg,flag_pat5);  ---pat5: {Na,A}Pk(B)
    if (flag_pat5) then     ---put this msg into pat5Set
      if(!exist(pat5Set,msgNo)) then
        pat5Set.length:=pat5Set.length+1;
        pat5Set.content[pat5Set.length] := msgNo;
        Spy_known[msgNo] := true; 
      endif;
    endif;
    ch[1].empty := true;
    intruder.st := gotmsg1;  ---the state of intruder
    ---put "intruder get msg1\n";
  end;

rule "intruderGetMsg2"
  ch[2].empty=false ---& ch[2].receiver=intruderType ;intruder.st = emitted1 &  
  ==>
  Var flag_pat7:boolean;
      msgNo: indexType;
      msg:Message;
  begin
    ---clear msg;
    ---clear msgNo;
    msg:=ch[2].msg;
    get_msgNo(msg, msgNo);
    isPat7(msg,flag_pat7); ---pat7:{Na,Nb}pk(A)
    if (flag_pat7) then    ---put this msg into pat7Set
      if(!exist(pat7Set,msgNo)) then
        pat7Set.length:=pat7Set.length+1;
        pat7Set.content[pat7Set.length] := msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[2].empty := true;
    intruder.st:=gotmsg2;
  end;

rule "intruderGetMsg3"
  ch[3].empty=false    ---intruder.st = emitted2 & & ch[3].receiver=intruderType
  ==>
  Var flag_pat8: boolean;
      msgNo: indexType;
      msg:Message;
  begin
    ---clear msg;
    ---clear msgNo;
    msg:=ch[3].msg;
    get_msgNo(msg,msgNo);
    isPat8(msg,flag_pat8);  ---pat8: {Nb}pk(B)
    if (flag_pat8) then
      if(!exist(pat8Set,msgNo)) then
        pat8Set.length := pat8Set.length+1;
        pat8Set.content[pat8Set.length] := msgNo;
        Spy_known[msgNo] := true;
      endif;
    endif;
    ch[3].empty := true;
    intruder.st:=gotmsg3;
  end;

--- encrypt and decrypt
--- pat5: {Na,A}Pk(B)
ruleset i:indexType do  --- pat5size means the capacity of pat5Set, that is indexType
  rule "decrypty5" 
    i <= pat5Set.length & Spy_known[pat5Set.content[i]] &
    !Spy_known[msgs[pat5Set.content[i]].aencMsg] 
    ==>
    var key_inv:Message;
        msgPat3:indexType;
        flag_pat3:boolean;
    begin
      ---put "decrypt 5\n";
      key_inv := inverseKey(msgs[msgs[pat5Set.content[i]].aencKey]);
      if (key_inv.k.ag = intruderType) then  ---Spy_known[lookUp(key_inv)]
        ---put "decrypt 51\n";
        Spy_known[msgs[pat5Set.content[i]].aencMsg]:=true;
        ---put this msg into pat3Set
        msgPat3 :=msgs[pat5Set.content[i]].aencMsg;
        isPat3(msgs[msgPat3],flag_pat3);  ---pat3: {Na,A}
        if (flag_pat3) then     ---put this msg into pat3Set
          if(!exist(pat3Set,msgPat3)) then
            ---put "put this msg into pat3\n";
            ---put msgPat3;
            pat3Set.length:=pat3Set.length+1;
            pat3Set.content[pat3Set.length] := msgPat3; 
          endif;
        endif;
      endif;
    end;
endruleset;

--- pat3:Na,A
--- pat4:PK(B)
ruleset i:indexType do    --- pat3size
  ruleset j:indexType do  --- pat4size
    rule "encrypty5"      --- This rule is not fired!
      i<=pat3Set.length & Spy_known[pat3Set.content[i]] &
      j<=pat4Set.length & Spy_known[pat4Set.content[j]] &
      !Spy_known[construct5By34(pat3Set.content[i],pat4Set.content[j])]
      ==>
      var encMsgNo : indexType;
          ---encMsg: Message;
      begin
        ---put "encrypt 5.\n";
        if (msgs[pat4Set.content[j]].k.ag=intruder.B) then
          encMsgNo := construct5By34(pat3Set.content[i],pat4Set.content[j]);
          if (!exist(pat5Set,encMsgNo)) then
            ---put "put encMsg into pat5Set\n";
            ---put encMsgNo;
            pat5Set.length:=pat5Set.length+1;
            pat5Set.content[pat5Set.length] := encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo]:=true;
          endif;
        endif;
      end;
  endruleset;
endruleset;

--- pat7: {Na,Nb}Pk(A)
ruleset i:indexType do  --- pat7size means the capacity of pat7Set, that is indexType
  rule "decrypty7" 
    i <= pat7Set.length & Spy_known[pat7Set.content[i]] &
    !Spy_known[msgs[pat7Set.content[i]].aencMsg] 
    ==>
    var key_inv:Message;
        msgPat6:indexType;
        flag_pat6:boolean;
    begin
      ---put "decrypt 7\n";
      key_inv := inverseKey(msgs[msgs[pat7Set.content[i]].aencKey]);
      if (key_inv.k.ag = intruderType) then  ---Spy_known[lookUp(key_inv)]
        ---put "decrypt 71\n";
        Spy_known[msgs[pat7Set.content[i]].aencMsg]:=true;
        ---put this msg into pat6Set
        msgPat6 :=msgs[pat7Set.content[i]].aencMsg;
        isPat6(msgs[msgPat6],flag_pat6);  ---pat6: {Na,Nb}
        if (flag_pat6) then     ---put this msg into pat6Set
          if(!exist(pat6Set,msgPat6)) then
            ---put "put this msg into pat6\n";
            ---put msgPat6;
            pat6Set.length:=pat6Set.length+1;
            pat6Set.content[pat6Set.length] := msgPat6; 
          endif;
        endif;
      endif;
    end;
endruleset;

--- pat6:{Na,Nb}
--- pat4:pk(A)
ruleset i:indexType do    --- pat6size
  ruleset j:indexType do  --- pat4size
    rule "encrypty7" 
      i<=pat6Set.length & Spy_known[pat6Set.content[i]]&
      j<=pat4Set.length & Spy_known[pat4Set.content[j]]&
      !Spy_known[construct7By64(pat6Set.content[i],pat4Set.content[j])]
      ==>
      var encMsgNo:indexType;
          ---encMsg:Message;
      begin
        ---put "encrypt 7.\n";
        if (msgs[pat4Set.content[j]].k.ag = intruder.B) then
          encMsgNo := construct7By64(pat6Set.content[i],pat4Set.content[j]);
          if(!exist(pat7Set,encMsgNo)) then
            pat7Set.length := pat7Set.length+1;
            pat7Set.content[pat7Set.length] := encMsgNo;
          endif;
          if (!Spy_known[encMsgNo]) then
            Spy_known[encMsgNo]:=true;
          endif;
        endif;
    end;
  endruleset;
endruleset;

--- pat8: {Nb}Pk(B)
ruleset i:indexType do  --- pat8size means the capacity of pat8Set, that is indexType
  rule "decrypty8" 
    i <= pat8Set.length & Spy_known[pat8Set.content[i]] &
    !Spy_known[msgs[pat8Set.content[i]].aencMsg] 
    ==>
    var key_inv:Message;
        msgPat1:indexType;
        flag_pat1:boolean;
    begin
      key_inv := inverseKey(msgs[msgs[pat8Set.content[i]].aencKey]);
      if (key_inv.k.ag = intruderType) then
        Spy_known[msgs[pat8Set.content[i]].aencMsg]:=true;
        msgPat1:=msgs[pat8Set.content[i]].aencMsg;
        isPat1(msgs[msgPat1],flag_pat1);
        if (flag_pat1) then
          if (!exist(pat1Set,msgPat1)) then
            pat1Set.length:=pat1Set.length+1;
            pat1Set.content[pat1Set.length]:=msgPat1;
          endif;
        endif;
      endif;
    end;
endruleset;

--- pat1:Nb
--- pat4:pk(B)
ruleset i:indexType do    --- pat1size
  ruleset j:indexType do  --- pat4size
    rule "encrypty8" 
      i<=pat1Set.length & Spy_known[pat1Set.content[i]]&
      j<=pat4Set.length & Spy_known[pat4Set.content[j]]&
      !Spy_known[construct8By14(pat1Set.content[i],pat4Set.content[j])]
      ==>
      var encMsgNo:indexType;
          ---encMsg:Message;
      begin
        if (msgs[pat4Set.content[j]].k.ag=intruder.B) then
          encMsgNo := construct8By14(pat1Set.content[i],pat4Set.content[j]);
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

---enconcat and deconcat : make msg pairs and destroy msg pairs
---pat3: Na,A
ruleset i:indexType do  --- pat3size means the capacity of pat3Set, that is indexType
  rule "deconcat3" 
    i <= pat3Set.length & Spy_known[pat3Set.content[i]] &
    !(Spy_known[msgs[pat3Set.content[i]].concatPart1] & Spy_known[msgs[pat3Set.content[i]].concatPart2])
    ==>
    var msgPat1, msgPat2:indexType;
        flag_pat1,flag_pat2:boolean;
    begin
      ---put "deconcat 3\n";
      if (!Spy_known[msgs[pat3Set.content[i]].concatPart1]) then
        Spy_known[msgs[pat3Set.content[i]].concatPart1]:=true;
        msgPat1 := msgs[pat3Set.content[i]].concatPart1;
        isPat1(msgs[msgPat1],flag_pat1);  ---pat1: Na
        if (flag_pat1) then     ---put this msg into pat1Set
          if(!exist(pat1Set,msgPat1)) then
            ---put "put this msg into pat1\n";
            ---put msgPat1;
            pat1Set.length:=pat1Set.length+1;
            pat1Set.content[pat1Set.length] := msgPat1; 
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat3Set.content[i]].concatPart2]) then
        Spy_known[msgs[pat3Set.content[i]].concatPart2]:=true;
        msgPat2 := msgs[pat3Set.content[i]].concatPart2;
        isPat2(msgs[msgPat2],flag_pat2);  ---pat2: A
        if (flag_pat2) then     ---put this msg into pat2Set
          if(!exist(pat2Set,msgPat2)) then
            ---put "put this msg into pat2\n";
            ---put msgPat2;
            pat2Set.length:=pat2Set.length+1;
            pat2Set.content[pat2Set.length] := msgPat2; 
          endif;
        endif;
      endif;
    end;
endruleset;

---Pat1: Na
---Pat2: A 
ruleset i:indexType do    --- pat1size
  ruleset j:indexType do  --- pat2size
    rule "enconcat3" 
      i<=pat1Set.length & Spy_known[pat1Set.content[i]]&
      j<=pat2Set.length & Spy_known[pat3Set.content[j]]&
      !Spy_known[construct3By12(pat1Set.content[i],pat2Set.content[j])]
      ==>
      var concatMsgNo: indexType;
      begin
        concatMsgNo := construct3By12(pat1Set.content[i],pat2Set.content[j]);
        Spy_known[concatMsgNo]:=true;
        ---put concatMsgNo into pat3Set
        if(!exist(pat3Set,concatMsgNo)) then
          ---put "put concatMsgNo into pat3Set\n";
          ---put concatMsgNo;
          pat3Set.length:=pat3Set.length+1;
          pat3Set.content[pat3Set.length] := concatMsgNo; 
        endif;
      end;
  endruleset;
endruleset;

---pat6: Na,Nb
ruleset i:indexType do  --- pat6size means the capacity of pat6Set, that is indexType
  rule "deconcat6" 
    i <= pat6Set.length & Spy_known[pat6Set.content[i]] &
    !(Spy_known[msgs[pat6Set.content[i]].concatPart1] & Spy_known[msgs[pat6Set.content[i]].concatPart2] )
    ==>
    var msgPa1_1, msgPa1_2:indexType;
        flag_pat1_1, flag_pat1_2:boolean;
    begin
      ---put "deconcat 6.\n";
      if (!Spy_known[msgs[pat6Set.content[i]].concatPart1]) then
        Spy_known[msgs[pat6Set.content[i]].concatPart1]:=true;
        msgPa1_1 := msgs[pat6Set.content[i]].concatPart1;
        isPat1(msgs[msgPa1_1],flag_pat1_1);
        if (flag_pat1_1) then
          if (!exist(pat1Set,msgPa1_1)) then
            pat1Set.length := pat1Set.length+1;
            pat1Set.content[pat1Set.length] := msgPa1_1;
          endif;
        endif;
      endif;
      if (!Spy_known[msgs[pat6Set.content[i]].concatPart2]) then
        Spy_known[msgs[pat6Set.content[i]].concatPart2]:=true;
        msgPa1_2 := msgs[pat6Set.content[i]].concatPart2;
        isPat1(msgs[msgPa1_2],flag_pat1_2);
        if (flag_pat1_2) then
          if (!exist(pat1Set,msgPa1_2)) then
            pat1Set.length := pat1Set.length+1;
            pat1Set.content[pat1Set.length] := msgPa1_2;
          endif;
        endif;
      endif;
    end;
endruleset;

---Pat1: Na
---Pat1: Nb 
ruleset i:indexType do    --- pat1size
  ruleset j:indexType do  --- pat1size
    rule "enconcat6" 
      i<=pat1Set.length & Spy_known[pat1Set.content[i]]&
      j<=pat1Set.length & Spy_known[pat1Set.content[j]]&
      i != j &
      !Spy_known[construct6By11(pat1Set.content[i],pat1Set.content[j])]
      ==>
      var concatMsgNo: indexType;
      begin
        concatMsgNo := construct6By11(pat1Set.content[i],pat1Set.content[j]);
        Spy_known[concatMsgNo]:=true;
        ---put concatMsgNo into pat6Set
        if(!exist(pat6Set,concatMsgNo)) then
          ---put "put concatMsgNo into pat6Set\n";
          ---put concatMsgNo;
          pat6Set.length:=pat6Set.length+1;
          pat6Set.content[pat6Set.length] := concatMsgNo; 
        endif;
      end;
  endruleset;
endruleset;

--- intruder emit msg 1,pat5:{Na,A}pk(B)
ruleset i: msgLen do
  ruleset j: bobNums do
    rule "intruderEmitMsg1" 
    	ch[1].empty=true & i <= pat5Set.length & Spy_known[pat5Set.content[i]]  ---intruder.st=deducted1 & 
    	==>
      begin 
        ---put emit[pat5Set.content[i]];
        if (!emit[pat5Set.content[i]] & msgs[msgs[pat5Set.content[i]].aencKey].k.ag=intruder.B) then
          clear ch[1];
          ch[1].empty:=false;
          ch[1].msg:=msgs[pat5Set.content[i]];
          ch[1].sender:=intruderType;
          ch[1].receiver:=bobs[j].B;
          emit[pat5Set.content[i]] := true;
          intruder.st:=emitted1;
          put "ch[1]: I->B\n";            
          printMsg(ch[1].msg);
          ---put emit[pat5Set.content[i]];  
          put "\n";          
        endif;
      end;
  endruleset;
endruleset;

--- intruder emit msg 2 pat7:{Na,Nb}Pk(A)
ruleset i:msgLen do
  ruleset j:aliceNums do
    rule "intruderEmitMsg2" 
    	ch[2].empty=true & i <= pat7Set.length & Spy_known[pat7Set.content[i]] ---intruder.st=deducted2 & 
    	==>
      begin 
      if (emit[pat7Set.content[i]]=false & msgs[msgs[pat7Set.content[i]].aencKey].k.ag=alices[i].A ) then
        clear ch[2];
        ch[2].empty:=false;          
        ch[2].msg:=msgs[pat7Set.content[i]];
        ch[2].sender:=intruderType;
        ch[2].receiver:=alices[j].A;
        emit[pat7Set.content[i]]:=true;
        intruder.st:=emitted2;
        put "ch[2]: I->A\n";          
        printMsg(ch[2].msg);
        put "\n";
      endif;
    end;
  endruleset;
endruleset;

--- intruder emit msg 3
ruleset i: msgLen do
  ruleset j: bobNums do
    rule "intruderEmitMsg3" 
    	ch[3].empty=true & i <= pat8Set.length & Spy_known[pat8Set.content[i]]  ---intruder.st=deducted3 & 
    	==>
      begin
        if (emit[pat8Set.content[i]]=false & msgs[msgs[pat8Set.content[i]].aencKey].k.ag=intruder.B)  then	
          clear ch[3];
          ch[3].empty:=false;
          ch[3].msg:=msgs[pat8Set.content[i]];
          ch[3].sender:=intruderType;
          ch[3].receiver:=bobs[j].B;
          emit[pat8Set.content[i]] := true;
          intruder.st:=emitted3;
          put "ch[3]: I->B\n";
          printMsg(ch[3].msg);
          ---put emit[pat8Set.content[i]];
          put "\n";
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

  intruder.st := wait;
  intruder.B := Bob;

  for i:msgpassingNums do
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
    pat7Set.content[i] := 0;
    pat8Set.content[i] := 0; 
  endfor;

  pat1Set.length:= 0;
  pat2Set.length:= 0;
  pat3Set.length:= 0;
  pat4Set.length:= 0;
  pat5Set.length:= 0;
  pat6Set.length:= 0;
  pat7Set.length:= 0;
  pat8Set.length:= 0;
  ---msgNo := 0;

  for i:indexType do 
    Spy_known[i] := false;
  endfor;

  msg_end:=msg_end+1;
  msgs[msg_end].msgType := key;
  msgs[msg_end].k.ag:=intruderType;
  msgs[msg_end].k.encTyp:=SK;  ---- SK(intruserType) for intruder to decrypt msg form Alice 

  pat4Set.length := pat4Set.length + 1; ---A,B
  pat4Set.content[pat4Set.length] :=msg_end;
  Spy_known[msg_end] := true;

  msg_end := msg_end+1;  ---pk(B)
  msgs[msg_end].msgType := key;
  msgs[msg_end].k.ag:=Bob;
  msgs[msg_end].k.encTyp:=PK;

  pat4Set.length := pat4Set.length + 1; ---A,B
  pat4Set.content[pat4Set.length] :=msg_end;
  Spy_known[msg_end] := true;

end;

invariant "sec"
  forall i:msgLen do
   (msgs[i].msgType=nonce &
   msgs[i].noncePart=Nb) 
    ->
   Spy_known[i]=false
end;

/*
invariant "sec"
	forall: i,j:bobsNum do
	   i <> j -> B[i].Nb <> B[j].Nb
end;

invariant "auth"
  forall i:eventNums do
    forall j:eventNums do	
	(systemEvent[i].eveType = receive & 
	 systemEvent[i].msg <> null)
	->
	systemEvent[j].eveType = send &
	systemEvent[j].receiver = systemEvent[i].receiver & 
	systemEvent[j].msg.noncePart = systemEvent[i].msg.noncePart
end;

*/

/*
invariant "auth"
  forall i:eventNums do
    forall j:eventNums do
      (systemEvent[i].send=systemEvent[j].send &
      systemEvent[i].nonce=systemEvent[j].nonce)
      ->
      (systemEvent[i].sender = systemEvent[j].receiver &
      systemEvent[i].receiver = systemEvent[j].sender)
end;
*/
