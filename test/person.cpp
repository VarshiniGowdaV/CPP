#include "person.h"
template<typename V,typename G>
Person<V,G>::Person()
{

}
template<typename V,typename G>
V Person<V,G>::add(V a, V b)
{
    return a+b;
}
template class Person<int,int>;
template class Person<int,double>;
template class Person<double,double>;
template class Person<double,int>;

// template<typename V,typename G>
// G Person<V,G>::display(G c, G d)
// {
//     return c+d;
// }
