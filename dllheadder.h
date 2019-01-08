#ifndef dllheadder_H
#define dllheadder_H
namespace dllspec1{
class dllclass1{
public:
    static __declspec(dllexport) int func1(int a,int b);
    static __declspec(dllexport) int func2(int a,int b);
};

}


#endif // dllheadder_H
