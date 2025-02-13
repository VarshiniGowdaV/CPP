#include "person.h"
#include<iostream>
using namespace std;
template<typename V,typename G>
Person<V,G>::Person()
{

}
template<typename V,typename G>
V Person<V,G>::add(V a, V b)
{
    return a+b;
}
template class Person<std::string,int>;
template<typename V,typename G>
G Person<V,G>::sub(G a, G b)
{
    return a-b;
}
