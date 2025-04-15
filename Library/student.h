#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;
class Student
{
    string m_name;
public:
    Student(string name);
    Student();
    ~Student();

    string getname();
    void setstudentname(string name);
};

#endif // STUDENT_H
