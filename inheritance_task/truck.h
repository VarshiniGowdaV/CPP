#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : virtual public Vehicle {
public:
    int cargo_capacity;
    Truck(int speed, string color, int cargo_capacity);
    ~Truck();
    void loadCargo();
};

#endif
