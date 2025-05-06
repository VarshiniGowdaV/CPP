#include "number.h"
#include <iostream>
using namespace std;
number::number()
{
    cout<<"default constructor called"<<endl;
}
number::~number()
{
    cout<<"distructor called"<<endl;
}
number::number(int value)
{
    m_value=value;
    cout<<"constructor called"<<endl;
}
void number::add(number obj)
{

    m_value=m_value+obj.m_value;
    cout<<"value:"<<m_value<<endl;
}

