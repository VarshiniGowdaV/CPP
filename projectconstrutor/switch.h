#ifndef SWITCH_H
#define SWITCH_H
#include "wire.h"
#include <string>

class Switch
{
public:
    int m_length;
    int m_width;
    int m_switch_num;
    int m_capacity;
    int m_price;
    std::string m_brand;
    std::string m_color;
    bool m_isOn;
    Wire * wire;
    Switch(int length, int width, int switch_num, int capacity, int price, const std::string& brand, const std::string& color);
    ~Switch();
    void switch1();
    void turnOn();
    void turnOff();
};

#endif // SWITCH_H
