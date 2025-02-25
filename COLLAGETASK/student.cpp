#include "student.h"

Student::Student()
{
    cout<<"student constructor called"<<endl;
}
Student::~Student()
{
    cout<<"student destructor called"<<endl;
}
void Student::addstudent(string& name)
{
    students.push_back(name);
    cout<<"student added: "<<name<<endl;
}
void Student::deletestudent(string& name)
{
    students.remove(name);
    cout<<"student deleted: "<<name<<endl;
}
void Student::updatestudent(string& oldname, string& newname)
{
    for(auto& student :students)
    {
        if(student == oldname)
        {
            student==newname;
            cout<<"student updated from "<<oldname<<" to "<<newname<<endl;
            return;
        }
    }
    cout<<"student not found:"<<oldname<<endl;
}
void Student::displaystudent()
{
    cout<<"student list: "<<endl;
    for(auto& student:students)
    {
        cout<<student<<" "<<endl;
    }
}
