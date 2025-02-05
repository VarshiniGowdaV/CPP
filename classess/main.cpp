#include <iostream>
#include "classess.h"
using namespace std;

int main()
{
    classess obj;
    obj.setNumbers(15,20);
    cout<<"The sum of the numbers is :" <<obj.addNumbers()<<endl;

    obj.number1 = 9;
    obj.number2 = 14;
    cout<<"After changing numbers the sum is :" <<obj.addNumbers()<<endl;
    return 0;
}
