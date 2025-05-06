#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;
class Car
{
private:
    int m_wheels;
    std::string m_name;
public:
    Car(int wheels,std::string name);
    ~Car();
    void display();
};

#endif // CAR_H
