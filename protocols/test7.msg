Protocol CCITTX509_3:
Knowledges:{
    A : <A.B.nonce(Na).nonce(Xa).nonce(Ya)>;
    B : <B.nonce(Nb).nonce(Xb).nonce(Yb)>
}
Actions:{
[1] A->B (nonce(Xa)) : <A.aenc{<nonce(Na).B.nonce(Xa).aenc{nonce(Ya)}pk(B)>}sk(A)>;
[2] B->A (nonce(xb)) : <B.aenc{<nonce(Nb).A.nonce(Na).nonce(Xb).aenc{nonce(Yb)}pk(A)>}sk(B)>;
[3] A->B () : <A.aenc{nonce(Nb)}sk(A)>
}
Environment:{
[agent1] A [1] : <Alice.Bob.nonce(Na).nonce(Xa1).nonce(Ya1)>;
[agent2] B [1] : <Bob.nonce(Nb).nonce(Xb1).nonce(Yb1)>
}
Goals:{
[sec1] nonce(Ya) keep confidential between A and B;
[auth1] B non-injectively agrees with A on nonce(Ya);
[auth2] A non-injectively agrees with B on nonce(Yb)
}
end
