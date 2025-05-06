#ifndef BIKE_H
#define BIKE_H
#include "vehicle.h"
#include "string"
using namespace std;
class bike:public vehicle
{
public:
    std::string fuel;
    bike();
    ~bike();
    void fuelfunc(string fuel);
};

#endif // BIKE_H
