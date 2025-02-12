#include <iostream>
using namespace std;
#include "car.h"

int main()
{
    Car myCar;
    myCar.carStart();
    myCar.accelerater();
    myCar.applyBreak();
    myCar.carStop();
    return 0;
}
