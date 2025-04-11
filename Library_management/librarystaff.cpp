#include "librarystaff.h"

Staff::Staff()
{
    cout<<"Sttaff constructor called"<<endl;
}
Staff::Staff(string name, string id)
{
    m_name=name;
    m_id=id;
}
Staff::~Staff()
{
    cout<<"Staff destructor called"<<endl;
}
string Staff::getname()
{
    return m_name;
}
string Staff::getid()
{
    return m_id;
}
void Staff::setStaffdetails(string name, string id)
{
    m_name=name;
    m_id=id;
}
