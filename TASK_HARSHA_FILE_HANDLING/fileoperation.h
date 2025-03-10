#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include "student.h"
#include <iostream>
#include <list>
class Fileoperation
{
public:
    Fileoperation();
    virtual ~Fileoperation();
    virtual void writeData(const list<Student>& students)=0;
    virtual list<Student>readData()=0;
    void saveStudentData(int choice);
    void loadStudentData(int choice);
    void saveStaffData(int choice);
    void loadStaffData(int choice);
};

#endif // FILEOPERATION_H
