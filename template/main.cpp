#include <iostream>
#include "car.h"
using namespace std;
// template <typename T>
// T add(T a,T b)
// {
//     auto sum = a+b;
//     return sum;
// }
// int main()
// {
//     auto a=20,b=40;
//     auto sum = add<int>(a,b);
//     cout<<"sum:"<<sum<<endl;
// }
int main()
{
    Car car;
    auto C=car.add<int>(20,30);
    cout<<C<<endl;

    Car car1;
    auto D=car1.sub<int>(40,30);
    cout<<D<<endl;

    Car car2;
    auto E=car2.add<int>(10,20,30);
    cout<<E<<endl;

    Car car3;
    auto F=car3.name<string>("Varshini","Gowda");
    cout<<F<<endl;

    Car carb;
    auto B=carb.add<double>(10.5,20.6,30);
    cout<<B<<endl;
}
