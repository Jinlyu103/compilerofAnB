Protocol CCITTX509:
Knowledges:{
    A : <A.B.nonce(Xa).nonce(Ya)>;
    B : <A>
}
Actions:{
[1] A->B () : <A.aenc{<B.nonce(Xa).aenc{nonce(Ya)}pk(B)>}sk(A)>
}
Environment:{
[agent1] A [1] : <Alice.Bob.nonce(X1).nonce(Y1)>;
[agent2] B [1] : <Alice>
}
Goals:{
[sec1] nonce(Y1);
[auth1] B non-injectively agrees with A on nonce(Ya)
}
end
