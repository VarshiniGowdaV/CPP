#include "car.h"
#include <iostream>
using namespace std;
Car::Car()
{
    cout << "Car constructor called" << endl;
    isMoving = false;
}

Car::~Car()
{
    cout << "Car destructor called" << endl;
}

void Car::carStart()
{
     engine.startEngine();
    cout << "Car is starting" << endl;

}

void Car::carStop()
{
    engine.stopEngine();
    cout << "Car is stopped" << endl;

}

void Car::accelerater()
{
    isMoving = true;
    accelerate.increaseSpeed();
}

void Car::applyBreak()
{
    if (isMoving)
    {
        break1.applyBreak();
        isMoving = false;
    } else {
        cout << "Car is already stopped" << endl;
    }
}
