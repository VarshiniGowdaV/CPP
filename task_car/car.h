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
    void insertKey();
    void carStart();
    void carStop();
    void accelerater();
    void applyBreak();
    void keyremove();
};

#endif // CAR_H
