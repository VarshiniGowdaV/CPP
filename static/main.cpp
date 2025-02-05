#include <iostream>
#include "MyStatic.h"
using namespace std;

int main()
{
    MyStatic obj1;
    MyStatic obj2;
    cout << "Initial staticVariable: " << MyStatic::staticVariable << endl;
    MyStatic::staticFunction();
    obj1.nonStaticFunction();
    obj2.nonStaticFunction();
    cout << "Final staticVariable: " << MyStatic::staticVariable << endl;

    return 0;
}
