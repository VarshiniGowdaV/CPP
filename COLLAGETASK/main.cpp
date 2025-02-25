#include <iostream>
#include "college.h"
using namespace std;
enum MenuOption
{
    ADD_STUDENT = 1,
    DELETE_STUDENT,
    UPDATE_STUDENT,
    ADD_STAFF,
    DELETE_STAFF,
    UPDATE_STAFF,
    DISPLAY_DATA,
    EXIT
};

int main()
{
    College mycollege;
    int choice;
    string name,oldname,newname;
    while(true)
    {
        cout<<"\n COLLEGE MANAGEMENT SYSTEM\n";
        cout<<"1.Add Student\n";
        cout<<"2.Delete Student\n";
        cout<<"3.Update Student\n";
        cout<<"4.Add Staff\n";
        cout<<"5.Delete Staff\n";
        cout<<"6.Update Staff\n";
        cout<<"7.Display Data\n";
        cout<<"8.Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch(static_cast<MenuOption>(choice))
        {
        case ADD_STUDENT:
            cout<<"Enter student name:";
            cin.ignore();
            getline(cin,name);
            mycollege.addstudent(name);
            break;
        case DELETE_STUDENT:
            cout<<"Enter Student name to Delete:";
            cin.ignore();
            getline(cin,name);
            mycollege.deletestudent(name);
            break;
        case UPDATE_STUDENT:
            cout<<"Enter old student name:";
            cin.ignore();
            getline(cin,oldname);
            cout<<"Enter new student name:";
            cin.ignore();
            getline(cin,newname);
            mycollege.updatestudent(oldname,newname);
            break;
        case ADD_STAFF:
            cout<<"Enter Staff name:";
            cin.ignore();
            getline(cin,name);
            mycollege.addstaff(name);
            break;
        case DELETE_STAFF:
            cout<<"Enter Staff name to Delete:";
            cin.ignore();
            getline(cin,name);
            mycollege.deletestaff(name);
            break;
        case UPDATE_STAFF:
            cout<<"Enter Old Staff name:";
            cin.ignore();
            getline(cin,oldname);
            cout<<"Enter New Staff name:";
            cin.ignore();
            getline(cin,newname);
            mycollege.updatestaff(oldname,newname);
            break;
        case DISPLAY_DATA:
            mycollege.displayData();
            break;
        case EXIT:
            cout<<"Exiting program......."<<endl;
            return 0;
        default:
            cout<<"Invalid choice! please try again."<<endl;
        }
    }
    return 0;
}
