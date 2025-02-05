#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include "string"
class teacher
{
public:
    int m_teacher_num;
    std::string m_teacher_name;
    teacher(int teacher_num,std::string m_teacher_name);
    ~teacher();
    void display();
};

#endif // TEACHER_H
