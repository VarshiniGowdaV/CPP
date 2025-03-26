#ifndef SWITCH_H
#define SWITCH_H
#include "wire.h"
#include <iostream>
using namespace std;
class Switch
{
private:
    string m_brand;
    string m_name;
    Wire *m_wire1;
    Wire *m_wire2;
    Wire *m_wire3;

public:
    Switch(string brand,string name,Wire *wire1,Wire *wire2,Wire *wire3);
    Switch();
    ~Switch();

    void switchOn();

};
#endif // SWITCH_H
