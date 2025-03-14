#ifndef BIKE_H
#define BIKE_H
#include "vechical.h"
class Bike:public Vechical
{    
public:
    Bike();
    ~Bike();

    int getBikeNumber();
    string getBikeName();
    string getBikeModal();
    string getBikeType();
    int getBikeCast();
    int getBikePayment();
    int getBikeDuration();
    string getBikeStatus();

    void setBikeDetails(string Modal,string type,int cast,int payment,int duraction,string status);
};

#endif // BIKE_H
