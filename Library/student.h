#ifndef STUDENT_H
#define STUDENT_H

#include "book.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
private:
    int m_studentId;
    string m_name;
    vector<Book> m_borrowedBooks;

public:
    Student(int studentId, string& name);
    Student();
    ~Student();

    string getName();
    void setStudentName( string& name);
    int getStudentId();


    void requestBook( Book& book);
    void showBorrowedBooks() ;
};

#endif // STUDENT_H
