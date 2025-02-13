#include <iostream>
using namespace std;
inline  min(int a,int b)
{
    return a<b ;
}
inline max(int a,int b,int c)
{
    return a+b+c;
}
int main()
{
    cout<<min(20,30);
    cout<<max(10,20,30);
    return 0;
}
