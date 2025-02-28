#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <list>
using namespace std;

class Student
{
private:
    int m_id;
    std::string m_name;
    int m_age;
public:
    Student();
    ~Student();
    list<Student> studentData;
    Student(int id,std::string name,int age);

    void display() const;
    void displaystudent() const;

    void addstudent(int id,std::string name,int age);
    void deletestudent(int id);

    void updatestudent(int id);
    void findstudent(int id);

    int getid(int id);
    void setdetails(string name,int age);
};

#endif // STUDENT_H
