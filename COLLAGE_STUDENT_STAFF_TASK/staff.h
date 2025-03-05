#ifndef STAFF_H
#define STAFF_H
#include "personaldetails.h"
#include "collage.h"
#include <string>

class Staff:public PersonalDetails
{
private:
    float m_salary;
public:
    Staff(int id,std::string name,int age,std::string department,std::string mobile_number,std::string address ,float salary);
    int getstaffid(int id);
    int  getstaffname(std::string name);
    int getstaffnumber(std::string mobile_number);
    void set(int id,std::string name,int age,std::string department,std::string mobile_number,std::string address ,float salary);
    ~Staff();
};

#endif // STAFF_H
