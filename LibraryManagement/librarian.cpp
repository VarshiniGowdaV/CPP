#include "librarian.h"
#include <iostream>
using namespace std;
Librarian::Librarian(string name, Book *book1, Book *book2, Book *book3)
{
    m_name=name;
    m_book1=book1;
    m_book2=book2;
    m_book3=book3;
    cout<<"Librarian parameter constructor called"<<endl;
}
Librarian::Librarian()
{
    cout<<"Librarian constructor called"<<endl;
}
Librarian::~Librarian()
{
    cout<<"Librarian destructor called"<<endl;
}
string Librarian::getname()
{
    return m_name;
}
void Librarian::setname(string name)
{
    m_name=name;
}
Book * Librarian::getbook1()
{
    return m_book1;
}
Book * Librarian::getbook2()
{
    return m_book2;
}
Book * Librarian::getbook3()
{
    return m_book3;
}
void Librarian::setBook(Book *book1, Book *book2, Book *book3)
{
    m_book1=book1;
    m_book2=book2;
    m_book3=book3;
}
