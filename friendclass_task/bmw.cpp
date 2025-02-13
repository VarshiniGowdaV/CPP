#include "bmw.h"
#include "car.h"
#include <iostream>
using namespace std;
BMW::BMW()
{
    cout<<"BMW constructor called"<<endl;
}
BMW::~BMW()
{
    cout<<"BMW distructor called"<<endl;
}
void BMW::func2()
{
    c->m_carnum = 222;
    c->m_name = "BMW";
    cout<<"carnum:"<<c->m_carnum<<endl;
    cout<<"name:"<<c->m_name<<endl;
    cout<<"func2 called"<<endl;
}
void BMW::func3()
{
     cout<<"func3 called"<<endl;
}
