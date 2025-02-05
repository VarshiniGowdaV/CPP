#include "phone.h"
#include <iostream>
using namespace std;
phone::phone(std::string ph_num,std::string ph_name)
{
    m_ph_num=ph_num;
    m_ph_name=ph_name;
    std::cout<<"phone constructor"<<std::endl;
}
phone::~phone()
{
    std::cout<<"phone distructor"<<std::endl;
}
void phone::makecall()
{

}
void phone::display()
{
    cout<<"phone:"<<m_ph_num<<endl;
    cout<<"phone:"<<m_ph_name<<endl;
}
