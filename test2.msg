Protocol NSPK:
Knowledges:{
    A : <A.B.nonce(Na)>;
    B : nonce(Nb);
    I : B
}
Actions:{
[seq1] A->I (n1) : aenc{<nonce(Na).A>}pk(I);
[seq2] I->B (n2) : aenc{<nonce(Na).A>}pk(B);
[seq3] B->A (n3) : aenc{<nonce(Na).nonce(Nb)>}pk(A);
[seq4] A->I (n4) : aenc{nonce(Nb)}pk(I);
[seq5] I->B (n5) : aenc{nonce(Nb)}pk(B)
}
end
