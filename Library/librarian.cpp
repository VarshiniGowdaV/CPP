#include "librarian.h"

Librarian::Librarian()
{
    cout << "Librarian default constructor called" << endl;
}

Librarian::Librarian(string name)
{
    m_name = name;
}

Librarian::~Librarian()
{
    clearBooks(); // Deletes books in m_booklist
    cout << "Librarian destructor called" << endl;
}

string Librarian::getname()
{
    return m_name;
}

void Librarian::setname(string name)
{
    m_name = name;
}

Book* Librarian::issueBook(vector<Book*>& booklist, string& title)
{
    for (auto i = booklist.begin(); i != booklist.end(); ++i)
    {
        if ((*i)->gettitle() == title) {
            Book* foundBook = *i;
            booklist.erase(i);
            cout << "Book \"" << title << "\" issued by Librarian " << m_name << endl;
            return foundBook;
        }
    }
    cout << "Book \"" << title << "\" not available.\n";
    return nullptr;
}

void Librarian::addBook(Book* book)
{
    m_booklist.push_back(book);
}

void Librarian::showBook()
{
    cout << "Books in library: " << endl;
    if (m_booklist.empty())
    {
        cout << "No books available" << endl;
        return;
    }
    for (Book* book : m_booklist)
    {
        cout << "- " << book->gettitle() << " (ID: " << book->getid() << ")\n";
    }
}

void Librarian::studentRequestBook(Student& student, string& title)
{
    processRequest(student, title);
}

void Librarian::processRequest(Student& student, const string& title)
{
    for (auto i = m_booklist.begin(); i != m_booklist.end(); ++i)
    {
        if ((*i)->gettitle() == title)
        {
            cout << "Book \"" << title << "\" issued to " << student.getname() << " by " << m_name << endl;
            delete *i;
            m_booklist.erase(i);
            return;
        }
    }
    cout << "Book \"" << title << "\" not available in library." << endl;
}

void Librarian::clearBooks()
{
    for (Book* book : m_booklist)
        delete book;
    m_booklist.clear();
}
