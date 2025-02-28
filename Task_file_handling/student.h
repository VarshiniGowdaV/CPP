#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;
class Student
{
private:
    std::string m_name;
    int m_age;
    std::string m_usn;
    std::string m_mobile_number;

public:
    Student();
    ~Student();
    Student(std::string name,int age,std::string usn,std::string mobile_number);
    void display();

};

#endif // STUDENT_H
