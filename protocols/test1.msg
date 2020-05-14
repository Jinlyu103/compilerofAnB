Protocol NSPK:
Knowledges:{
    A : <A.B.nonce(Na)>;
    B : <B.nonce(Nb)>
}
Actions:{
[1] A->B (n1) : aenc{<nonce(Na).A>}pk(B);
[2] B->A (n2) : aenc{<nonce(Na).nonce(Nb)>}pk(A);
[3] A->B (n3) : aenc{nonce(Nb)}pk(B)
}
end
