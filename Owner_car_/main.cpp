#include "owner.h"
#include "driver.h"
#include <iostream>
using namespace std;

int main()
{
    Owner *owner = new Owner();
    Driver *driver = new Driver;

    driver->setName("Varshini");
    owner->assignDriver(driver);

    delete driver;
    delete owner;
    return 0;
}
