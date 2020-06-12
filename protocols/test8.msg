Protocol SPLICE:
Knowledges:{
    S : <S.AS.nonce(N3)>;
    C : <C.S.AS.nonce(N1).nonce(N2).nonce(T).nonce(L)>;
    AS: <AS>
}
Actions:{
[1] C->AS (nonce(N1)) : <C.S.nonce(N1)>;
[2] AS->C () : <AS.aenc{<AS.C.nonce(N1).pk(S)>}sk(AS)>;
[3] C->S  (nonce(N2)) : <C.S.aenc{<C.nonce(T).nonce(L).aenc{nonce(N2)}pk(S)>}sk(C)>;
[4] S->AS (nonce(N3)) : <S.C.nonce(N3)>;
[5] AS->S () : <AS.aenc{<AS.S.nonce(N3).pk(C)>}sk(AS)>;
[6] S->C  () : <S.C.aenc{<S.nonce(N2)>}pk(C)>
}
Environment:{
[agent1] S [1] : <s.as.nonce(n3)>;
[agent2] C [1] : <c.s.as.nonce(n1).nonce(n2).nonce(t).nonce(l)>;
[agent3] AS[1] : <as>
}
Goals:{
[sec2] nonce(N2) keep confidential between C and S;
[auth1] S non-injectively agrees with C on nonce(N2)
}
end
