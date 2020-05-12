Protocol ACCAU:
Knowledges:{
	Host : <HostID.AGIP>;
	AG : <HostID.CAIP.AGIP>;
	CA : <HostID.AGIP.CAIP>
}
Actions:{
[seq1] Host -> AG  (n1) : <msgType(1).seq(1).HostID.AGIP.aenc{<msgType(1).seq(1).HostID.AGIP>}sk(HostID)>;
[seq2] AG   -> CA  (n2) : <msgType(1).seq(1).HostID.AGIP.aenc{<msgType(1).seq(1).HostID.AGIP>}sk(HostID)>;

[seq3] CA   -> AG  (n3) : <msgType(2).seq(2).HostID.nonce(r).CAIP.aenc{<msgType(2).seq(2).HostID.nonce(r).CAIP>}sk(CAIP)>;
[seq4] AG   -> Host (n4): <msgType(2).seq(2).HostID.nonce(r).CAIP.aenc{<msgType(2).seq(2).HostID.nonce(r).CAIP>}sk(CAIP)>;

[seq5] Host -> AG  (n5): <msgType(3).seq(2).HostID.nonce(r).aenc{<msgType(3).seq(2).HostID.nonce(r)>}sk(HostID)>;
[seq6] AG -> CA  (n6) : <msgType(3).seq(2).HostID.nonce(r).aenc{<msgType(3).seq(2).HostID.nonce(r)>}sk(HostID)>;

[seq7] CA -> AG (n7) : <msgType(4).seq(2).HostID.result(rs).right(ri).HostIP.AGIP.aenc{sk(HostIP)}pk(HostID).CAIP.aenc{<msgType(4).seq(2).HostID.result(rs).right(ri).HostIP.AGIP.aenc{sk(HostIP)}pk(HostID).CAIP>}sk(CAIP)>
[seq8] AG -> Host (n8) : <msgType(4).seq(2).HostID.result(rs).right(ri).HostIP.AGIP.aenc{sk(HostIP)}pk(HostID).CAIP.aenc{<msgType(4).seq(2).HostID.result(rs).right(ri).HostIP.AGIP.aenc{sk(HostIP)}pk(HostID).CAIP>}sk(CAIP)>
}
Environment:{

}
Goals:{
[sec1] nonce(r);
[sec2] sk(HostIP);
[auth1] Host non-injectively agrees with CA on nonce(r)
}
end

注：这是接入认证协议的A&B描述形式，actions中省掉了网关发送网关宣告报文这一动作，直接从终端开始发送接入认证报文。编译器解析器还要稍作修改才能读取报文类型msgType、序号seq，认证结果result，权限right等token
