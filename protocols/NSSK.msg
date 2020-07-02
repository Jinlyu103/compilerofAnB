Protocol NSSK:
Knowledges:{
    A : <A.B.S.nonce(Na).k(A,S)>;
    B : <B.S.nonce(Nb).k(B,S)>;
    S : <S.A.B.k(A,B).k(A,S).k(B,S)>
}
Actions:{
[1] A->S (nonce(Na)) : <A.B.nonce(Na)>;
[2] S->A () : senc{<nonce(Na).B.k(A,B).senc{<k(A,B).A>}k(B,S)>}k(A,S);
[3] A->B () : senc{<k(A,B).A>}k(B,S);
[4] B->A (nonce(Nb)) : senc{nonce(Nb)}k(A,B);
[5] A->B () : senc{nonce(Nb)}k(A,B)
}
Environment:{
[agent1] A [1] : <Alice.Bob.Server.nonce(Na).k(Alice,Server)>;
[agent2] B [1] : <Bob.Server.nonce(Nb).k(Bob,Server)>;
[agent3] S [1] : <Server.Alice.Bob.k(Alice,Bob).k(Alice,Server).k(Bob,Server)>
}
Goals:{
[secrecy] nonce(Nb);
[weakB] B non-injectively agrees with A on nonce(Na)
}
end
