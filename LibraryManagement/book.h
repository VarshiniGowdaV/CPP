#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;
class Book
{
private:
    string m_title;
    int m_id;
public:
    Book(string title,int id);
    Book();
    ~Book();

    string  gettitle();
    int getid();

    void setBookDetail(string title,int id);
};

#endif // BOOK_H
