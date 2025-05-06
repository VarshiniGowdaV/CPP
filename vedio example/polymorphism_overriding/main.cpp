#include <iostream>
#include "bike.h"
#include "vechicle.h"
using namespace std;

int main()
{
    vechicle *ptr;
    bike b;
    ptr=&b;
    ptr->fuelfunc("petrol");
    return 0;
}
