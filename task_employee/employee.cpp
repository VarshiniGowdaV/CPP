#include "employee.h"
namespace pthinks
{
Employee::Employee(int age,std::string name)
{
    m_age=age;
    m_name=name;
    cout<<"Employee constructor called"<<endl;
}
Employee::Employee()
{
    cout<<"Employee constructor called"<<endl;
}
Employee::~Employee()
{
     cout<<"Employee distructor called"<<endl;
}
}
