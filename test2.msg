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
[agent] Alice,Bob,Intruder;
[exposed] Intruder;
[nonce] A1Na, B1Nb, B2Nb;
[agent1] A1 : <Alice.Intruder.A1Na>;
[agent2] B1 : <Bob.B1Nb>;
[agent3] B2 : <Intruder.B2Nb>
}
end
