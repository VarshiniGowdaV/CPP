#include "Switch.h"
#include <iostream>
using namespace std;

Switch::Switch(int length, int width, int switch_num, int capacity, int price, const std::string& brand, const std::string& color)
    : m_length(length), m_width(width), m_switch_num(switch_num), m_capacity(capacity), m_price(price), m_brand(brand), m_color(color)
{
   std::cout << "Switch Constructor called" << std::endl;
}

Switch::~Switch()
{
    std::cout << "Switch Destructor called" << std::endl;
}

void Switch::switch1()
{
    std::cout << "Switch Number: " << m_switch_num << endl;
    std::cout << "Length: " << m_length << endl;
    std::cout << "Width: " << m_width << endl;
    std::cout << "Capacity: " << m_capacity << endl;
    std::cout << "Price: " << m_price << endl;
    std::cout << "Brand: " << m_brand << endl;
    std::cout << "Color: " << m_color << endl;
    if (m_isOn)
    {
        turnOff();
        m_isOn = false;
    }
    else
    {
        turnOn();
        m_isOn = true;
    }
}
void Switch::turnOn()
{
    std::cout << "Switch is now ON." << std::endl;
}

void Switch::turnOff()
{
    std::cout << "Switch is now OFF."<< std::endl;
}
