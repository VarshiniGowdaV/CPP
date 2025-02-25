#include "staff.h"

Staff::Staff()
{
    cout<<"staff constructor called"<<endl;
}
Staff::~Staff()
{
    cout<<"staff destructor called"<<endl;
}
void Staff::addstaff(string& name)
{
    staffMembers.push_back(name);
    cout<<"staff added:"<<name<<endl;
}
void Staff::deletestaff(string& name)
{
    for(auto it =staffMembers.begin();it !=staffMembers.end();++it)
    {
        if(*it == name)
        {
            staffMembers.erase(it);
            cout<<"staff deleted: "<<name<<endl;
            return;
        }
    }
    cout<<"staff not found: "<<name<<endl;
}
void Staff::updatestaff(string& oldname, string& newname)
{
    for(auto& staff: staffMembers)
    {
        if(staff==oldname)
        {
            staff==newname;
            cout<<"staff updated from"<<oldname<<" to "<<newname<<endl;
            return;
        }
    }
    cout<<"staff not found: "<<oldname<<endl;
}
void Staff::displaystaff()
{
    cout<<"staff list: "<<endl;
    for(auto& staff:staffMembers)
    {
        cout<<staff<<" "<<endl;
    }
}
