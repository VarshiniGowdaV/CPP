#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include <list>
#include "wifi.h"
#include <iostream>
using namespace std;
class Fileoperation
{
public:
    Fileoperation();
    ~Fileoperation();

    void writeData(const list<WIFI>& wifi);
    list<WIFI> readData();



};

#endif // FILEOPERATION_H
