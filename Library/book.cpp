#include "book.h"

Book::Book()
{
    cout<<"Book default constructor called"<<endl;
}
Book::Book(string title, int id)
{
    m_title=title;
    m_id=id;
    cout<<"Book parameter constructor called"<<endl;
}
Book::~Book()
{
    cout<<"Book destructor called"<<endl;
}
string Book::gettitle()
{
    return m_title;
}
int Book::getid()
{
    return m_id;
}
void Book::setbook(string title, int id)
{
    m_title=title;
    m_id=id;
}
