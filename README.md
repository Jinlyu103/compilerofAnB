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
 然后修改了原来的action类型，涉及到actions.ml，parser.mly和lexer.mll文件，可以编译test1.msg里的actions。  
 使用命令：  
  $ corebuild -use-menhir test.native   
  $ ./test.native  test1.msg   
  来运行  
  2019-10-30  
  actions2.ml中实现了trans (act,m,i,rolename)
  
  11-2:
  更新了branch里的protocols.ml文件：   
  执行命令依然是：  
  $ corebuild -use-menhir test.native   
  $ ./test.native  test1.msg  
  关于protocols.ml：  
  加入了对knowledge的解析。另外输出action也作了修改：  
1、rolelist从knowledge中获取  
2、对每一个action求一下rolelist中角色的串，形成一个list1由action中的角色的串的list组成    
3、需要对上面的list1作一个转置操作（已经完成）
4、转置结束后形成角色串形成的list，在清除每一个角色串里的空动作（None）（已完成）  
5、可以编译test1.msg文件
