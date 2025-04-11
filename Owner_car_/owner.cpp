#include "owner.h"
#include "car.h"
#include <iostream>

Owner::Owner()
{
    std::cout<<"Owner Constructor Called"<<std::endl;
    this->m_car =new Car;
}

Owner::~Owner()
{
    std::cout<<"Owner Destructor Called"<<std::endl;
}

void Owner::assignDriver(Driver *d)
{
    std::cout<<"Assigndriver function called"<<std::endl;
    this->m_car->setDriver(d);
}
