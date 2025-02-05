#include "teacher.h"
#include <iostream>
using namespace std;
teacher::teacher(int teacher_num,std::string teacher_name)
{
    m_teacher_num = teacher_num;
    m_teacher_name = teacher_name;
    std::cout<<"teacher constructor"<<std::endl;
}
teacher::~teacher()
{
    std::cout<<"teacher distructor"<<std::endl;
}
void teacher::display()
{
    cout<<"teacher_num:"<<m_teacher_num<<endl;
    cout<<"teacher_name:"<<m_teacher_name<<endl;

}
