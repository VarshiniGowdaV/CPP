#include <iostream>
#include "vehicle.h"
#include "car.h"
#include "bike.h"
using namespace std;

int main()
{
    vehicle *ptr;

    car c;
    ptr=&c;
    ptr->fuelfunc("diesel");

    bike b;
    ptr=&b;
    ptr->fuelfunc("petrol");

    return 0;
}
