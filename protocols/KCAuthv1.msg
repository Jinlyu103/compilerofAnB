Protocol KCAuthv1:
Knowledges:{
    A : <A.B.S.k(A,S).nonce(Na)>;
    B : <B.S.k(S,B).nonce(Nb)>;
    S : <A.B.S.k(A,S).k(S,B).k(A,B)>
}
Actions:{
[1] A->S (nonce(Na)) : <A.B.nonce(Na)>;
[2] S->B () : <senc{<A.B.nonce(Na).k(A,B)>}k(A,S).senc{<A.B.nonce(Na).k(A,B)>}k(S,B)>;
[3] B->A (nonce(Nb)) : <senc{<A.B.nonce(Na).k(A,B)>}k(A,S).senc{nonce(Na)}k(A,B).nonce(Nb)>;
[4] A->B () : senc{nonce(Nb)}k(A,B)
}
Environment:{
[agent1] A [1] : <Alice.Bob.Server.k(Alice,Server).nonce(na)>;
[agent2] B [1] : <Bob.Server.k(Server,Bob).nonce(nb)>;
[agent3] S [1] : <Alice.Bob.Server.k(Alice,Server).k(Server,Bob).k(Alice,Bob)>
}
Goals:{
[secrecy1] k(Alice,Bob);
[weakB] A non-injectively agrees with B on nonce(Nb)
}
end
