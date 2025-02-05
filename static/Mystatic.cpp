#include "Mystatic.h"
#include <iostream>
using namespace std;
int MyStatic::staticVariable = 0;
void MyStatic::staticFunction()
{
    staticVariable++;
}
void MyStatic::nonStaticFunction()
{
    cout << "Non-static function called. Static variable: " << staticVariable << endl;
    staticVariable++;
}
