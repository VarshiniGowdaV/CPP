#include "staff.h"
#include <iostream>
using namespace std;
Staff::Staff()
{
    cout<<"Staff constructor called"<<endl;
}
Staff::Staff(int id, string name, string department)
{
    m_id=id;
    m_name=name;
    m_department=department;
}
int Staff::getid()
{
    return m_id;
}
std::string Staff::getname()
{
    return m_name;
}
std::string Staff::getdepartment()
{
    return m_department;
}
void Staff::setstaffdetails(std::string name,std::string department)
{
    m_name=name;
    m_department=department;
}
Staff::~Staff()
{
    cout<<"Staff destructor called"<<endl;
}
