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
    Wire *wire;
public:
    Light(string brand,string colour);
    Light();
    ~Light();

    void lightOn();
};

#endif // LIGHT_H
