#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <iostream>
#include <vector>
#include <string>
#include "book.h"
#include "student.h"

using namespace std;

class Librarian {
private:
    string m_name;
    vector<Book*> m_booklist;
public:
    Librarian();
    Librarian(string name);
    ~Librarian();

    string getname();
    void setname(string name);

    Book* issueBook(vector<Book*>& booklist, string& title);
    void addBook(Book* book);
    void showBook();
    void studentRequestBook(Student& student, string& title);
    void processRequest(Student& student, const string& title);
    void clearBooks();
};

#endif
