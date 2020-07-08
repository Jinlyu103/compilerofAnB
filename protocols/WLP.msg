Protocol WooLamPif:
Knowledges:{
    A : <A.B.k(A,S)>;
    B : <B.nonce(Nb).k(B,S)>;
    S : <S.k(A,S).k(B,S)>
}
Actions:{
[1] A->B () : A;
[2] B->A (nonce(Nb)) : nonce(Nb);
[3] A->B () : senc{<A.B.nonce(Nb)>}k(A,S);
[4] B->S () : senc{<A.B.nonce(Nb).senc{<A.B.nonce(Nb)>}k(A,S)>}k(B,S);
[5] S->B () : senc{<A.B.nonce(Nb)>}k(B,S)
}
Environment:{
[agent1] A [1] : <Alice.Intruder.k(Alice,Server)>;
[agent2] B [1] : <Bob.nonce(nb).k(Bob,Server)>;
[agent3] S [1] : <Server.k(Alice,Server).k(Bob,Server)>
}
Goals:{
[weakB] A non-injectively agrees with B on nonce(Nb)
}
end
