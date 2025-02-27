#include "staff.h"
#include<iostream>
using namespace std;

Staff::Staff()
{
    cout<<"staff constructor called"<<endl;
}

Staff::~Staff()
{
    cout<<"staff destructor called"<<endl;
}

Staff::Staff(int id, string name,string department)
{
    this->m_id=id;
    this->m_name=name;
    this->m_department=department;
    cout<<"staff details are"<<id<<" "<<name<<" "<<department<<" "<<endl;
}
void Staff::display() const
{
    cout<<m_id<<" "<<m_name<<" "<<m_department<<" "<<endl;
}

void Staff::displaystaff() const
{
    for(const auto &Staff:staffData)
    {
        Staff.display();
    }
}
void Staff::addstaff(int id, std::string name,std::string department)
{
    staffData.push_back(Staff(id,name,department));
}

void Staff::deletestaff(int id)
{
    for(auto i=staffData.begin();i!=staffData.end();++i)
    {
        if(i->getid(id)==id)
        {
            staffData.erase(i);
            cout<<"staff with id"<< i->getid(id)<<"removed"<<endl;
            return;
        }
    }
    cout<<"staff with id not found"<<endl;
}

void Staff::updatestaff(int id)
{
    for(auto &Staff:staffData)
    {
        if(Staff.getid(id)==id)
        {
            string name;
            string department;
            cout<<"enter new name"<<endl;
            cin>>name;
            cout<<"enter new department"<<endl;
            cin>>department;
            Staff.setdetails(name,department);
            cout<<"staff details upadted"<<endl;
            return;
        }
    }
    cout<<"staff id not found to update"<<endl;
}

void Staff::findstaff(int id)
{
    for(auto i=staffData.begin();i!=staffData.end();++i)
    {
        if(i->getid(id)==id)
        {
            cout<<"staff found"<<endl;
            return;
        }
    }
    cout<<"staff not found"<<endl;
}

int Staff::getid(int id)
{
    return id;
}
void Staff::setdetails(string name,string department)
{
    this->m_name=name;
    this->m_department=department;
}
