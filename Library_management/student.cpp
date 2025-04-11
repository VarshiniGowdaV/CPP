#include "student.h"
#include "librarymanagement.h"
Student::Student()
{
    cout << "student constructor called" << endl;
}

Student::Student(string name, string id, string dep)
{
    m_studentname = name;
    m_id = id;
    m_dep = dep;
}

Student::~Student()
{
    cout << "student destructor called" << endl;
}

string Student::getname()
{
    return m_studentname;
}

string Student::getid()
{
    return m_id;
}

string Student::getdep()
{
    return m_dep;
}

void Student::setstudentdetails(string name, string id, string dep)
{
    m_studentname = name;
    m_id = id;
    m_dep = dep;
}

void Student::requestBook(Staff& staff, string& bookname)
{
    cout << m_studentname << " is requesting the book: " << bookname << "\n";
    if (library != nullptr)
    {
        library->IssueBookToStudent(bookname);
    }
    else
    {
        cout << "Library pointer is null!" << endl;
    }
}
