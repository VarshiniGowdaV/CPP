#include "student.h"
#include <iostream>
using namespace std;
Student::Student(std::string studentID, std::string studentname, int studentNumber00)
{
    cout<<"Student constructor called"<<endl;
}
Student::~Student()
{
    cout<<"Student destructor called"<<endl;
}
