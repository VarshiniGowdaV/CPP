#ifndef CAR_H
#define CAR_H
#include "benz.h"
#include <iostream>
class Car
{
    int m_num;
    std::string n_name;
public:
    Car(int num,std::string name);
    Car();
    ~Car();
    void display();
    friend void Benz::display1(Car &c);
};

#endif // CAR_H
