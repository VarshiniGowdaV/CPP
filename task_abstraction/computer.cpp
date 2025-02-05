#include "computer.h"
#include "processor.h"
#include <iostream>
using namespace std;
Computer::Computer()
{
    cout<<"computer constructor called"<<endl;
}
Computer::~Computer()
{
    cout<<"computer distructor called"<<endl;
}
void Computer::startcomputer()
{
    pro.startprocessor();
    cout<<"computer starting... "<<endl;
}
void Computer::showdowncomputer()
{
    pro.stopprocessor();
    cout<<"computer showing down...."<<endl;
}
