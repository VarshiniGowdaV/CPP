#include "person.h"
#include <iostream>
using namespace std;
Person::Person(std::string name,int age)
{
    m_name=name;
    m_age=age;
    cout<<"person constructor called"<<endl;
}
Person::~Person()
{
    cout<<"person distructor called"<<endl;
}
void Person::setname(string name)
{
    m_name=name;
}
string Person::getname()
{
    return m_name;
}
void Person::setage(int age)
{
    m_age=age;
}
int Person::getage()
{
    return m_age;
}
