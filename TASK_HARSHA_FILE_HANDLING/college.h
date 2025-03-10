#ifndef COLLEGE_H
#define COLLEGE_H
#include "student.h"
#include "staff.h"
#include <list>
#include <vector>
#include "management.h"
class College
{
private:
    list<Student>m_student;
    vector<Staff>m_staff;
public:
    Management *m_management;
    College();
    ~College();
};

#endif // COLLEGE_H
