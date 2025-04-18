#include "library.h"

Library::Library()
{
    cout << "Library default constructor called" << endl;
}

Library::Library(Librarian* librarian)
{
    m_librarian = librarian;
    cout << "Library parameter constructor called" << endl;
}

Library::~Library()
{
    cout << "Library destructor called" << endl;
}


void Library::addBook(const Book& book) {
    m_booklist.push_back(book);
}

std::vector<Book>& Library::getBooks() {
    return m_booklist;
}
