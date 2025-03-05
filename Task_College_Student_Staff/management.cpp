#include "management.h"
#include "student.h"
#include <iostream>
using namespace std;
Management::Management()
{
    cout<<"Management constructor called"<<endl;
}
Management::~Management()
{
    cout<<"Management destructor called "<<endl;
}
void Management::addStudent(int id, string name, int age, string department, string mobile_number, string address)
{
    studentdata.emplace_back(id,name,age,department,mobile_number,address);
}
void Management::deleteStudent(int id)
{
    for(auto i=studentdata.begin();i!=studentdata.end();++i)
    {
        if(i->getid()==id)
        {
            studentdata.erase(i);
            cout<<"Student with id"<<i->getid()<<"removed"<<endl;
        }
    }
    cout<<"Student with id not found"<<endl;
}
void Management::updateStudent(int id, string name, int age, string department, string mobile_number, string address)
{
    for(auto i=studentdata.begin();i!=studentdata.end();++i)
    {
        if(i->getid()==id)
        {
            cout<<"Student found"<<endl;
            return;
        }
    }
    cout<<"Student not found"<<endl;
}
void Management::display() const
{

    cout<<id<<" "<<name<<" "<<age<<" "<<department<<" "<<mobile_number<<" "<<address<<" "<<endl;
}
void Management::displayStudent() const
{
    for(const auto &student:studentdata)
    {
        student.display();
    }
}
