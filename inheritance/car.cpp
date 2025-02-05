#include "car.h"
#include <iostream>
Car::Car()
{
    cout<<"constructor is car called "<<endl;
    m_a = 10;
    m_carnum = 1200;
}
Car::~Car()
{
     cout<<"distructor is car called "<<endl;
}

