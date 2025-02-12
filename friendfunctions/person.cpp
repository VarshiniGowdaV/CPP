#include "person.h"
#include <iostream>
using namespace std;
Person::Person()
{
    cout<<"default constructor called "<<endl;
}
Person::Person(int age, string name)
{
    m_age=age;
    m_name=name;
    cout<<"person constructor called"<<endl;
}
Person::~Person()
{
    cout<<"distructor called "<<endl;
}
void Person::func1()
{
    cout<<"func1 called"<<endl;
}
