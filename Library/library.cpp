#include "library.h"

Library::Library()
{
    cout<<"library default constructor called"<<endl;
}
Library::Library(Librarian *librarian)
{
    m_librarian=librarian;
    cout<<"Library parameter constructor called"<<endl;
}
Library::~Library()
{
    cout<<"Library destructor called"<<endl;
}
