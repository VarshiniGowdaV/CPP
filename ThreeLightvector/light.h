#ifndef LIGHT_H
#define LIGHT_H
#include <iostream>
#include "wire.h"
using namespace std;
class Wire;
class Light
{
private:
    string m_brand;
    string m_colour;
    Wire *m_wire;
public:
    Light(string brand,string colour,Wire *wire);
    Light();
    ~Light();
    Light(const Light& light);
    void operator =(Light light);

    void lightOn();

};

#endif // LIGHT_H
