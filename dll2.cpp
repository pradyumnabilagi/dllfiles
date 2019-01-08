#include<iostream>
using namespace std;
#include"dllheadder.h"
#include"dllheadder2.h"

namespace dllspec2{
 int dllclass2::dllfunc1(int a,int b)
 { int c;
     c=dllspec1::dllclass1::func2(a,b);
    return c;
 }
 int dllclass2::dllfunc2(int a,int b)
 {
     int c;
     c=a+b;
     return c;
 }
}
