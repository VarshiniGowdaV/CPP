#include "car.h"
#include<iostream>
using  namespace std;
Car::Car(int carnum,std::string name)
{
    m_carnum=carnum;
    m_name = name;
    cout<<"Car constructor called"<<endl;
}
Car::Car()
{
    cout<<"Car default constructor called"<<endl;
}
Car::~Car()
{
    cout<<"Car distructor called"<<endl;
}
void Car::func1()
{
    cout<<"func1 called"<<endl;
}
