#ifndef CAR_H
#define CAR_H
#include "vehicle.h"
#include "string"
using namespace std;
class car:public vehicle
{
public:
    std::string fuel;
    car();
    ~car();
    void fuelfunc(string fuel);
};

#endif // CAR_H
