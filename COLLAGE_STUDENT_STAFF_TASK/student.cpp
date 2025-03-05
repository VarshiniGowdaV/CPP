#include "student.h"
#include <iostream>
using namespace std;
Student::Student(int id, std::string name, int age,std::string department,std::string mobile_number,std::string address)
{
    cout<<"Student constructor called"<<endl;
}
Student::~Student()
{
    cout<<"Student destructor called"<<endl;
}
