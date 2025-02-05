#ifndef PHONE_H
#define PHONE_H
#include <iostream>
using namespace std;
class phone
{
public:
    std::string m_ph_num;
    std::string m_ph_name;
    phone(std::string ph_num,std::string ph_name);
    ~phone();
    void makecall();
    void display();
};

#endif // PHONE_H
