#ifndef BOOKS_H
#define BOOKS_H
#include <iostream>
using namespace std;
class Books
{
private:
    string m_bookname;
    string m_bookid;
    bool m_isIssued;
public:
    Books(string bookname,string bookid,bool isIssued);
    Books();
    ~Books();

    string getbookname();
    string getbookid();
    bool getisIssued();

    void setbookdetails(string bookname,string bookid,bool isIssued);
    void issue();
};

#endif // BOOKS_H
