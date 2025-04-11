#include "librarymanagement.h"
#include <iostream>
using namespace std;
Librarymanagement::Librarymanagement()
{
    cout<<"Librarymanagement constructor called"<<endl;
}
Librarymanagement::~Librarymanagement()
{
    cout<<"Librarymanagementdestructor called"<<endl;

}
void Librarymanagement::initBook(list<Books> &m_book)
{
    this->m_book=m_book;
}
void Librarymanagement::initStudent(list<Student> &m_student)
{
    this->m_student=m_student;
}
void Librarymanagement::addBook(Books &book)
{
    m_book.push_back(book);
}
void Librarymanagement::showAvailableBooks()
{
    cout<<"Available Books in library:\n"<<endl;
    for(auto i=m_book.begin();i!=m_book.end();i++)
    {
        if(!i->getisIssued())
        {
            cout<<"  "<<i->getbookname()<<"\n"<<endl;
        }
    }
}
void Librarymanagement::IssueBookToStudent(string &name)
{
    for(auto i=m_book.begin();i!=m_book.end();i++)
    {
        if(i->getbookname() == name && i->getisIssued())
        {
            i->issue();
            cout<<"Book "<<name << "issued successfully.\n"<<endl;
            //return true;
        }
    }
    cout<<"Book "<<name<<"is not available.\n"<<endl;
    //return false;
}
void Librarymanagement::DisplayBook()
{
    for(auto i=m_book.begin();i!=m_book.end();i++)
    {
        cout<<i->getbookname()<<" "<<i->getbookid()<<" "<<i->getisIssued()<<" "<<endl;
    }
}
void Librarymanagement::DisplayStudent()
{
    for(auto i=m_student.begin();i!=m_student.end();i++)
    {
        cout<<i->getname()<<" "<<i->getid()<<" "<<i->getdep()<<" "<<endl;
    }
}
