Protocol OtwayRess:
Knowledges:{
    A : <A.B.nonce(Na).nonce(N).k(A,S)>;
    B : <B.S.nonce(Nb).k(B,S)>;
    S : <nonce(Kab).k(A,S).k(B,S)>
}
Actions:{
[1] A->B (nonce(Na))  : <nonce(N).A.B.senc{<nonce(Na).nonce(N).A.B>}k(A,S)>;
[2] B->S (nonce(Nb))  : <nonce(N).A.B.senc{<nonce(Na).nonce(N).A.B>}k(A,S).senc{<nonce(Nb).nonce(N).A.B>}k(B,S)>;
[3] S->B (nonce(Kab)) : <nonce(N).senc{<nonce(Na).nonce(Kab)>}k(A,S).senc{<nonce(Nb).nonce(Kab)>}k(B,S)>;
[4] B->A ()           : <nonce(N).senc{<nonce(Na).nonce(Kab)>}k(A,S)>
}
Environment:{
[agent1] A [1] : <Alice.Bob.nonce(na).nonce(n).k(Alice,Server)>;
[agent2] B [1] : <Bob.Server.nonce(nb).k(Bob,Server)>;
[agent3] S [1] : <nonce(kab).k(Alice,Server).k(Bob,Server)>
}
Goals:{
[secrecy1] nonce(kab)
}
end
