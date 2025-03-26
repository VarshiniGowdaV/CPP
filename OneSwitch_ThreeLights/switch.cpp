#include "switch.h"

Switch::Switch()
{
    cout<<"Switch constructor called"<<endl;
}
Switch::Switch(string brand, string name, Wire *wire1, Wire *wire2, Wire *wire3)
{
    m_brand=brand;
    m_name=name;
    m_wire1=wire1;
    m_wire2=wire2;
    m_wire3=wire3;
}
Switch::~Switch()
{
    cout<<"Switch destructor called"<<endl;
}
void Switch::switchOn()
{
    cout<<"Switch on"<<endl;
    m_wire1->wireOn();
    m_wire2->wireOn();
    m_wire3->wireOn();
}
