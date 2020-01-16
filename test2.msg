Protocol NSPK:
Knowledges:{
    A : <A.B.nonce(Na)>;
    B : <B.nonce(Nb)>
}
Actions:{
[seq1] A->B (n1) : aenc{<nonce(Na).A>}pk(B);
[seq2] B->A (n2) : aenc{<nonce(Na).nonce(Nb)>}pk(A);
[seq3] A->B (n3) : aenc{nonce(Nb)}pk(B)
}
Environment:{
[agent1] A [1] : <Alice.Bob.nonce(Na)>;
[agent2] B [1] : <Bob.nonce(Nb)>
}
Goals:{
[sec1] nonce(Nb);
[sec2] nonce(Na);
[auth1] B non-injectively agrees with A on nonce(Na)
}
end
