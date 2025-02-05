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
    std::string brand;
    std::string colour;
    Switch(int length, int width, int switch_num, int capacity, std::string brand, std::string colour);
    void switchs();
};

#endif // SWITCH_H
