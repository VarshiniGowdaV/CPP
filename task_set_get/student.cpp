#include "student.h"
#include <iostream>
using namespace std;
student::student(std::string name,int age)
{
    m_name=name;
    m_age = age;
    std::cout<<"student constructor called"<<std::endl;
}
student::~student()
{
    std::cout<<"student distructor called"<<std::endl;
}
void student::setname(string name)
{
    m_name = name;
}
string student::getname()
{
    return m_name;
}
void student::setage(int age)
{
    m_age = age;
}
int student::getage()
{
    return m_age;
}
