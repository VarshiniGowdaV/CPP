#ifndef PHONE_H
#define PHONE_H
#include <iostream>
using namespace std;
class phone
{
public:
    std::string m_name;
    std::string m_colour;
    phone(std::string name,std::string colour);
    ~phone();
};

#endif // PHONE_H
