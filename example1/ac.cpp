#include "ac.h"
#include "polycab.h"
#include "finolex.h"
#include "havels.h"
#include <iostream>
using namespace std;
Ac::Ac()
{
    cout<<" Default constructor of AC called"<<endl;
}
Ac::~Ac()
{
    cout<<"Destructor of Ac called "<<endl;
}
Ac::Ac(string brand, string colour, float price)
{
    cout<<"paramentrized construtor of Ac called"<<endl;
    m_brand=brand;
    m_colour=colour;
    m_price=price;
}
void Ac::intializewiretoac(polycab *wire)
{
    m_pwire=wire;
    m_pwire->setac(this);
}
void Ac::intializewiretoac(finolex *wire)
{
    m_fwire=wire;
    m_fwire->setac(this);
}
void Ac::intializewiretoac(havels *wire)
{
    m_hwire=wire;
    m_hwire->setac(this);
}
void Ac::acOn()
{
    cout<<"Ac is turned ON.\n";
}
