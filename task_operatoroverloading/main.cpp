#include <iostream>
#include "number.h"

using namespace std;

int main()
{
    number num1(10);
    num1.add();
    num1.setvalue(20);
    cout << "Value: " << num1.getvalue() << endl;

    return 0;
}
