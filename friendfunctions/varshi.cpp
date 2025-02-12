#include "varshi.h"
#include "person.h"
#include <iostream>
using namespace std;
Varshi::Varshi(int age,std::string name)
{
    cout<<"varshi constructor called"<<endl;
}
Varshi::Varshi()
{
    cout<<"varshi default constructor called"<<endl;
}
Varshi::~Varshi()
{
    cout<<"varshi distructor called"<<endl;
}
void Varshi::func2(Person &p)
{
    p.m_age = 20;
    p.m_name = "varshi";
    cout<<"age:"<<p.m_age<<endl;
    cout<<"name:"<<p.m_name<<endl;
}
void Varshi::func3()
{
    cout<<"func3 called"<<endl;
}
