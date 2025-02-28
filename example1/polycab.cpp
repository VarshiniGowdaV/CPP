#include "polycab.h"
#include "ac.h"
#include <iostream>
using namespace std;
polycab::polycab()
{
    cout<<"Wire default constructor called"<<endl;
}
polycab::~polycab()
{
    cout<<"Wire destructor called"<<endl;
}
void polycab::setac(Ac *ac)
{
    acptr=ac;
}
void polycab::wireOn()
{
    cout<<"polycab wire on"<<endl;
    acptr->acOn();
}
