Protocol ACCAU:
Knowledges:{
	Host : <Host.Gateway>;
	Gateway : <Host.Server.Gateway>;
	Server : <Host.Gateway.Server.nonce(r).nonce(HostIP).nonce(hostipsk)>
}
Actions:{
[1] Host -> Gateway   () : <Host.aenc{<Host>}sk(Host)>;
[2] Gateway -> Server () : <Host.aenc{<Host>}sk(Host)>;

[3] Server -> Gateway  () : <nonce(r).aenc{<nonce(r)>}sk(Server)>;
[4] Gateway-> Host     () : <nonce(r).aenc{<nonce(r)>}sk(Server)>;

[5] Host -> Gateway    () : <nonce(r).aenc{<nonce(r)>}sk(Host)>;
[6] Gateway -> Server  () : <nonce(r).aenc{<nonce(r)>}sk(Host)>;

[7] Server -> Gateway () : <nonce(HostIP).aenc{nonce(hostipsk)}pk(Host).aenc{<nonce(HostIP).aenc{nonce(hostipsk)}pk(Host)>}sk(Server)>;
[8] Gateway -> Host   () : <nonce(HostIP).aenc{nonce(hostipsk)}pk(Host).aenc{<nonce(HostIP).aenc{nonce(hostipsk)}pk(Host)>}sk(Server)>
}
Environment:{
[agent1] Host [1]    : <HostID.GatewayIP>;
[agent2] Gateway [1] : <HostID.ServerIP.GatewayIP>;
[agent3] Server [1]  : <HostID.GatewayIP.ServerIP.nonce(Na).nonce(HostIP).nonce(secSK)>
}
Goals:{
[sec1] nonce(secSK);
[auth1] Server non-injectively agrees with Host on nonce(r)
}
end

