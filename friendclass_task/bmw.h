#ifndef BMW_H
#define BMW_H
#include "car.h"
#include <iostream>
class BMW
{
public:
    BMW();
    ~BMW();
    void func2();
    void func3();
    Car* c = new Car;
};

#endif // BMW_H
