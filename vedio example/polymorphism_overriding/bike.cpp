#include "bike.h"
#include "vechicle.h"
#include <iostream>
using namespace std;
bike::bike()
{
    cout<<"default constructo called"<<endl;
}
bike::~bike()
{
    cout<<"default distructo called"<<endl;
}
void bike::fuelfunc(string fuel)
{
    cout<<"bike class fuel function called"<<endl;
}
