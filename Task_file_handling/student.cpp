#include "student.h"

Student::Student()
{
    cout<<"default student constructor called"<<endl;
}
Student::~Student()
{
    cout<<"student destructor called "<<endl;
}
Student::Student(string name, int age, string usn, string mobile_number)
{
    m_name=name;
    m_age=age;
    m_usn=usn;
    m_mobile_number=mobile_number;
   // cout<<"parameter constructor called "<<endl;

}
void Student::display()
{
    cout<<m_name<<" "<<m_age<<" "<<m_usn<<" "<<m_mobile_number<<" "<<endl;
}
