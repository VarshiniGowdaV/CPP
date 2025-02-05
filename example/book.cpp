#include <iostream>
#include "book.h"
using namespace std;

void checkme(int* a)
{
    *a = *a + 10;
    cout << "Updated value of a is: " << *a << endl;
}
