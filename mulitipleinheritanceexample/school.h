#ifndef SCHOOL_H
#define SCHOOL_H
#include "student.h"
#include "teacher.h"
#include <iostream>
using namespace std;
class school:public student,public teacher
{
public:
    school(int student_num, string student_name, int teacher_num, string teacher_name);
    ~school();
};

#endif // SCHOOL_H
