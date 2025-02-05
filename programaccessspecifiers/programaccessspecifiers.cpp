#include "programaccessspecifiers.h"
#include <iostream>
using namespace std;
programaccessspecifiers::programaccessspecifiers() {}
void programaccessspecifiers::set_data(int a,int b)
{
    a=10;
    b=20;
    int x;
    int y;
    a=x;
    b=y;
}
int programaccessspecifiers::get_data()
{
    return(a+b);
}
