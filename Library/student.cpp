#include "student.h"

Student::Student()
{
    cout<<"Student default constructor called"<<endl;
}
Student::Student(string name)
{
    m_name=name;
    cout<<"Student parameter constructor called"<<endl;
}
Student::~Student()
{
    cout<<"Student destructor called"<<endl;
}
string Student::getname()
{
    return m_name;
}
void Student ::setstudentname(string name)
{
    m_name=name;
}
