// #include "add.h"
// #include <iostream>
// using namespace std;
// add::add()
// {
//     std::cout<<"constructor called"<<std::endl;
// }
// add::add(int num1,int num2)
// {
//     m_num1=num1;
//     m_num2=num2;
//     std::cout<<"constructor called"<<std::endl;
// }
// add add::operator +(const add &a3)
// {
//     add result;
//     result.m_num1 = this->m_num1+a3.m_num1;
//     result.m_num2 = this->m_num2+a3.m_num2;
//     return result;
// }
// void add::addme()
// {
//     cout<<"m_num1:"<<this->m_num1<<endl;
//     cout<<"m_num2:"<<this->m_num2<<endl;
// }

// add add::operator -(const add &a4)
// {
//     add result;
//     result.m_num1 = this->m_num1-a4.m_num1;
//     result.m_num2 = this->m_num2-a4.m_num2;
//     return result;
// }
// void add::subme()
// {
//     cout<<"m_num1:"<<this->m_num1<<endl;
//     cout<<"m_num2:"<<this->m_num2<<endl;
// }
// add add::operator *(const add &a5)
// {
//     add result;
//     result.m_num1 = this->m_num1*a5.m_num1;
//     result.m_num2 = this->m_num2*a5.m_num2;
//     return result;
// }
// void add::mulme()
// {
//     cout<<"m_num1:"<<this->m_num1<<endl;
//     cout<<"m_num2:"<<this->m_num2<<endl;
// }
// add add::operator /(const add &a6)
// {
//     add result;
//     result.m_num1 = this->m_num1/a6.m_num1;
//     result.m_num2 = this->m_num2/a6.m_num2;
//     return result;
// }
// void add::divme()
// {
//     cout<<"m_num1:"<<this->m_num1<<endl;
//     cout<<"m_num2:"<<this->m_num2<<endl;
// }
// bool add::operator>=(const add &obj)
// {
//     return (this->m_num1 >= obj.m_num1) && (this->m_num2 >= obj.m_num2);
// }

// bool add::operator<=(const add &obj)
// {
//     return (this->m_num1 <= obj.m_num1) && (this->m_num2 <= obj.m_num2);
// }

// bool add::operator==(const add &obj)
// {
//     return (this->m_num1 == obj.m_num1) && (this->m_num2 == obj.m_num2);
// }
// add::~add()
// {
//   std::cout<<"distructor called"<<std::endl;
// }
