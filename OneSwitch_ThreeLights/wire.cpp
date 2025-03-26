#include "wire.h"

Wire::Wire()
{
    cout<<"Wire constructor called"<<endl;
}
Wire::Wire(int lenght, int brand, Light *light)
{
    m_length=lenght;
    m_brand=brand;
    m_light=light;
}
Wire::~Wire()
{
    cout<<"Wire destructor called"<<endl;
}
void Wire::wireOn()
{
    cout<<"Wire on"<<endl;
    m_light->lightOn();
}
