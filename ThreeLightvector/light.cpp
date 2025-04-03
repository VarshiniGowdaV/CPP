#include "light.h"

Light::Light()
{
    cout<<"Light default constructor called"<<endl;
}
Light::Light(string brand, string colour,Wire * wire)
{
    m_brand=brand;
    m_colour=colour;
    m_wire=wire;
}
Light::~Light()
{
    cout<<"Light destructor called"<<endl;
}
Light::Light(const Light &light)
{
    cout<<"Light copy constructor called"<<endl;
}
void Light::operator =(Light light)
{
    cout<<"Light assinment operator "<<endl;
}
void Light::lightOn()
{
    cout<<"light on"<<m_brand<<" "<<m_colour<<" "<<endl;
}
