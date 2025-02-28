#ifndef SWITCH_H
#define SWITCH_H
#include <iostream>
using namespace std;
#include "polycab.h"
#include "finolex.h"
#include "havels.h"
#include "ac.h"
class Switch
{
private:
    std::string m_colour;
    std::string m_state;
    std::string m_brand;
    std::string m_name;
    int m_price;
    polycab *m_pwire;
    havels *m_hwire;
    finolex *m_fwire;

public:
    Switch();
    ~Switch();
    Switch(std::string colour,std::string state,std::string brand,std::string name,int price);
    void initializewire(polycab *wire);
    void initializewire(finolex *wire);
    void initializewire(havels *wire);
    void switchOn();
};

#endif // SWITCH_H
