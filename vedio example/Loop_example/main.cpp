#include <iostream>
#include "log.h"
using namespace std;

int main()
{
    for(int i = 0; i < 5; i++)
    {
        Log("Hello World");
    }
    Log("==================================");
    int i=0;
    while (i<5)
    {
        Log("Hello ");
        i++;
    }
    cout << "Hello World!" << endl;
    return 0;
}
