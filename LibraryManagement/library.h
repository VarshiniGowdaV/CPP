#ifndef LIBRARY_H
#define LIBRARY_H
#include "student.h"
#include "book.h"
#include "librarian.h"
#include <list>
class Library
{
private:
    Librarian *lib;
public:
    std::list<Book*> m_booklist;
    Library();
    ~Library();
};

#endif // LIBRARY_H
