#include "car.h"
#include <iostream>

Car::Car():m_brand("suzuki")
{
    std::cout<<"Car Constructor Called"<<std::endl;
}

Car::~Car()
{
    std::cout<<"Car Destructor Called"<<std::endl;
}

void Car::setDriver(Driver *d)
{
    std::cout<<"Set driver function called"<<std::endl;
    this->m_driver=d;
    std::cout<<"Driver Name: "<<this->m_driver->getName()<<std::endl;
    std::cout<<"Car Brand: "<<getBrand()<<std::endl;
}

std::string Car::getBrand()
{
    return m_brand;
}

void Car::setBrand(std::string newBrand)
{
    m_brand = newBrand;
}
