#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <string>
#include "student.h"
#include "library.h"

class Librarian {
private:
    std::string m_name;
    std::vector<Book> m_booklist;
public:
    Librarian();
    Librarian(std::string name);
    ~Librarian();

    std::string getname();
    void setname(std::string name);
     std::vector<Book>& getBooks();

    void addBook(const Book& book);
    void issueBook(const std::string& bookName, Student& student, Library& library);
};

#endif
