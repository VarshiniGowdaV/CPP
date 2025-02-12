#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "engine.h"
#include "accelerate.h"
#include "break.h"

class Car {
private:
    Engine engine;
    Accelerate accelerate;
    Break break1;
    bool isMoving;

public:
    Car();
    ~Car();
    void carStart();
    void carStop();
    void accelerater();
    void applyBreak();
};

#endif // CAR_H
