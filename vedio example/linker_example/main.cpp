#include <iostream>
using namespace std;
#include "Log.h"
//void log(const char* message);
static int Multiply(int a,int b)
{
    Log("Multiply");
    return a*b;
}
int main()
{
    cout<<Multiply(28,2)<<endl;
}
