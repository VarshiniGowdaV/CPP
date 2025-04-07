#include <iostream>
#include "a.h"
#include "b.h"
#include "c.h"
using namespace std;

int main()
{
    B *ptr =new C;
    delete ptr;
    return 0;    // with virtual at A class  C B A destructor called //without virtual B class called C B A destuctor called
}
