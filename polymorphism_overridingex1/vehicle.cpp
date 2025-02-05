#include "vehicle.h"
#include <iostream>
using namespace std;
vehicle::vehicle()
{
    cout<<"default constructor called"<<endl;
}
vehicle::~vehicle()
{
    cout<<"distructor called"<<endl;
}
void vehicle::fuelfunc(string fuel)
{
    cout<<"vehicle class fuel function called"<<endl;
}
