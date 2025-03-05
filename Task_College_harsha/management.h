#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include <list>
#include <vector>
#include "student.h"
#include "staff.h"
class Management
{
private:
    list<Student>*m_student;
    vector<Staff>*m_staff;
public:
    Management();
    ~Management();

    void initstudent(list<Student>*m_student);
    void initstaff(vector<Staff>*m_staff);

    void addstudent(int id,std::string name,std::string department);
    void deletestudent(int id);
    void updatestudent(int id,std::string name,std::string department);
    void findstudent(int id);

    void addstaff(int id,std::string name,std::string department);
    void deletestaff(int id);
    void updatestaff(int id,std::string name,std::string department);
    void findstaff(int id);

    void displaystaff();
    void displaystudent();

};

#endif // MANAGEMENT_H
