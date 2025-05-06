#include <iostream>
#include "log.h"
using namespace std;

int main()
{
    for(int i=0;i<5;i++)
    {
        //if(i % 2==0)
           // continue;
        if(i>2)
            break;
        Log("Hello World");
        cout<<i<<endl;
    }
    cout << "Hello World!" << endl;
    return 0;
}
