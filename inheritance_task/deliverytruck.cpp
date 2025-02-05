#include "DeliveryTruck.h"
#include <iostream>
using namespace std;

DeliveryTruck::DeliveryTruck(int speed, string color, int number_of_doors, int cargo_capacity, string delivery_area)
    : Car(speed, color, number_of_doors), Truck(speed, color, cargo_capacity), Vehicle(speed,color)
{
    m_delivery_area=delivery_area;
      std::cout<<"deliveryTruck constructor"<<std::endl;

}
DeliveryTruck::~DeliveryTruck()
{
    std::cout<<"deliveryTruck distructor"<<std::endl;
}
void DeliveryTruck::scheduleDelivery()
{
    cout<<"delivery area:"<<m_delivery_area<<endl;

}
