#include "bag.h"
template<typename B>
Bag<B>::Bag()
{

}
template<typename B>
B Bag<B>::display(B u, B v)
{
    return u+v;
}
template class Bag<int>;
