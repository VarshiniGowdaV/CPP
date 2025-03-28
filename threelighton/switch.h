#ifndef SWITCH_H
#define SWITCH_H
#include "wire.h"
#include <iostream>
using namespace std;
class Wire;
class Switch
{
private:
    string m_name;
    string m_brand;
    Wire *m_wire;
public:
    Switch(string name, string brand, Wire *wire);
    Switch();
    ~Switch();
    Switch(const Switch& switch1);
    void operator =(Switch switchobj);

    void switchOn();
};

#endif // SWITCH_H
