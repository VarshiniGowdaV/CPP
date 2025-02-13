#include "car.h"
#include <iostream>
using namespace std;
Car::Car()
{
    cout<<"construtor called"<<endl;
}
template<typename T>
T Car::add(T a,T b)
{

    return a+b;
}
template int Car::add<int>(int,int);

template<typename g>
g Car::sub(g a,g b)
{
    return a-b;
}
template int Car::sub<int>(int,int);

template<typename A>
A Car::add(A a,A b,A c)
{
    return a+b+c;
}
template int Car::add<int>(int ,int ,int);

template<typename D>
D Car::name(D a,D b)
{
    return a+b;
}
template string Car::name<string>(string,string);

template<typename B,typename C>
B Car::add(B a,B b,C c)
{
    return a+b+c;
}
template double Car::add<double>(double,double,int);
