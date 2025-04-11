#include "books.h"

Books::Books(string bookname,string bookid,bool isIssued)
{
    m_bookname=bookname;
    m_bookid=bookid;
    m_isIssued=isIssued;
    cout<<"Books parameter constructor called"<<endl;
}
Books::Books()
{
    cout<<"Book default constructor called"<<endl;
}
Books::~Books()
{
    cout<<"Book destructor called"<<endl;
}
string Books::getbookname()
{
    return m_bookname;
}
string Books::getbookid()
{
    return m_bookid;
}
bool Books::getisIssued()
{
    return m_isIssued;
}
void Books::setbookdetails(string bookname, string bookid, bool isIssued)
{
    m_bookname=bookname;
    m_bookid=bookid;
    m_isIssued=isIssued;
}
void Books::issue()
{
    m_isIssued=true;
}
