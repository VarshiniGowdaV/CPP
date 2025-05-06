#include "bmw.h"
#include "car.h"
BMW::BMW(int wheels, std::string name):Car(wheels,name)
{
    cout<<"bmw constructor called"<<endl;
}
BMW::~BMW()
{
    cout<<"bmw distructor called"<<endl;
}
