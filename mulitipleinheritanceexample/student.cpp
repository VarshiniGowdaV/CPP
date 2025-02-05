#include "student.h"
#include <iostream>
using namespace std;
student::student(int student_num,std::string student_name)
{
    m_student_num=student_num;
    m_student_name=student_name;
    std::cout<<"student constructor"<<std::endl;
}
student::~student()
{
    std::cout<<"student distructor"<<std::endl;
}
void student::display()
{
    cout<<"student_num:"<<m_student_num<<endl;
    cout<<"student_name:"<<m_student_name<<endl;

}
