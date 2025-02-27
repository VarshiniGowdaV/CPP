
#include "student.h"
#include <iostream>
using namespace std;

Student::Student()
{
    cout<<"student constructor called"<<endl;
}

Student::~Student()
{
    cout<<"student destructor called"<<endl;
}

Student::Student(int id, string name, int age)
{
    this->m_id=id;
    this->m_name=name;
    this->m_age=age;
    cout<<"student details are"<<id<<" "<<name<<" "<<age<<" "<<endl;
}
void Student::display() const
{
    cout<<m_id<<" "<<m_name<<" "<<m_age<<endl;
}

void Student::displaystudent() const
{
    for(const auto &student:studentData)
    {
        student.display();
    }
}
void Student::addstudent(int id, string name, int age)
{
    studentData.emplace_back(id,name,age);
}

void Student::deletestudent(int id)
{
    for(auto i=studentData.begin();i!=studentData.end();++i)
    {
        if(i->getid(id)==id)
        {
            studentData.erase(i);
            cout<<"student with id"<< i->getid(id)<<"removed"<<endl;
            return;
        }
    }
    cout<<"student with id not found"<<endl;
}

void Student::updatestudent(int id)
{
    for(auto &student:studentData)
    {
        if(student.getid(id)==id)
        {
            string name;
            int age;
            cout<<"enter new name"<<endl;
            cin>>name;
            cout<<"enter new age"<<endl;
            cin>>age;
            student.setdetails(name,age);
            cout<<"student details upadted"<<endl;
            return;
        }
    }
    cout<<"student id not found to update"<<endl;
}

void Student::findstudent(int id)
{
    for(auto i=studentData.begin();i!=studentData.end();++i)
    {
        if(i->getid(id)==id)
        {
            cout<<"student found"<<endl;
            return;
        }
    }
    cout<<"student not found"<<endl;
}

int Student::getid(int id)
{
    return id;
}
void Student::setdetails(string name, int age)
{
    this->m_name=name;
    this->m_age=age;
}
