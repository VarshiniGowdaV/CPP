#include "accelerate.h"
#include <iostream>
using namespace std;
Accelerate::Accelerate()
{
    cout<<"Accelerate constructor called"<<endl;
}

Accelerate::~Accelerate()
{
    cout<<"Accelerate destructor called"<<endl;
}
void Accelerate::increaseSpeed()
{
    cout << "Car is accelerater "<< endl;
}
