#ifndef COLLEGE_H
#define COLLEGE_H

#include "Student.h"
#include "Staff.h"

class College {
private:
    Student studentData;
    Staff staffData;

public:
    void addStudent(const string& name);
    void deleteStudent(const string& name);
    void updateStudent(const string& oldName, const string& newName);
    void addStaff(const string& name);
    void deleteStaff(const string& name);
    void updateStaff(const string& oldName, const string& newName);
    void displayData() const;
};

#endif
