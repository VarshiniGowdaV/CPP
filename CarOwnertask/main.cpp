#include <iostream>
#include "car.h"
#include "driver.h"
#include "owner.h"

using namespace std;

int main()
{
    Driver* driver1 = new Driver/*("Raju", "KA07123", "kolar")*/;
    Owner* owner1 = new Owner/*("Veeranna", "123456789")*/;
    Car car;

    car.Driverforcar();
    owner1->assignDrivertocar(driver1);

    delete driver1;
    delete owner1;

    return 0;
}
