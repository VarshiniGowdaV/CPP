#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;
class Vehicle {
public:
    std::string color;
    int speed;
    Vehicle(int speed, std::string color);
    ~Vehicle();
    void start();
    void stop();
};

#endif
