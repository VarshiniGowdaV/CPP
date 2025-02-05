#include <iostream>
#include "complex.h"
//#include "add.h"
using namespace std;

int main()
{
   complex c1(10,20);
   complex c2(30,10);
   complex c3(c1+c2);
    c3.printme();
    complex c4(c1=c2);
    c4.printme();
    complex c5(c1*c2);
    c5.printme();
    complex c6(c1/c2);
    c6.printme();
    complex c7(c1>=c2);
     c7.printme();
    complex c8(c1<=c2);
     c8.printme();
    complex c9(c1==c2);
    c9.printme();

//     add a1(10,20);
//     add a2(20,10);
//     add a3=a1+a2;
//     a3.addme();
//     add a4=a1-a2;
//     a4.subme();
//     add a5=a1*a2;
//     a5.mulme();
//     add a6=a1/a2;
//     a6.divme();
//     if (a1 >= a2)
//     {
//         cout << "a1 is greater than or equal to a2" << endl;
//     }
//     else
//     {
//         cout << "a1 is less than a2" << endl;
//     }

//     if (a1 <= a2)
//     {
//         cout << "a1 is less than or equal to a2" << endl;
//     }
//     else
//     {
//         cout << "a1 is greater than a2" << endl;
//     }

//     if (a1 == a2)
//     {
//         cout << "a1 is equal to a2" << endl;
//     }
//     else
//     {
//         cout << "a1 is not equal to a2" << endl;
//     }

    return 0;
}
