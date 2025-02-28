#ifndef AC_H
#define AC_H
#include <iostream>
using namespace std;
#include "polycab.h"
#include "havels.h"
#include "finolex.h"
class Ac
{
private:
    std::string m_brand;
    std::string m_colour;
    float m_price;
    polycab *m_pwire;
    havels *m_hwire;
    finolex *m_fwire;
public:
    Ac();
    ~Ac();
    Ac(std::string brand,std::string colour,float price);

    void intializewiretoac(polycab *wire);
    void intializewiretoac(havels *wire);
    void intializewiretoac(finolex *wire);

    void acOn();
};

#endif // AC_H
