#include <iostream>
#include<conio.h>
using namespace std;
#include"dllheadder.h"
#include"dllheadder2.h"
int main()
{
    int a,b,c;
    cin >>a;
    cin>>b;
    c=dllspec1::dllclass1::func1(a,b);
    cout<<"from dll1 "<<c<<endl;
    c=dllspec2::dllclass2::dllfunc2(a,b);
    cout<<"from dll2 "<<c<<endl;
    cin>>a;
    cin>>b;
    c=dllspec2::dllclass2::dllfunc1(a,b);
    cout<<"from dll2 "<<c<<endl;
    c=dllspec1::dllclass1::func2(a,b);
    cout<<"from dll1 "<<c<<endl;
    getch();
    return 0;
}
