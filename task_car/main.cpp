#include <iostream>
using namespace std;
#include "car.h"

int main()
{
    Car myCar;
    myCar.insertKey();
    myCar.carStart();
    myCar.accelerater();
    myCar.applyBreak();
    myCar.carStop();
    myCar.keyremove();
    return 0;
}
