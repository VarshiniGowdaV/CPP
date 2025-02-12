#ifndef VARSHI_H
#define VARSHI_H
// #include "person.h"
#include <iostream>
using namespace std;
class Person;
class Varshi
{
public:
    Varshi(int age,std::string name);
    Varshi();
    ~Varshi();
    void func2(Person &p);
    void func3();
};

#endif // VARSHI_H
