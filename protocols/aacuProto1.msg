Protocol ACCAU:
Knowledges:{
	Host : <Host.Gateway>;
	Gateway : <Host.Server.Gateway>;
	Server : <Host.Gateway.Server.nonce(r).nonce(HostIP).nonce(hostipsk)>
}
Actions:{
[1] Host -> Gateway   () : <Host.Gateway.aenc{<Host.Gateway>}sk(Host)>;
[2] Gateway -> Server () : <Host.Gateway.aenc{<Host.Gateway>}sk(Host)>;

[3] Server -> Gateway  () : <Host.nonce(r).Server.aenc{<Host.nonce(r).Server>}sk(Server)>;
[4] Gateway-> Host     () : <Host.nonce(r).Server.aenc{<Host.nonce(r).Server>}sk(Server)>;

[5] Host -> Gateway    () : <Host.nonce(r).aenc{<Host.nonce(r)>}sk(Host)>;
[6] Gateway -> Server  () : <Host.nonce(r).aenc{<Host.nonce(r)>}sk(Host)>;

[7] Server -> Gateway () : <Host.nonce(HostIP).Gateway.aenc{nonce(hostipsk)}pk(Host).Server.aenc{<Host.nonce(HostIP).Gateway.aenc{nonce(hostipsk)}pk(Host).Server>}sk(Server)>;
[8] Gateway -> Host   () : <Host.nonce(HostIP).Gateway.aenc{nonce(hostipsk)}pk(Host).Server.aenc{<Host.nonce(HostIP).Gateway.aenc{nonce(hostipsk)}pk(Host).Server>}sk(Server)>
}
Environment:{
[agent1] Host [1]    : <HostID.GatewayIP>;
[agent2] Gateway [1] : <HostID.ServerIP.GatewayIP>;
[agent3] Server [1]  : <HostID.GatewayIP.ServerIP.nonce(Na).nonce(HostIP).nonce(secSK)>
}
Goals:{
[sec1] nonce(secSK);
[auth1] Host non-injectively agrees with Server on nonce(r)
}
end

