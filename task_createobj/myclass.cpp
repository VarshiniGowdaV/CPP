#include "myclass.h"
#include <iostream>
using namespace std;
myclass::myclass(int num)
{
    m_num=num;
    cout<<"myclass constructor called"<<endl;
}
myclass::~myclass()
{
    cout<<"myclass distructor called"<<endl;
}
void myclass::displayNumber()
{
     cout<<"The number is: " <<m_num<< endl;
}
