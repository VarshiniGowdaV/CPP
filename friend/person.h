#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person
{
    int m_age;
    std::string m_name;
    std::string m_phnum;

public:
    Person(int age,std::string name,std::string phnum);
    Person();
    ~Person();
    void func1();
    friend class Varshi;
    friend class Darshi;
};

#endif // PERSON_H
