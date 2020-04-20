# how?
 终端输入：  
 $ corebuild -use-menhir test.native   
 $ ./test.native  test2.msg    
 Then a new file with name result.m will be generated in folder outputs.   
# Murphi model checker:
 in outputs folder, terminal:  
 $ /your murphi-path/src/mu result.m   
Then a C++ file will be generated with name result.cpp.  
 $ g++ result.cpp -I /your murphi-path/include   
Then an executing file with name a.out will be generated.  
 $ ./a.out
Finally you will see the verification results on the terminal.  
   
