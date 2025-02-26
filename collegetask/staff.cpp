#include "staff.h"

Staff::Staff()
{
    cout<<"staff constructor called"<<endl;
}
Staff::~Staff()
{
    cout<<"staff destructor called"<<endl;
}
Staff::Staff(std::string name, int id, int age)
{
    this->m_name=name;
    this->m_id=id;
    this->m_age=age;
    cout<<"staff details: "<<endl;
}
void Staff::addstaff(name, id, age)
{

}
