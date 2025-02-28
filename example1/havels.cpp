#include "havels.h"
#include "ac.h"
#include <iostream>
using namespace std;
havels::havels()
{
    cout<<"havels constructor called"<<endl;
}
havels::~havels()
{
    cout<<"havels  destructor called"<<endl;
}
void havels::setac(Ac *ac)
{
    acptr = ac;
}
void havels::wireOn()
{
    cout<<"havels wire on"<<endl;
    acptr->acOn();
}
