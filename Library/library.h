
#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"
#include <vector>

class Library {
private:
    std::vector<Book> m_booklist;
public:
    Library();
    ~Library();

    //void addBook(const Book& book);
    std::vector<Book>& getBooks();
};

#endif // LIBRARY_H
