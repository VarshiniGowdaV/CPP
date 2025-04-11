#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "librarystaff.h"
//#include "librarymanagement.h"

using namespace std;
class Librarymanagement;
class Student {
private:
    string m_studentname;
    string m_id;
    string m_dep;

public:
    Librarymanagement* library;

    Student();
    Student(string name, string id, string dep);
    ~Student();

    string getname();
    string getid();
    string getdep();

    void setstudentdetails(string name, string id, string dep);
    void requestBook(Staff& staff, string& bookname);
};

#endif // STUDENT_H
