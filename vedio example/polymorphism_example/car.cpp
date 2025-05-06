#include "car.h"
#include <iostream>
using namespace std;
Car::Car(int wheels, std::string name):m_wheels(wheels),m_name(name)
{
    cout<<"car constructor called"<<endl;
}
Car::~Car()
{
    cout<<"car condtructor called"<<endl;
}
void Car::display()
{
    cout<<"wheels:"<<m_wheels<<endl;
    cout<<"name:"<<m_name<<endl;
    cout<<"Car display called"<<m_wheels<<endl;
}
