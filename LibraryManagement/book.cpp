#include "book.h"
#include <iostream>
using namespace std;
Book::Book(string title, int id)
{
    m_title=title;
    m_id=id;
    cout<<"Book parameter constructor called"<<endl;
}
Book::Book()
{
    cout<<"book default constructor called"<<endl;
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
void Book::setBookDetail(string title, int id)
{
    m_title=title;
    m_id=id;
}
