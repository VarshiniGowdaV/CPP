#ifndef BENZ_H
#define BENZ_H
#include "car.h"

class Benz:public Car
{
public:
    Benz(std::string modle,std::string type);
    ~Benz();
};

#endif // BENZ_H
