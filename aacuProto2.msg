Protocol ACCAU:
Knowledges:{
	Host : <HostID.Gateway>;
	Gateway : <HostID.Server.Gateway>;
	Server : <HostID.Gateway.Server>
}
Actions:{
[seq1] Host -> Gateway  (n1) :   <HostID.nonce(Na1).aenc{<HostID.nonce(Na1)>}sk(HostID)>;
[seq2] Gateway -> Server  (n2) : <HostID.nonce(Na1).aenc{<HostID.nonce(Na1)>}sk(HostID)>;

[seq3] Server -> Gateway  (n3) : <Server.nonce(Na2).aenc{<Server.nonce(Na2)>}sk(Server)>;
[seq4] Gateway-> Host (n4):      <Server.nonce(Na2).aenc{<HostID.nonce(Na2)>}sk(Server)>;

[seq5] Host -> Gateway  (n5): <HostID.nonce(Na2).aenc{<HostID.nonce(Na2)>}sk(HostID)>;
[seq6] Gateway -> Server(n6): <HostID.nonce(Na2).aenc{<HostID.nonce(Na2)>}sk(HostID)>;

[seq7] Server -> Gateway (n7) : <Server.nonce(Na3).aenc{<Server.nonce(Na3)>}sk(Server)>;
[seq8] Gateway-> Host (n8) :    <Server.nonce(Na3).aenc{<Server.nonce(Na3)>}sk(Server)>
}
Environment:{

}
Goals:{
[sec1] nonce(Na1);
[auth1] Host non-injectively agrees with Server on nonce(Na1)
}
end

