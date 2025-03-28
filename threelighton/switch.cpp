#include "switch.h"

Switch::Switch()
{
    cout<<"Switch constructor called"<<endl;
}
Switch::Switch(string name, string brand,Wire *wire)
{
    m_name=name;
    m_brand=brand;
    m_wire=wire;
    cout<<"Switch parameter constructor called"<<endl;

}
Switch::~Switch()
{
    cout<<"Switch destructor called"<<endl;
}
Switch::Switch(const Switch &switch1)
{
    cout<<"switch copy constructor called"<<endl;
}
void Switch::operator =(Switch switchobj)
{
    cout<<"switch assinment operator "<<endl;
}
void Switch::switchOn()
{
    if(m_wire)
    {
        m_wire->wireOn();
    }

}
