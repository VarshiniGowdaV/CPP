#include "management.h"
#include <iostream>
#include "college.h"
using namespace std;
Management::Management()
{
    cout<<"Management constructor called"<<endl;
}
void Management::initstudent(list<Student> *m_student)
{
    this->m_student=m_student;
}
void Management::initstaff(vector<Staff> *m_staff)
{
    this->m_staff=m_staff;
}
void Management::addstudent(int id,std::string name,std::string department)
{
    m_student->push_back(Student(id,name,department));
}
void Management::deletestudent(int id)
{
    for(auto i=m_student->begin();i !=m_student->end();i++)
    {
        if(i->getid()==id)
        {
            m_student->erase(i);
            cout<<"Student with id"<<id<<" deleted"<<endl;
        }
    }
    cout<<"Student with id"<<id<<"not found "<<endl;
}
void Management::updatestudent(int id,std::string name,std::string department)
{
    for(auto i =m_student->begin();i!=m_student->end();i++)
    {
        if(i->getid()==id)
        {
            i->setstudentdetails(name,department);
        }
    }
    cout<<"Student with id"<<id<<"not found"<<endl;
}
void Management::findstudent(int id)
{
    for(auto i=m_student->begin();i!=m_student->end();i++)
    {
        if(i->getid()==id)
        {
            cout<<i->getname()<<endl;
            cout<<i->getdepartment()<<endl;
        }
    }
    cout<<"student with id"<<id<<"not found"<<endl;
}
void Management::addstaff(int id, string name, string department)
{
    m_staff->push_back(Staff(id,name,department));
}
void Management::deletestaff(int id)
{
    for(auto i=m_staff->begin();i !=m_staff->end();i++)
    {
        m_staff->erase(i);
        cout<<"staff with id"<<id<<" deleted"<<endl;
        return;
    }
    cout<<"staff with id"<<id<<" not found"<<endl;
}
void Management::updatestaff(int id, string name, string department)
{
    for(auto i=m_staff->begin();i!=m_staff->end();i++)
    {
        if(i->getid()==id)
        {
        i->setstaffdetails(name,department);
        }
    }
    cout<<"Staff with id"<<id<<" not found"<<endl;
}
void Management::findstaff(int id)
{
    for(auto i=m_staff->begin(); i !=m_staff->end();i++)
    {
        if(i->getid()==id)
        {
            cout<<i->getname()<<endl;
            cout<<i->getdepartment()<<endl;
        }
    }
    cout<<"staff with id"<<id<<"not found"<<endl;
}
void Management::displaystudent()
{
    for(auto i=m_student->begin();i!=m_student->end();i++)
    {
        cout<<i->getid()<<" "<<i->getname()<<" "<<i->getdepartment()<<" "<<endl;
    }
}
void Management::displaystaff()
{
    for(auto i=m_staff->begin();i!=m_staff->end();i++)
    {
        cout<<i->getid()<<" "<<i->getname()<<" "<<i->getdepartment()<<" "<<endl;
    }
}
Management::~Management()
{
    cout<<"Management destructor called"<<endl;
    delete m_student;
    delete m_staff;
}
