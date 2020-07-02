Protocol NSPK:
Knowledges:{
    A : <A.B.nonce(Na)>;
    B : <B.nonce(Nb)>
}
Actions:{
[1] A->B (nonce(Na)) : aenc{<nonce(Na).A>}pk(B);
[2] B->A (nonce(Nb)) : aenc{<nonce(Na).nonce(Nb)>}pk(A);
[3] A->B () : aenc{nonce(Nb)}pk(B)
}
Environment:{
[agent1] A [1] : <Alice.Intruder.nonce(Na)>;
[agent2] B [1] : <Bob.nonce(Nb)>
}
Goals:{
[secrecy] nonce(Nb);
[weakB] B non-injectively agrees with A on nonce(Na)
}
end
