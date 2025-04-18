#include "librarian.h"
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

Book* Librarian::searchBook(string& title) {
    extern vector<Book> bookList;
    for (auto& book : bookList) {
        if (book.gettitle() == title) {
            return &book;
        }
    }
    return nullptr;
}

void Librarian::issueBook(const std::string& bookName, Student& student, Library& library) {
    std::vector<Book>& books = library.getBooks();
    return;

    for (Book& book : books) {
        if (book.gettitle() == bookName && book.getAvailable()) {
            book.setAvailable(false);
            student.showBorrowedBooks();
            std::cout << "Book '" << bookName << "' issued to student.\n";
        }
    }
    std::cout << "Book '" << bookName << "' is not available in library.\n";
}
