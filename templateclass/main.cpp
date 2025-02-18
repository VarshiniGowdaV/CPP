#include <iostream>
#include "car.h"
#include "bike.h"
#include "bag.h"
#include "person.h"
using namespace std;

int main()
{
    Car<int,double> car;
    auto c = car.add(20,40);
    cout<<"c:"<<c<<endl;

    Car<int,double> car1;
    auto d=car1.sub(40.4,30.5);
    cout<<"d:"<<d<<endl;

    Bike<int> bike;
    auto e=bike.add(30,40);
    cout<<"e:"<<e<<endl;

    Person<std::string,int> p;
    auto r=p.add("varshi","gowda");
    cout<<"r:"<<r<<endl;

    Person<std::string,int>p1;
    auto t=p1.sub(4,2);
    cout<<"t:"<<t<<endl;

    Bag<int> b;
    auto A=b.display(2,4);
    cout<<A<<endl;
}
