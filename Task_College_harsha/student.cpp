#include "student.h"
#include <iostream>
using namespace std;
Student::Student()
{
    cout<<"Student constructor called"<<endl;
}
Student::Student(int id, string name, string department)
{
    m_id=id;
    m_name=name;
    m_department=department;
}
int Student::getid()
{
    return m_id;
}
std::string Student::getname()
{
    return m_name;
}
std::string Student::getdepartment()
{
    return m_department;
}
void Student::setstudentdetails(std::string name,std::string department)
{
    m_name=name;
    m_department=department;
}
Student::~Student()
{
    cout<<"Staff destructor called"<<endl;
}
