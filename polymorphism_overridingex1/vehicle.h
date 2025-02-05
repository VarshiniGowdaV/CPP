#ifndef VEHICLE_H
#define VEHICLE_H
#include "string"
using namespace std;
class vehicle
{
public:
    std::string fuel;
    vehicle();
    ~vehicle();
    virtual void fuelfunc(string fuel);
};

#endif // VEHICLE_H
