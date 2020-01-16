# securityProtocols
NS协议compiler，可以编译协议的动作，并输出Alice和Bob的串自动机形式
# how?
 终端输入：  
 $ corebuild -use-menhir test.native   
 $ ./test.native  test2.msg > result.m   
 Then a new file with name result.m will be generated.   
# Murphi model checker:
 terminal:  
 $ /your murphi-path/src/mu result.m   
Then a C++ file will be generated with name result.cpp.  
 $ g++ result.cpp -I /your murphi-path/include   
Then an executing file with name a.out will be generated.  
 $ ./a.out
Finally you will see the verification results on the terminal.  
   
  关于protocols.ml：  
  加入了对knowledge的解析。另外输出action也作了修改：  
1、rolelist从knowledge中获取  
2、对每一个action求一下rolelist中角色的串，形成一个list1由action中的角色的串的list组成    
3、需要对上面的list1作一个转置操作（已经完成）
4、转置结束后形成角色串形成的list，在清除每一个角色串里的空动作（None）（已完成）  
5、可以编译test1.msg文件
