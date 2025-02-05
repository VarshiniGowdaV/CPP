#ifndef AC_H
#define AC_H
#include "wire.h"
#include <string>

class AC {

public:
    int m_length;
    int m_width;
    int m_capacity;
    int m_ac_num;
    int m_price;
    std::string m_brand;
    std::string m_color;
    bool m_isOn;
    Wire * wire;
    AC(int length, int width, int capacity, int ac_num, int price, const std::string& brand, const std::string& color);
    ~AC();
    void ac();
    void ac_on();
    void ac_off();
};

#endif // AC_H
