#include "processor.h"
#include <iostream>
using namespace std;
Processor::Processor()
{
    cout<<"processor contructor called"<<endl;
}
Processor::~Processor()
{
    cout<<"processor distructor called"<<endl;
}
void Processor::startprocessor()
{
    cout<<"processor starting....."<<endl;
}
void Processor::stopprocessor()
{
    cout<<"processor shutdown......."<<endl;
}
