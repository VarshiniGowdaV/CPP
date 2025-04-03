#ifndef WIRE_H
#define WIRE_H
#include "wire.h"
#include <iostream>
#include <vector>
using namespace std;
class Light;
class Wire
{
private:
    string m_brand;
    string m_colour;
    vector<Light> m_light;
public:
    Wire(string brand,string colour,vector<Light> light);
    Wire();
    ~Wire();
    Wire(const Wire& wire);
    void  operator =(Wire wire);

    void wireOn();
    void setWire(const Light& light);
};

#endif // WIRE_H
