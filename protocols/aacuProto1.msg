Protocol ACCAU:
Knowledges:{
	Host : <HostID.Gateway>;
	Gateway : <HostID.Server.Gateway>;
	Server : <HostID.Gateway.Server>
}
Actions:{
[seq1] Host -> Gateway  (n1) : <HostID.Gateway.aenc{<HostID.Gateway>}sk(HostID)>;
[seq2] Gateway -> Server  (n2) : <HostID.Gateway.aenc{<HostID.Gateway>}sk(HostID)>;

[seq3] Server -> Gateway  (n3) : <HostID.nonce(r).Server.aenc{<HostID.nonce(r).Server>}sk(Server)>;
[seq4] Gateway-> Host (n4): <HostID.nonce(r).Server.aenc{<HostID.nonce(r).Server>}sk(Server)>;

[seq5] Host -> Gateway  (n5): <HostID.nonce(r).aenc{<HostID.nonce(r)>}sk(HostID)>;
[seq6] Gateway -> Server  (n6) : <HostID.nonce(r).aenc{<HostID.nonce(r)>}sk(HostID)>;

[seq7] Server -> Gateway (n7) : <HostID.HostIP.Gateway.aenc{sk(HostIP)}pk(HostID).Server.aenc{<HostID.HostIP.Gateway.aenc{sk(HostIP)}pk(HostID).Server>}sk(Server)>;
[seq8] Gateway -> Host (n8) : <HostID.HostIP.Gateway.aenc{sk(HostIP)}pk(HostID).Server.aenc{<HostID.HostIP.Gateway.aenc{sk(HostIP)}pk(HostID).Server>}sk(Server)>
}
Environment:{

}
Goals:{
[sec1] nonce(r);
[sec2] sk(HostIP);
[auth1] Host non-injectively agrees with CA on nonce(r)
}
end

