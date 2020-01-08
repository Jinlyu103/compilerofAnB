Protocol NSPK:
Knowledges:{
    A : <A.B.nonce(Na)>;
    B : <B.nonce(Nb)>
}
Actions:{
[seq1] A->B (n1) : aenc{<nonce(Na).A.timestamp(107)>}pk(B);
[seq2] B->A (n2) : aenc{<nonce(Na).nonce(Nb)>}pk(A);
[seq3] A->B (n3) : aenc{nonce(Nb)}pk(B)
}
Environment:{
[agent1] A [1] : <Alice.Intruder.nonce(A1Na)>;
[agent2] B [1] : <Bob.nonce(B1Nb)>;
[agent3] B [2] : <Intruder.nonce(B2Nb)>
}
Goals:{
[sec] nonce(Nb);

[auth] event array
}
end
