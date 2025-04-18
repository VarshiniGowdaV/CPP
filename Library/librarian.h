#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <string>
#include "student.h"
#include "library.h"

class Librarian {
private:
    std::string m_name;
public:
    Librarian();
    Librarian(std::string name);
    ~Librarian();

    std::string getname();
    void setname(std::string name);

    void issueBook(const std::string& bookName, Student& student, Library& library);
};

#endif
