#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;
class Car
{
    int m_carnum;
    std::string m_name;
public:
    Car(int carnum,std::string name);
    Car();
    ~Car();
    void func1();
    friend class BMW;
};

#endif // CAR_H
