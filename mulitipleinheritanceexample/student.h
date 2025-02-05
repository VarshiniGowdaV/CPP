#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;
class student
{
public:
    int m_student_num;
    std::string m_student_name;
    student(int student_num,std::string student_name);
    ~student();
    void display();
};

#endif // STUDENT_H
