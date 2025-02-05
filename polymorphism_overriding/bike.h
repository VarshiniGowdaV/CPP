#ifndef BIKE_H
#define BIKE_H
#include "vechicle.h"
using namespace std;
class bike:public vechicle
{
public:
    bike();
    ~bike();
    void fuelfunc(string fuel);
};

#endif // BIKE_H
