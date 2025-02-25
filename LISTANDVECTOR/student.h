#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <list>
using namespace std;

class Student {
private:
    list<string> students;

public:
    void addStudent(const string& name);
    void deleteStudent(const string& name);
    void updateStudent(const string& oldName, const string& newName);
    void displayStudents() const;
};

#endif
