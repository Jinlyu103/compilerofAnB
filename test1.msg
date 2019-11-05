Protocol CR:
Knowledges:{
    A : <A.B.nonce(Na)>;
    B : nonce(Nb)
}
Actions:{
[seq1] A->B (n1) : aenc{<nonce(Na).A>}pk(B);
[seq2] B->A (n2) : aenc{<nonce(Na).nonce(Nb)>}pk(A);
[seq3] A->B (n3) : aenc{nonce(Nb)}pk(B)
}
end
