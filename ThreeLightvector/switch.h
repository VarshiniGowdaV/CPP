#ifndef SWITCH_H
#define SWITCH_H
#include <iostream>
#include "wire.h"
using namespace std;
class Wire;
class Switch
{
private:
    string m_brand;
    string m_colour;
    Wire *m_wire;
public:
    Switch(string brand,string colour,Wire * wire);
    Switch();
    ~Switch();
    Switch(const Switch& switch1);
    void operator =(Switch switch1);

    void switchOn();
};

#endif // SWITCH_H
