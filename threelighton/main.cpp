#include <iostream>
#include "wire.h"
#include "light.h"
#include "switch.h"
using namespace std;

int main()
{
    Light light1;
    Light light2;
    Light light3;
    Wire wire1(10,20,&light1);
    Wire wire2(10,20,&light2);
    Wire wire3(10,20,&light3);
    Switch switch1("hifi","brand1",&wire1,&wire2,&wire3);
    switch1.switchOn();
}
