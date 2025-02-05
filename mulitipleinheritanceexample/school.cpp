#include "school.h"
#include "student.h"
#include "teacher.h"
#include <iostream>
using namespace std;
school::school(int student_num,std::string student_name,int teacher_num,std::string teacher_name)
    :student(student_num,student_name),teacher(teacher_num,teacher_name)
{

}
school::~school()
{

}
