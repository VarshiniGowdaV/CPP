#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class person
{
    std::string m_name;
    int m_age;
public:
    person(std::string name,int age);
    ~person();
    void setname(string name);
    string getname();
    void setage(int age);
    int getage();

};

#endif // PERSON_H
