#ifndef SWITCH_H
#define SWITCH_H
#include <string>

class Switch
{
public:
    int m_length;
    int m_width;
    int switch_num;
    int m_capacity;
    int m_price;
    std::string brand;
    std::string colour;
    Switch(int length, int width, int switch_num, int capacity, int m_price,std::string brand, std::string colour);
    ~Switch();
    void switchs();
};

#endif // SWITCH_H
