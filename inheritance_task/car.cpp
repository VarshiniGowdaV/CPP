#include "Car.h"
#include <iostream>
#include "vehicle.h"
using namespace std;

Car::Car(int speed, string color, int number_of_doors)
    : Vehicle(speed, color), number_of_doors(number_of_doors)
{
     std::cout<<"car constructor"<<std::endl;
}
Car::~Car()
{
    std::cout<<"car distructor"<<std::endl;
}
void Car::playMusic()
{
    std::cout<<"door:"<<number_of_doors<<endl;
}
