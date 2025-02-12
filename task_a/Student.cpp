#include "Student.h"
#include <iostream>
using namespace std;
Student::Student()
{
    cout<<"student constructor called"<<endl;
}
Student::Student(const Student &s1)
{
    this->a=new int(*s1.a);
    cout<<"copy const called"<<endl;
}
Student::~Student()
{
    cout<<"student distructor called"<<endl;
}
