#ifndef COLLEGE_H
#define COLLEGE_H
#include <iostream>
#include <list>
#include <vector>
using namespace std;
// #include"student.h"
// #include "staff.h"
class Student;
class Staff;
class College
{
protected:
    std::list<Student>m_studentData;
    std::vector<Staff>m_staffData;
public:
    College();
    ~College();

};

#endif // COLLEGE_H
