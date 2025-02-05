#include <iostream>
#include "number.h"
using namespace std;

int main()
{
    number obj1(10);
    number obj2(20);
    number obj3(obj1);
    obj3.add(obj2);

}
