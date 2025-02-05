#include "staticexample.h"
#include <iostream>
using namespace std;
staticexample::staticexample()
{

}
void getdata(int a)
{
    number = a;
    count++;
}
void getcount(void)
{
    cout<<"count:";
    cout<<count << "\n";
}
int item::count;
