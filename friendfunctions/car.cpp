#include "car.h"
#include <iostream>
using namespace std;
Car::Car(int num,std::string name)
{
    m_num=num;
    m_name=name;
    cout<<"car constructor called"<<endl;
}
Car::Car()
{
    cout<<"default constructor called"<<endl;
}
Car::~Car()
{
    cout<<"car destructor called"<<endl;
}
void Car::display()
{
    cout<<"display called"<<endl;
}

