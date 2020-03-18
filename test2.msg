Protocol NSPK:
Knowledges:{
    A : <A.B.nonce(Na)>;
    B : <B.nonce(Nb)>
}
Actions:{
[seq1] A->B (nonce(Na)) : aenc{<nonce(Na).A>}pk(B);
[seq2] B->A (nonce(Nb)) : aenc{<nonce(Na).nonce(Nb)>}pk(A);
[seq3] A->B () : aenc{nonce(Nb)}pk(B)
}
Environment:{
[agent1] A [1] : <Alice.Intruder.nonce(Na)>;
[agent2] B [1] : <Bob.nonce(Nb)>
}
Goals:{
[sec1] nonce(Nb);
[auth1] Bob non-injectively agrees with Alice on nonce(Na)
}
end
