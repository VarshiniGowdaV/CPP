#ifndef STAFF_H
#define STAFF_H
#include "personaldetails.h"

class Staff:public PersonalDetails
{

public:
    Staff();
    Staff(int id,std::string name,std::string department);
    ~Staff();

    int getid();
    std::string getname();
    std::string getdepartment();

    void setstaffdetails(std::string name,std::string department);
};

#endif // STAFF_H
