#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;
class student
{
    std::string m_name;
    int m_age;
public:
    student(string name,int age);
    ~student();
    void setname(string name);
    string getname();
    void setage(int age);
    int getage();
};

#endif // STUDENT_H
