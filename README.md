# securityProtocols
NS协议compiler，可以编译协议的动作，并输出Alice和Bob的串自动机形式
# how?
 终端输入：  
 $ corebuild -use-menhir test.native   
 $ ./test.native  test1.msg  
   
   2019-10-29  
 修改了actions2.ml文件，新增了消息编译部分。  
 如何运行：  
 终端输入： corebuild actions2.byte ，然后输入：./actions2.byte  
 修改了原来的action类型，涉及到actions.ml，parser.mly和lexer.mll文件，可以使用命令：  
  $ corebuild -use-menhir test.native   
  $ ./test.native  test1.msg   
  来运行

 
