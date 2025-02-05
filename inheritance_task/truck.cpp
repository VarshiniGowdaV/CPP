#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck(int speed, string color, int cargo_capacity)
    : Vehicle(speed, color), cargo_capacity(cargo_capacity)
{
     std::cout<<"truck constructor"<<std::endl;
}
Truck::~Truck()
{
      std::cout<<"truck distructor"<<std::endl;
}
void Truck::loadCargo()
{
    cout<<"capacity:"<<cargo_capacity<<endl;
}
