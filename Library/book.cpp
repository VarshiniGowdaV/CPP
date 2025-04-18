#include "book.h"

Book::Book() {
    cout << "Book default constructor called" << endl;
}

Book::Book(string title, string author, int id, bool available) {
    m_title = title;
    m_author = author;
    m_id = id;
    m_available = available;
    cout << "Book parameter constructor called" << endl;
}

Book::~Book() {
    cout << "Book destructor called" << endl;
}

string Book::gettitle() {
    return m_title;
}

string Book::getauthor() {
    return m_author;
}

int Book::getid() {
    return m_id;
}

bool Book::getAvailable() {
    return m_available;
}

void Book::setAvailable(bool status) {
    m_available = status;
}

void Book::setbook(string title, string author, int id) {
    m_title = title;
    m_author = author;
    m_id = id;
}
