#include <iostream>
#include "number.h"

using namespace std;

int main()
{
    number num1(10);
    num1.add();
    num1.setvalue(20);
    cout << "Value: " << num1.getvalue() << endl;

    number num2(20);
    num2.sub();
    num2.setsub(30);
    cout<<"value:"<<num2.getsub()<<endl;

    return 0;
}
