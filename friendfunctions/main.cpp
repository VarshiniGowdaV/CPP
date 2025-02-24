#include <iostream>
#include "person.h"
#include "varshi.h"
#include "car.h"
#include "benz.h"
using namespace std;

int main()
{
    Person p;
    Varshi v;
    v.func2(p);

    Car c;
    Benz b;
    b.display1(c);
}
