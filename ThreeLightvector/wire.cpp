#include "wire.h"
#include <iostream>
using namespace std;
Wire::Wire()
{
    cout<<"Wire constructor called"<<endl;
}
Wire::Wire(string brand, string colour, vector<Light> light)
{
    m_brand=brand;
    m_colour=colour;
    m_light=light;
}
Wire::~Wire()
{
    cout<<"Wire destructor called"<<endl;
}
Wire::Wire(const Wire &wire)
{
    cout<<"Wire copy constructor called"<<endl;
}
void Wire::operator =(Wire wire)
{
    cout<<"Wire assinment operator"<<endl;
}
void Wire::wireOn()
{
    for(Light & light:m_light)
    {
        light.lightOn();
    }
}
void Wire::setWire(const Light& light)
{
    m_light.push_back(light);
}
