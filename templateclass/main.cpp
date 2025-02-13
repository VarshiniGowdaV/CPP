#include <iostream>
#include "car.h"
#include "bike.h"
#include "person.h"
using namespace std;

int main()
{
    Car<int,double> car;
    auto c = car.add(20,40);
    cout<<c<<endl;

    Car<int,double> car1;
    auto d=car1.sub(40.4,30.5);
    cout<<d<<endl;

    Bike<int> bike;
    auto e=bike.add(30,40);
    cout<<e<<endl;

    Person<std::string,int> p;
    auto r=p.add("varshi","gowda");
    cout<<r<<endl;

    Person<std::string,int>p1;
    auto t=p1.sub(4,2);
    cout<<t<<endl;
}
