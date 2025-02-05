#include <iostream>
#include "switch.h"
#include <string>
using namespace std;

int main()
{
    Switch a1(20, 30, 1, 1500, "HIFI", "white");
    a1.switchs();
    cout << "----------------------" << endl;

    Switch a2(20, 30, 2, 1500, "HIFI", "white");
    a2.switchs();
    cout << "----------------------" << endl;

    Switch a3(20, 30, 3, 1500, "HIFI", "white");
    a3.switchs();
    cout << "----------------------" << endl;

    Switch a4(20, 30, 4, 1500, "HIFI", "white");
    a4.switchs();
    cout << "----------------------" << endl;

    Switch a5(20, 30, 5, 1500, "HIFI", "white");
    a5.switchs();
    cout << "----------------------" << endl;

    Switch a6(20, 30, 6, 1500, "HIFI", "white");
    a6.switchs();
    cout << "----------------------" << endl;

    Switch a7(20, 30, 7, 1500, "HIFI", "white");
    a7.switchs();
    cout << "----------------------" << endl;


    return 0;
}
