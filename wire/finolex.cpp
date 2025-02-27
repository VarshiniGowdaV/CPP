#include "finolex.h"
#include <iostream>
using namespace std;
Finolex::Finolex()
{
    cout<<"Finolex constructor called"<<endl;
}
Finolex::~Finolex()
{
    cout<<"Finolex destructor called"<<endl;
    delete a;
}
