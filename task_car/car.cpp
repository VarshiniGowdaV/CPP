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
    cout << "Car is starting..." << endl;
    engine.startEngine();
}

void Car::carStop()
{
    cout << "Car is stopping..." << endl;
    engine.stopEngine();
}

void Car::accelerater()  // Fixed function name
{
    isMoving = true;
    accelerate.increaseSpeed();
}

void Car::applyBreak()
{
    if (isMoving) {
        break1.applyBreak();
        isMoving = false;
    } else {
        cout << "Car is already stopped." << endl;
    }
}
