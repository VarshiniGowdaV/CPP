#include "benz.h"
#include "car.h"
#include <iostream>
using namespace std;
Benz::Benz(int num,std::string name)
{
    cout<<"Benz constructor called"<<endl;
}
Benz::Benz()
{
    cout<<"Benz destructor called "<<endl;
}
Benz::~Benz()
{
    cout<<"Benz destructor called"<<endl;
}
void Benz::display1(Car &c)
{
    c.m_num = 2345;
    c.m_name = "benz";
    cout<<"num:"<<c.m_num<<endl;
    cout<<"name:"<<c.m_name<<endl;
}
void Benz::display2()
{
    cout<<"display2 called"<<endl;
}
