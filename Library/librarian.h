#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <iostream>
#include <vector>
#include <string>
#include "book.h"
#include "student.h"
#include "library.h"
class Library;
class Librarian {
private:
    std::string m_name;
public:
    Librarian();
    Librarian(std::string name);
    ~Librarian();

    std::string getname();
    void setname(std::string name);

    Book* searchBook(std::string& title);
    void issueBook(const std::string& bookName, Student& student, Library& library);
};

#endif
