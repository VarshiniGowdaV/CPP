#ifndef DELIVERYTRUCK_H
#define DELIVERYTRUCK_H
#include "Car.h"
#include "Truck.h"

class DeliveryTruck : public Car, public Truck {
public:
    string m_delivery_area;

    DeliveryTruck(int speed, string color, int number_of_doors,int cargo_capacity, string delivery_area);
    ~DeliveryTruck();
   void scheduleDelivery();
};

#endif
