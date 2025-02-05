#include "car.h"
#include "engine.h"
#include <iostream>
using namespace std;
Car::Car()
{
    cout<<"car default constructor called"<<endl;
}
Car::~Car()
{
    cout<<"car distructor called"<<endl;
}
void Car::startcar()
{
   eng.startengine();
    cout<<"car starting"<<endl;
}
void Car::stopcar()
{
    eng.stopengine();
    cout<<"car stoping"<<endl;
}
