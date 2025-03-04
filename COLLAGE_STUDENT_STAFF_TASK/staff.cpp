#include "staff.h"
#include <iostream>
using namespace std;
Staff::Staff(std::string staffID,std::string staffname,int staffnumber)
{
    cout<<"Staff constructor called"<<endl;
}
Staff::~Staff()
{
    cout<<"staff destructor called"<<endl;
}
