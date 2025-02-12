#ifndef SWITCH_H
#define SWITCH_H
#include "wire.h"
#include <iostream>
using namespace std;

class Switch
{
private:
    string m_colour;
    string m_state; // on or off
    string m_brand;
    string m_name;
    int m_price;
    Wire* m_wire;

public:
    Switch();
    Switch(string colour, string state, string brand, string name, int price, Wire* wire);
    ~Switch();
    void SwitchOn();
    void SwitchOff();
};

#endif // SWITCH_H
