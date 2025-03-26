#include "light.h"

Light::Light(string brand, string colour)
{
    m_brand=brand;
    m_colour= colour;
}

Light::Light()
{
    cout<<"Light constructor called"<<endl;
}

Light::~Light()
{
    cout<<"Light Destructor called"<<endl;
}

void Light::lightOn()
{
    cout<<"light on"<<endl;
}
