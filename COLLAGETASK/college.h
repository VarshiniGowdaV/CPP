#ifndef COLLEGE_H
#define COLLEGE_H
#include <list>
#include<vector>
#include"student.h"
#include"staff.h"

class College
{
private:
    Student studentData;
    Staff staffData;
public:
    College();
    ~College();
    void addstudent(std::string& name);
    void deletestudent(std::string& name);
    void updatestudent(std::string& oldname,std::string& newname);
    void addstaff(std::string& name);
    void deletestaff(std::string& name);
    void updatestaff(std::string& oldname,std::string& newname);
    void displayData();
};

#endif // COLLEGE_H
