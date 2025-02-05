#include "task1.h"
#include <iostream>
using namespace std;
task1::task1(int v1, float v2, char v3, int v4)
    : var1(v1), var2(v2), var3(v3), var4(v4)
{

}
task1::~task1()
{

}
void task1::display() const
{
    cout << "task1 -var1:" << var1<< " var2:" << var2<< " var3:" << var3<< " var4 :" << var4 << endl;
}
