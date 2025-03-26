#ifndef WIRE_H
#define WIRE_H
#include "light.h"
#include <iostream>
using namespace std;
class Light;
class Wire
{
private:
    int m_length;
    int m_brand;
    Light *m_light;
public:
    Wire(int lenght,int brand,Light *light);
    Wire();
    ~Wire();

    void wireOn();
};

#endif // WIRE_H
