#ifndef WIRE_H
#define WIRE_H
#include "light.h"
#include <iostream>
#include <vector>
using namespace std;
class Light;
class Wire
{
private:
    int m_lenght;
    int m_brand;
    //vector<Light*> m_light;
    vector<Light> m_light;
public:
    Wire(int lenght,int brand);
    Wire();
    ~Wire();
    Wire(const Wire& wire);
    void operator =(Wire wire);

    void wireOn();
    void addlight(const Light& light);
};

#endif // WIRE_H
