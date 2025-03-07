#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
class Student
{
private:
    std::string m_name;
    std::string m_mobilenumber;
    int m_age;
    std::string m_usn;
public:
    Student(std::string name,std::string mobilenumber,int age,std::string usn);
    ~Student();
    Student();
};

#endif // STUDENT_H
