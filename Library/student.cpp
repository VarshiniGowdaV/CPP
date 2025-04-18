#include "student.h"

Student::Student()
{
    cout << "Student default constructor called" << endl;
}

Student::Student(int studentId, string& name)
{
    m_studentId = studentId;
    m_name = name;
    cout << "Student parameter constructor called" << endl;
}

Student::~Student()
{
    cout << "Student destructor called" << endl;
}

string Student::getName()
{
    return m_name;
}

void Student::setStudentName(string& name)
{
    m_name = name;
}

int Student::getStudentId()
{
    return m_studentId;
}

void Student::requestBook(Book& book)
{
    m_borrowedBooks.push_back(book);
}

void Student::showBorrowedBooks()
{
    cout << "Books Borrowed by " << m_name << " : \n";
    for (auto& book : m_borrowedBooks)
    {
        cout << " - " << book.gettitle() << " by " << book.getauthor() << "\n";
    }
}
