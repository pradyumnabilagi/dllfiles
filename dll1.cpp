#include<iostream>

using namespace std;

#include"dllheadder.h"
#include"dllheadder2.h"
namespace dllspec1{
int dllclass1::func1(int a,int b){
   int c=0;
   c=dllspec2::dllclass2::dllfunc2(a,b);
   return c;
}
int dllclass1::func2(int a,int b){
   int c=0;
   c=a-b;
   return c;
}
}
