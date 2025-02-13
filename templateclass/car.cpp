#include "car.h"
template<typename A,typename B>
Car<A,B>::Car()
{

}
template<typename A,typename B>
A Car<A,B>::add(A a, A b)
{
    return a+b;
}
template class Car<int,double>;

template<typename A,typename B>
B Car<A,B>::sub(B c, B d)
{
    return c-d;
}
