#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include "librarian.h"
#include <vector>
#include "student.h"
#include "book.h"

using namespace std;
class Librarian;
class Library {
private:
    Librarian* m_librarian;
    std::vector<Book> m_booklist;
public:
    Library(Librarian* librarian);
    Library();
    ~Library();

    void addBook(const Book& book);
    std::vector<Book>& getBooks();
};

#endif // LIBRARY_H
