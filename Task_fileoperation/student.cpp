#include "student.h"
#include <iostream>
using namespace std;
Student::Student(std::string name,std::string moblienumber,int age,std::string usn)
{
    m_name=name;
    m_mobilenumber=moblienumber;
    m_age=age;
    m_usn=usn;
    cout<<"student constructor called "<<endl;
    cout<<"name: "<<m_name<<endl;
    cout<<"moblienumber: "<<m_mobilenumber<<endl;
    cout<<"age: "<<m_age<<endl;
    cout<<"usn: "<<m_usn<<endl;
}
Student::~Student()
{
    cout<<"student destructor called"<<endl;
}
