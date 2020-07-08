Protocol DS_sharedKey:
Knowledges:{
    A : <A.B.S.k(A,S)>;
    B : <B.S.k(B,S)>;
    S : <A.B.S.k(A,S).k(B,S).k(A,B).nonce(T)>
}
Actions:{
[1] A->S () : <A.B>;
[2] S->A (nonce(T)) : senc{<B.k(A,B).nonce(T).senc{<k(A,B).A.nonce(T)>}k(B,S)>}k(A,S);
[3] A->B () : senc{<k(A,B).A.nonce(T)>}k(B,S)
}
Environment:{
[agent1] A [1] : <Alice.Bob.Server.k(Alice,Server)>;
[agent2] B [1] : <Bob.Server.k(Bob,Server)>;
[agent3] S [1] : <Alice.Bob.Server.k(Alice,Server).k(Bob,Server).k(Alice,Bob).nonce(t)>
}
Goals:{
[secrecy1] k(Alice,Bob)
}
end
