#include "classess.h"

classess::classess():number1(0),number2(0){}
void classess::setNumbers(int a, int b)
{
    number1 = a;
    number2 = b;
}
int classess::addNumbers(){
    return number1 + number2;
}
