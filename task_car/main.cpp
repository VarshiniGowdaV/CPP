
#include <iostream>
using namespace std;
#include "car.h"
#include "accelerate.h"
#include "engine.h"
#include "break.h"

int main()
{
    Car carobject;
    Engine eng;
    Accelerator ac;
    Brake b;

    carobject.startcar(&eng);
    ac.speedup();
    b.applybrake(&carobject,&eng);

    return 0;
}
