#include "wheel.h"
#include <iostream>
using namespace std;
Wheel::Wheel()
{
    cout<<"wheel constructor called"<<endl;
}
Wheel::~Wheel()
{
    cout<<"wheel distructor called"<<endl;
}
void Wheel::rotate()
{
cout << "Wheels are rotating." << endl;
}
