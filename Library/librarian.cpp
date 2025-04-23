
#include "librarian.h"
#include <iostream>
using namespace std;

Librarian::Librarian() {
    cout << "Librarian constructor called" << endl;
}

Librarian::Librarian(string name) {
    m_name = name;
}

Librarian::~Librarian() {
    cout << "Librarian destructor called" << endl;
}

string Librarian::getname() {
    return m_name;
}

void Librarian::setname(string name) {
    m_name = name;
}
void Librarian::addBook(const Book& book) {
    m_booklist.push_back(book);
}

void Librarian::issueBook(const std::string& bookName, Student& student, Library& library) {
    std::vector<Book>& books = library.getBooks();

    for (Book& book : books) {
        if (book.gettitle() == bookName && book.getAvailable()) {
            book.setAvailable(false);
            student.requestBook(book);
            std::cout << "Book '" << bookName << "' issued to " << student.getName() << ".\n";
            return;
        }
    }

    std::cout << "Book '" << bookName << "' is not available in the library.\n";
}
std::vector<Book>& Librarian::getBooks() {
    return m_booklist;
}
