#ifndef STUDENT_H
#define STUDENT_H
#include "personaldetails.h"
class Student:public PersonalDetails
{
public:
    Student();
    Student(int id, string name, string department);
    ~Student();

    int getid();
    std::string getname();
    std::string getdepartment();

    void setstudentdetails(std::string name,std::string department);

};

#endif // STUDENT_H
