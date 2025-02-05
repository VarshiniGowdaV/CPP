#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person
{
private:
    std::string m_name;
    int m_age;
public:
    Person(std::string name,int age);
    ~Person();
    void setname(string name);
    string getname();
    void setage(int age);
    int getage();
};

#endif // PERSON_H
