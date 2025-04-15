#include "student.h"
#include <iostream>
using namespace std;
Student::Student(string name, Librarian *librarian)
{
    m_name=name;
    m_librarian=librarian;
    cout<<"Librarian parameter called"<<endl;
}
Student::Student()
{
    cout<<"Student constructor called"<<endl;
}
Student::~Student()
{
    cout<<"student destructor called"<<endl;
}
string Student::getname()
{
    return m_name;
}
void Student::setname(string name)
{
    m_name=name;
}
Librarian *Student::getlibrarian()
{
    return m_librarian;
}
void Student::setlibrarian(Librarian *lib)
{
    m_librarian=lib;
}
