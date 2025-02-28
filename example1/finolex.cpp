#include "finolex.h"
#include "ac.h"
#include <iostream>
using namespace std;

finolex::finolex()
{
    cout<<"finolex constructor called"<<endl;
}
finolex::~finolex()
{
    cout<<"finolex destructor called "<<endl;
}
void finolex::setac(Ac *ac)
{
    acptr = ac;
}
void finolex::wireOn()
{
    cout<<"finolex wire on"<<endl;
    acptr->acOn();
}
