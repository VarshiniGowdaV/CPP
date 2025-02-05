#ifndef OPPO_H
#define OPPO_H
#include "phone.h"
#include <iostream>
#include "string"
using namespace std;
class oppo:public phone
{
public:
    oppo(std::string b_name,std::string b_colour);
    ~oppo();
};

#endif // OPPO_H
