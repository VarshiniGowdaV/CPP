#ifndef STUDENT_H
#define STUDENT_H
#include "personaldetails.h"
#include <string>
using namespace std;

class Student:public PersonalDetails
{
public:
    //Student();
    Student(int id, std::string name, int age,std::string department,std::string mobile_number,std::string address);
    std::string getstudentid(int id);
    std::string getstudentname(std::string name);
    int getstudentmobile_number(std::string smobile_number);
    void set(int id, std::string name, int age,std::string department,std::string mobile_number,std::string address);
    ~Student();
};

#endif // STUDENT_H
