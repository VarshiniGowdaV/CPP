#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<list>
using namespace std;
class Student
{
private:
    list<string>students;
public:
    Student();
    ~Student();
    void addstudent(std::string& name);
    void deletestudent(std::string& name);
    void updatestudent(std::string& oldname,std::string& newname);
    void displaystudent();
};

#endif // STUDENT_H
