#include "havels.h"
#include <iostream>
using namespace std;
Havels::Havels()
{
    cout<<"Havels constructor called"<<endl;
}
Havels::~Havels()
{
    cout<<"Havels destructor called"<<endl;
    delete c;
}
