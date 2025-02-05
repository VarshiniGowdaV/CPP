#ifndef AC_H
#define AC_H
#include <string>
class ac
{
public:
    int m_lenght;
    int m_width;
    int m_capcity;
    int m_ac_num;
    int m_price;
    std::string brand;
    std::string color;
    ac(int m_lenght,int m_width,int m_capcity,int m_ac_num, int m_price,std::string brand,std::string color);
    ~ac();
    void acs();

};

#endif // AC_H
