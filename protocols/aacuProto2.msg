Protocol ACCAU:
Knowledges:{
	Host : <Host.Gateway.nonce(Na2)>;
	Gateway : <Host.Server.Gateway.nonce(Na1)>;
	Server : <Host.Gateway.Server.nonce(Na3).nonce(Na4)>
}
Actions:{
[1] Gateway -> Host (nonce(Na1)) : <nonce(Na1).Gateway>;
[2] Host -> Gateway  (nonce(Na2)) :   <Host.nonce(Na2).aenc{<Host.nonce(Na2)>}sk(Host)>;
[3] Gateway -> Server  () : <Host.nonce(Na2).aenc{<Host.nonce(Na2)>}sk(Host)>;

[4] Server -> Gateway  (nonce(Na3)) : <Server.nonce(Na3).aenc{<Server.nonce(Na3)>}sk(Server)>;
[5] Gateway-> Host ():      <Server.nonce(Na3).aenc{<Server.nonce(Na3)>}sk(Server)>;

[6] Host -> Gateway  (): <Host.nonce(Na3).aenc{<Host.nonce(Na3)>}sk(Host)>;
[7] Gateway -> Server(): <Host.nonce(Na3).aenc{<Host.nonce(Na3)>}sk(Host)>;

[8] Server -> Gateway (nonce(Na4)) : <Server.nonce(Na4).aenc{<Server.nonce(Na4)>}sk(Server)>;
[9] Gateway-> Host () :    <Server.nonce(Na4).aenc{<Server.nonce(Na4)>}sk(Server)>
}
Environment:{
[agent1] Host [1] : <HostID.GatewayIP.nonce(Na2)>;
[agent2] Gateway [1] : <HostID.ServerIP.GatewayIP.nonce(Na1)>;
[agent3] Server [1] : <HostID.GatewayIP.ServerIP.nonce(Na3).nonce(Na4)>
}
Goals:{
[auth1] Host non-injectively agrees with Gateway on nonce(Na1);
[auth2] Host non-injectively agrees with Gateway on nonce(Na2);
[auth3] Host non-injectively agrees with Server on nonce(Na3)
}
end

