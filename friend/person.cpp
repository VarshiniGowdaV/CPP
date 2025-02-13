#include "person.h"
#include <iostream>
using namespace std;
Person::Person(int age, std::string name,std::string phnum)
{
    m_age=age;
    m_name=name;
    ////cout<<"constructor called"<<endl;
}
Person::Person()
{
    //cout<<"default constructor called"<<endl;
}
Person::~Person()
{
     //cout<<"distructor called"<<endl;
}
void Person::func1()
{
    cout<<"func1 called"<<endl;
}
