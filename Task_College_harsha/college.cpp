#include "college.h"
#include <iostream>
using namespace std;
College::College()
{
    cout<<"College constructor called"<<endl;
    m_management->initstudent(&m_student);
    m_management->initstaff(&m_staff);
}
College::~College()
{
    cout<<"College destructor called"<<endl;
}
