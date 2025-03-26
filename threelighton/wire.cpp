#include "wire.h"

Wire::Wire()
{
    cout<<"wire constructor called"<<endl;
}
Wire::Wire(int lenght, int brand, Light *light)
{
    m_lenght=lenght;
    m_brand=brand;
    m_light=light;
}
Wire::~Wire()
{
    cout<<"Wire Destructor called"<<endl;
}
void Wire::wireOn()
{
    cout<<"wire on"<<endl;
    m_light->lightOn();
}
