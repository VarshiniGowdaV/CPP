#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person
{
    int m_age;
    std::string m_name;
public:
    Person(int age,std::string name);
    Person();
    ~Person();
    void func1();
    friend class Varshi;
};

#endif // PERSON_H
