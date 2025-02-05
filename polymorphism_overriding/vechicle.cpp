#include "vechicle.h"
#include <iostream>
using namespace std;
vechicle::vechicle()
{
 cout<<"default constructo called"<<endl;
}
vechicle::~vechicle()
{
    cout<<" distructo called"<<endl;
}
void vechicle::fuelfunc(string fuel)
{
    cout<<"vechicle class fuel function called"<<endl;
}
