#include "bike.h"
template<typename D>
Bike<D>::Bike()
{

}
template<typename D>
D Bike<D>::add(D a, D b)
{
    return a+b;
}
template class Bike<int>;
