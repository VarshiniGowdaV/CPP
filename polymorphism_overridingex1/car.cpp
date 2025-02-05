#include "car.h"
#include <iostream>
#include "vehicle.h"
using namespace std;
car::car()
{
    cout<<"default constructor called"<<endl;
}
car::~car()
{
    cout<<"default distructor called"<<endl;
}
void car::fuelfunc(string fuel)
{
    cout<<"car fuel:"<<fuel<<endl;
    cout<<"car class fuel function called"<<endl;
}
