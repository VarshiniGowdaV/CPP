#include "person.h"

person::person(std::string name,int age)
{
    m_name=name;
    m_age=age;
    cout<<"person constructor called"<<endl;
}
person::~person()
{
    cout<<"person distructor called"<<endl;
}
void person::setname(string name)
{
    m_name=name;
}
string person::getname()
{
    return m_name;
}
void person::setage(int age)
{
    m_age=age;
}
int person::getage()
{
    return m_age;
}
