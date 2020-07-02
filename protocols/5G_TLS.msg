Protocol 5G_TLS:
Knowledges:{
    UE : <UE.nonce(Rue)>;<UE.nonce(Rue1)>;<UE.SessionKey(Kseaf)>;<UE.string(SUPI)>;
  	 <UE.string(Methods-UE)>;<UE.string(Certificate-UE)>;<UE.string(H-HandShake-UE)>;
    NW : <NW.nonce(Rnw)>;<NW.string(Methods-NW)>;<NW.string(Certificate-NW)>;<NW.string(TLS-Start)>;
  	 <NW.string(H-HandShake-NW)>;<UE.string(SUPI)>;
}
Actions:{
[1] UE->NW () : aenc{<nonce(Rue).A>,<string(SUPI).A>}pk(NW);
[2] NW->UE () : <string.(TLS-Start).B>;
[3] UE->NW () : <nonce(Rue1).A>,<string(Methods-UE).B>;
[4] NW->UE () : <nonce(Rnw).B>,<NW.string(Methods-NW)>,<NW.string(Certificate-NW)>;
[5] UE->NW () : aenc{<SessionKey(Kseaf).A>,<UE.string(Certificate-UE)>,enc{<UE.string(H-HandShake-UE)>}Kseaf;
[6] NW->UE () : enc{<NW.string(H-HandShake-NW)>}Kseaf
}
Environment:{

}
Goals:{
[secrecy] SessionKey(Kseaf);
[weak] NW non-injectively agrees with UE on string(SUPI)
}
end
