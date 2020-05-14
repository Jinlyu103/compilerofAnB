Protocol ACCAU:
Knowledges:{
	Host : <HostID.Gateway>;
	Gateway : <HostID.Server.Gateway>;
	Server : <HostID.Gateway.Server>
}
Actions:{
[1] Host -> Gateway  (n1) : <HostID.Gateway.aenc{<HostID.Gateway>}sk(HostID)>;
[2] Gateway -> Server  (n2) : <HostID.Gateway.aenc{<HostID.Gateway>}sk(HostID)>;

[3] Server -> Gateway  (n3) : <HostID.nonce(r).Server.aenc{<HostID.nonce(r).Server>}sk(Server)>;
[4] Gateway-> Host (n4): <HostID.nonce(r).Server.aenc{<HostID.nonce(r).Server>}sk(Server)>;

[5] Host -> Gateway  (n5): <HostID.nonce(r).aenc{<HostID.nonce(r)>}sk(HostID)>;
[6] Gateway -> Server  (n6) : <HostID.nonce(r).aenc{<HostID.nonce(r)>}sk(HostID)>;

[7] Server -> Gateway (n7) : <HostID.HostIP.Gateway.aenc{sk(HostIP)}pk(HostID).Server.aenc{<HostID.HostIP.Gateway.aenc{sk(HostIP)}pk(HostID).Server>}sk(Server)>;
[s8] Gateway -> Host (n8) : <HostID.HostIP.Gateway.aenc{sk(HostIP)}pk(HostID).Server.aenc{<HostID.HostIP.Gateway.aenc{sk(HostIP)}pk(HostID).Server>}sk(Server)>
}
Environment:{

}
Goals:{
[sec1] nonce(r);
[sec2] sk(HostIP);
[auth1] Host non-injectively agrees with CA on nonce(r)
}
end

