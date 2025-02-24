#ifndef BENZ_H
#define BENZ_H
//#include "car.h"
#include <iostream>
class Car;
class Benz
{
public:
    Benz(int num,std::string name);
    Benz();
    ~Benz();
    void display1(Car &c);
    void display2();
};

#endif // BENZ_H
