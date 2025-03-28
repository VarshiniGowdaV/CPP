#include "wire.h"

Wire::Wire()
{
    cout<<"wire constructor called"<<endl;
}
Wire::Wire(int lenght, int brand)
{
    m_lenght=lenght;
    m_brand=brand;
    // m_light.push_back(new Light("Philips","white"));
    // m_light.push_back(new Light("HIFI","Red"));
    // m_light.push_back(new Light("Havells","Blue"));
    // m_light.push_back(new Light("philips","red"));
    // m_light.push_back(new Light("Hifi","blue"));
    // m_light.push_back(new Light("Havells","white"));
    cout<<"Wire parameter constructor called"<<endl;
}
Wire::~Wire()
{
    cout<<"Wire Destructor called"<<endl;
    // for(Light * light :m_light)
    // {
    //     delete light;
    // }
}
Wire::Wire(const Wire &wire)
{
    cout<<"wire constructor called"<<endl;
}
void Wire::operator =(Wire wire)
{
    cout<<"wire assinment operaton"<<endl;
}
void Wire::wireOn()
{
    cout<<"wire connected"<<endl;
    // for(Light* light :m_light)
    // {
    //     if(light)
    //     {
    //         light->lightOn();
    //     }
    // }
    for(Light & light:m_light)
    {
        light.lightOn();
    }
}
void Wire::addlight(const Light &light)
{
    m_light.push_back(light);
}
