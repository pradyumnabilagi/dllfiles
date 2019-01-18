# dllfiles
main() calls functions from the dll files while exicution of .exe file.DLL files also call eachother.
  The namespace of dll1 is named as dllspec.And the class declared in it is called dllclass.
  The namespace od dll2 is named as dllspec2.And the class declared in it is called dllclass2.
 
 
   Run the exodll.exe ,enter any 2 numbers
   
   it will output the sum two times .first time by calling a function in dll1,second time by calling a function in dll2.when called first time the function in dll1 calls a function from dll2(the same function from dll2 which is called second time).

   it will again ask for two numbers and it will output the difference two times.
   
   first time by calling a function from dll2,second time by calling a function from dll1.when called first time the function in dll2 calls a function from dll1(the same function from dlll1 which is called second time).
   
   this was created in codeblocks.

   I have made a video on how to create dll file and use it in console application project in code block so check it out and please subscribe.
   link is:https://www.youtube.com/watch?v=OAZcStduW8o&t=10s
