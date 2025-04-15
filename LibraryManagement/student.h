#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "librarian.h"
using namespace std;
class Student
{
private:
    string m_name;
    Librarian *m_librarian;
public:
    Student(string name,Librarian *librarian);
    Student();
    ~Student();

    string getname();
    void setname(string name);

    Librarian * getlibrarian();
    void setlibrarian(Librarian *lib);

};

#endif // STUDENT_H
