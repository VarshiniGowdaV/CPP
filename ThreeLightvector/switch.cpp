#include "switch.h"

Switch::Switch()
{
    cout<<"Switch constructor called"<<endl;
}
Switch::Switch(string brand, string colour, Wire *wire)
{
    m_brand=brand;
    m_colour=colour;
    m_wire=wire;
}
Switch::~Switch()
{
    cout<<"Switch destructor called"<<endl;
}
Switch::Switch(const Switch &switch1)
{
    cout<<"Switch copy constructor called"<<endl;
}
void Switch::operator =(Switch switch1)
{
    cout<<"Switch assinment operator "<<endl;
}
void Switch::switchOn()
{
    if(m_wire)
    {
        m_wire->wireOn();
    }

}
