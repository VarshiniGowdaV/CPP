#include "light.h"

Light::Light()
{
    cout<<"Light  constructor called"<<endl;
}
Light::Light(string brand, string colour)
{
    m_brand=brand;
    m_colour=colour;
    cout<<"Light paramenter constructor called"<<endl;
}
Light::~Light()
{
    cout<<"Light destructor called"<<endl;
}
Light::Light(const Light &light1)
{
    cout<<"light copy constructor called"<<endl;
}
void Light::operator =(Light light)
{
    cout<<"Light assinment operator "<<endl;
}

void Light::lightOn()
{
    cout<<"light on"<<m_brand<<" "<<m_colour<<" "<<endl;
}
