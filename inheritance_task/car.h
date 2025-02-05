#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : virtual public Vehicle {
public:
    int number_of_doors;
    Car(int speed, string color, int number_of_doors);
    ~Car();
    void playMusic();
};

#endif
