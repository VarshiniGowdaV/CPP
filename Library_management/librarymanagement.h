#ifndef LIBRARYMANAGEMENT_H
#define LIBRARYMANAGEMENT_H

#include <list>
#include <iostream>
#include <string>
#include "books.h"
#include "student.h"

using namespace std;

class Librarymanagement
{
private:
    list<Books> m_book;
    list<Student> m_student;

public:
    Librarymanagement();
    ~Librarymanagement();

    void initBook( list<Books>& books);
    void initStudent( list<Student>& students);

    void addBook(Books& book);
    void showAvailableBooks();
    void IssueBookToStudent( string& name);
    void DisplayBook();
    void DisplayStudent();
};

#endif // LIBRARYMANAGEMENT_H
