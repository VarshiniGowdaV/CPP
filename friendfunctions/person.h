#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include "varshi.h"
using namespace std;

class Person
{
    int m_age;
    std::string m_name;
public:
    Person();
    Person(int age,std::string name);
    ~Person();
    void func1();
    friend void Varshi::func2(Person &p);
};

#endif // PERSON_H
