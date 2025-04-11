#ifndef CAR_H
#define CAR_H
#include "driver.h"

class Car
{
private:
    Driver *m_driver;
    std::string m_brand;
public:
    Car();
    ~Car();

    void setDriver(Driver *d);
    std::string getBrand();
    void setBrand(std::string newBrand);
};
#endif
