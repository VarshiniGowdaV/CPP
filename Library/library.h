#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include "librarian.h"
#include <vector>
#include "student.h"
#include "book.h"
using namespace std;
class Library
{
private:
    Librarian *m_librarian;
    vector<Book*> m_booklist;
public:
    Library(Librarian * librarian);
    Library();
    ~Library();


};

#endif // LIBRARY_H
