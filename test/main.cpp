#include <iostream>
#include "person.h"
using namespace std;

int main()
{
    Person<int,int> p;
    auto C=p.add(10,10);
    cout<<C<<endl;

    Person<int,double>p1;
    auto D=p1.add(10,20.5);
    cout<<D<<endl;

    Person<double,int>p2;
    auto E=p2.add(10.5,20);
    cout<<E<<endl;

    Person<double,double>p3;
    auto F=p3.add(10.5,10.5);
    cout<<F<<endl;



    return 0;
}
