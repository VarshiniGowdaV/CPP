#include "varshi.h"
#include "person.h"
#include <iostream>
using namespace std;
Varshi::Varshi()
{
    cout<<"constructor called"<<endl;
}
Varshi::~Varshi()
{
    cout<<"distructor called"<<endl;
}
void Varshi::func2()
{
    pers->m_age = 22;
    pers->m_name = "Varshi";
    cout<<"age:"<<pers->m_age<<endl;
    cout<<"name:"<<pers->m_name<<endl;
    cout<<"func2 called"<<endl;
}
void Varshi::func3()
{
    cout<<"func3 called"<<endl;
}
