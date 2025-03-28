#include <iostream>
#include "wire.h"
#include "light.h"
#include "switch.h"
using namespace std;

int main()
{
    Switch switch1("switch","Havells",nullptr);
    switch1.switchOn();
    Wire wire(10,2);
    wire.addlight(Light("Philips","white"));
    wire.addlight(Light("Havells","yellow"));
    switch1 = Switch("Switch","Havells",&wire);
    switch1.switchOn();
    return 0;
}
