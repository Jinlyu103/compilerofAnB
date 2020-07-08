Protocol RPC:
Knowledges:{
    A : <A.B.nonce(Na)>;
    B : <B.nonce(Nb).nonce(Nb1).nonce(Kab)>
}
Actions:{
[1] A->B (nonce(Na)) : <A.senc{nonce(Na)}k(A,B)>;
[2] B->A (nonce(Nb)) : senc{<nonce(Na).nonce(Nb)>}k(A,B);
[3] A->B () : senc{nonce(Nb)}k(A,B);
[4] B->A (nonce(Nb1)) : senc{<nonce(Kab).nonce(Nb1)>}k(A,B)
}
Environment:{
[agent1] A [1] : <Alice.Bob.nonce(na)>;
[agent2] B [1] : <Bob.nonce(nb).nonce(nb1).nonce(kab)>
}
Goals:{
[secrecy1] nonce(Kab) keep confidential between B and A
}
end
