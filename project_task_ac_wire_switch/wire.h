#ifndef WIRE_H
#define WIRE_H
#include <iostream>
using namespace std;
class AC;
class Wire {
private:
    float m_thickness;
    float m_length;
    string m_colour;
    string m_brand;
    float m_price;
    AC* acptr;

public:
    Wire();
    ~Wire();
    Wire(float thickness, float length, string colour, string brand, float price);
    void display();
    void setAC(AC* ac);
    void powerOnAc();
    void powerOffAc();
};

#endif // WIRE_H
