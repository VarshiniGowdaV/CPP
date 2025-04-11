#ifndef OWNER_H
#define OWNER_H
#include "car.h"
#include "driver.h"

class Owner
{
private:
    Car *m_car;
public:
    Owner();
    ~Owner();
    void assignDriver(Driver *d);
};

#endif
