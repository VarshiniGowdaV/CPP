#include <iostream>
#include "student.h"
#include "librarian.h"
#include "library.h"
#include "book.h"

using namespace std;

int main()
{
    Librarian* librarian = new Librarian("Raju");
    Library library(librarian);

    librarian->addBook(new Book("C++ programming", 101));
    librarian->addBook(new Book("C Programming", 110));
    librarian->addBook(new Book("Python", 116));

    librarian->showBook();

    Student student1("Varshini");
    librarian->processRequest(student1, "C Programming");

    librarian->clearBooks();
    delete librarian;

    return 0;
}
