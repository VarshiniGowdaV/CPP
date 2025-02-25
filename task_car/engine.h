#ifndef ENGINE_H
#define ENGINE_H
#include "car.h"
#include "accelerate.h"

class Car;
class Engine
{
private:
    Accelerator *ac;
public:
    Engine();
    ~Engine();
    void startengine();
    void stopengine(Car *car);
};

#endif
