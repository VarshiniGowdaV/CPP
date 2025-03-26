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
    Wire *m_wire1;
    Wire *m_wire2;
    Wire *m_wire3;

public:
    Switch(string name,string brand, Wire *wire1,Wire *wire2,Wire *wire3);
    Switch();
    ~Switch();

    void switchOn();
};

#endif // SWITCH_H
