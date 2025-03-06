#include "capital.h"
#include <iostream>
using namespace std;
Capital::Capital()
{
    cout<<"Capital constructor called"<<endl;
}
Capital::~Capital()
{
    cout<<"Capital destructor called"<<endl;
}
Capital::Capital(string capital)
{
    m_capital=capital;
}
