#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include <iostream>
#include "book.h"
using namespace std;
class Librarian
{
private:
    string m_name;
    Book * m_book1;
    Book * m_book2;
    Book * m_book3;
public:
    Librarian(string name,Book *book1,Book *book2,Book *book3);
    Librarian();
    ~Librarian();

    string getname();
    void setname(string name);

    void setBook(Book *book1,Book*book2,Book*book3);
    Book *getbook1();
    Book *getbook2();
     Book *getbook3();
};

#endif // LIBRARIAN_H
