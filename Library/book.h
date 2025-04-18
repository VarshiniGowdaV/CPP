#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;

class Book {
private:
    string m_title;
    string m_author;
    int m_id;
    bool m_available;

public:
    Book(string title,string author, int id,bool available);
    Book();
    ~Book();

    string gettitle();
    int getid();
    string getauthor();
    bool getAvailable();
    void setAvailable(bool status);
    void setbook(string title,string author, int id);
};

#endif // BOOK_H
