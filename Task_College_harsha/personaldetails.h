#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H
#include <iostream>
using namespace std;
class PersonalDetails
{
protected:
    int m_id;
    std::string m_name;
    std::string m_department;

public:
    PersonalDetails();
    ~PersonalDetails();
};

#endif // PERSONALDETAILS_H
