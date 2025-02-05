#include <iostream>
#include "ac.h"
#include "switch.h"
#include "wire.h"
#include <string>
using namespace std;

int main()
{
    ac a1(1,10,10,16000,280,"voltas","white");
    a1.acs();
    cout<<"-------------------" <<endl;

    ac a2(2,10,10,16000,280,"voltas","white");
    a2.acs();
    cout<<"-------------------" <<endl;

    ac a3(3,10,10,16000,280,"voltas","white");
    a3.acs();
    cout<<"-------------------" <<endl;

    ac a4(4,10,10,16000,280,"voltas","white");
    a4.acs();
    cout<<"-------------------" <<endl;

    ac a5(5,10,10,16000,280,"voltas","white");
    a5.acs();
    cout<<"-------------------" <<endl;

    ac a6(6,10,10,16000,280,"voltas","white");
    a6.acs();
    cout<<"-------------------" <<endl;

    ac a7(7,10,10,16000,280,"voltas","white");
    a7.acs();
    cout<<"-------------------" <<endl;
    cout<<"************************************" <<endl;


    Switch b1(20, 30, 1, 1500,400, "HIFI", "white");
    b1.switchs();
    cout << "----------------------" << endl;

    Switch b2(20, 30, 2, 1500, 400,"HIFI", "white");
    b2.switchs();
    cout << "----------------------" << endl;

    Switch b3(20, 30, 3, 1500,400, "HIFI", "white");
    b3.switchs();
    cout << "----------------------" << endl;

    Switch b4(20, 30, 4, 1500,400, "HIFI", "white");
    b4.switchs();
    cout << "----------------------" << endl;

    Switch b5(20, 30, 5, 1500, 400,"HIFI", "white");
    b5.switchs();
    cout << "----------------------" << endl;

    Switch b6(20, 30, 6, 1500,400, "HIFI", "white");
    b6.switchs();
    cout << "----------------------" << endl;

    Switch b7(20, 30, 7, 1500,400, "HIFI", "white");
    b7.switchs();
    cout << "----------------------" << endl;
    cout<<"************************************" <<endl;

    wire c1(40,4.3,300,"Havells","red");
    c1.wires();
    cout<<"---------------------------" <<endl;

    wire c2(40,4.3,300,"Havells","black");
    c2.wires();
    cout<<"---------------------------" <<endl;

    wire c3(40,4.3,300,"Havells","blue");
    c3.wires();
    cout<<"---------------------------" <<endl;

    wire c4(40,4.3,300,"Havells","yellow");
    c4.wires();
    cout<<"---------------------------" <<endl;

    wire c5(40,4.3,300,"Havells","green");
    c5.wires();
    cout<<"---------------------------" <<endl;

    wire c6(40,4.3,300,"Havells","black");
    c6.wires();
    cout<<"---------------------------" <<endl;

    wire c7(40,4.3,300,"Havells","blue");
    c7.wires();
    cout<<"---------------------------" <<endl;
    return 0;
}
