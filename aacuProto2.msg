Protocol ACCAU:
Knowledges:{
	Host : <Host.Gateway.nonce(Na1)>;
	Gateway : <Host.Server.Gateway>;
	Server : <Host.Gateway.Server.nonce(Na2).nonce(Na3)>
}
Actions:{
[seq1] Host -> Gateway  (nonce(Na1)) :   <Host.nonce(Na1).aenc{<Host.nonce(Na1)>}sk(Host)>;
[seq2] Gateway -> Server  () : <Host.nonce(Na1).aenc{<Host.nonce(Na1)>}sk(Host)>;

[seq3] Server -> Gateway  (nonce(Na2)) : <Server.nonce(Na2).aenc{<Server.nonce(Na2)>}sk(Server)>;
[seq4] Gateway-> Host ():      <Server.nonce(Na2).aenc{<Server.nonce(Na2)>}sk(Server)>;

[seq5] Host -> Gateway  (): <Host.nonce(Na2).aenc{<Host.nonce(Na2)>}sk(Host)>;
[seq6] Gateway -> Server(): <Host.nonce(Na2).aenc{<Host.nonce(Na2)>}sk(Host)>;

[seq7] Server -> Gateway (nonce(Na3)) : <Server.nonce(Na3).aenc{<Server.nonce(Na3)>}sk(Server)>;
[seq8] Gateway-> Host () :    <Server.nonce(Na3).aenc{<Server.nonce(Na3)>}sk(Server)>
}
Environment:{
[agent1] Host [1] : <HostID.Intruder.nonce(Na1)>;
[agent2] Gateway [1] : <HostID.ServerIP.GatewayIP>;
[agent3] Server [1] : <HostID.GatewayIP.ServerIP.nonce(Na2).nonce(Na3)>
}
Goals:{
[sec1] nonce(Na1);
[auth1] Host non-injectively agrees with Gateway on nonce(Na1);
[auth2] Host non-injectively agrees with Server on nonce(Na2)
}
end

