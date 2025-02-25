#include "college.h"

College::College()
{
    cout<<"college constructor called"<<endl;
}
College::~College()
{
    cout<<"destructor called"<<endl;
}
void College::addstudent(string &name)
{
    studentData.addstudent(name);
}
void College::deletestudent(string &name)
{
    studentData.deletestudent(name);

}
void College::updatestudent(string& oldname, string& newname)
{
    studentData.updatestudent(oldname,newname);
}
void College::addstaff(string& name)
{
    staffData.addstaff(name);
}
void College::deletestaff(string& name)
{
    staffData.deletestaff(name);
}
void College::updatestaff(string& oldname, string& newname)
{
    staffData.updatestaff(oldname,newname);
}
void College::displayData()
{
    studentData.displaystudent();
    staffData.displaystaff();
}
