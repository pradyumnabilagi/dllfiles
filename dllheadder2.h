
#ifndef dllheadder2_H
#define dllheadder2_H
namespace dllspec2{
class dllclass2{
public:
    static __declspec(dllexport) int dllfunc1(int a,int b);
    static __declspec(dllexport) int dllfunc2(int a,int b);
};
}


#endif // dllheadder2_H
