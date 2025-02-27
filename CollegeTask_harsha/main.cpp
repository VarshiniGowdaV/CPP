#include <iostream>
#include "student.h"
#include "college.h"
#include "staff.h"
using namespace std;

int main()
{
    College collegeobj;
    Student studentobj;
    Staff staffobj;
    int id,choice,age;
    string department;
    string name;
    while(true)
    {
        cout<<"1.add student"<<endl;
        cout<<"2.delete student"<<endl;
        cout<<"3.update student"<<endl;
        cout<<"4.display student"<<endl;
        cout<<"5.find student"<<endl;
        cout<<"6.add staff"<<endl;
        cout<<"7.delete staff"<<endl;
        cout<<"8.update staff"<<endl;
        cout<<"9.display staff"<<endl;
        cout<<"10.find staff"<<endl;
        cout<<"11.exit"<<endl;

        cout<<"enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1:
        {
            cout<<"enter student id, name and age"<<endl;
            cin>>id>>name>>age;
            studentobj.addstudent(id,name,age);
            break;
        }
        case 2:
        {
            cout<<"enter student id to delete"<<endl;
            cin>>id;
            studentobj.deletestudent(id);
            break;
        }

        case 3:
        {
            cout<<"enter student id to update"<<endl;
            cin>>id;
            studentobj.updatestudent(id);
            break;
        }

        case 4:
        {
            cout<<"display student list"<<endl;
            studentobj.displaystudent();
            break;
        }

        case 5:
        {
            cout<<"enter student id to find"<<endl;
            cin>>id;
            studentobj.findstudent(id);
            break;
        }

        case 6:
        {
            cout<<"enter staff id, name and department"<<endl;
            cin>>id>>name>>department;
            staffobj.addstaff(id,name,department);
            break;
        }
        case 7:
        {
            cout<<"enter staff id to delete"<<endl;
            cin>>id;
            staffobj.deletestaff(id);
            break;
        }

        case 8:
        {
            cout<<"enter staff id to update"<<endl;
            cin>>id;
            staffobj.updatestaff(id);
            break;
        }

        case 9:
        {
            cout<<"display staff list"<<endl;
            staffobj.displaystaff();
            break;
        }

        case 10:
        {
            cout<<"enter staff id to find"<<endl;
            cin>>id;
            staffobj.findstaff(id);
            break;
        }

        case 11:
        {
            exit(0);
            break;
        }
        }
    }

    return 0;
}
