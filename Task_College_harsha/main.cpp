#include <iostream>
#include "college.h"
#include "student.h"
#include "staff.h"
#include "personaldetails.h"
#include "management.h"
using namespace std;


enum MenuChoices
{
    STUDENT = 1,
    STAFF,
    EXIT
};
enum StudentChoices
{
    ADD = 1,
    DELETE_STUDENT,
    UPDATE,
    SEARCH,
    DISPLAY,
    STUDENT_EXIT
};
enum StaffChoices
{
    ADD_STAFF = 1,
    DELETE_STAFF,
    UPDATE_STAFF,
    SEARCH_STAFF,
    DISPLAY_STAFF,
    STAFF_EXIT
};

int main()
{
    College Mycollege;

    int choice, option = 0;
    int id;
    std::string name;
    std::string department;

    while (true)
    {
        cout << "Enter 1.Student 2.Staff 3.Exit" << endl;
        cin >> option;

        switch (option)
        {
        case STUDENT:
        {
            bool student = true;
            while (student)
            {
                cout << " 1.Add Student " << endl;
                cout << " 2.Delete Student" << endl;
                cout << " 3.Update Student" << endl;
                cout << " 4.Search Student" << endl;
                cout << " 5.Display Student" << endl;
                cout << " 6.Exit" << endl;
                cin >> choice;

                switch (choice)
                {
                case ADD:
                    cout << "Enter StudentId: ";
                    cin >> id;
                    cout << "Name: ";
                    cin >> name;
                    cout << "Department: ";
                    cin >> department;
                    Mycollege.m_management->addstudent(id, name, department);
                    break;
                case DELETE_STUDENT:
                    cout << "Enter StudentId: ";
                    cin >> id;
                    Mycollege.m_management->deletestudent(id);
                    break;
                case UPDATE:
                    cout << "Enter StudentID: ";
                    cin >> id;
                    cout << "New Name: ";
                    cin >> name;
                    cout << "New Department: ";
                    cin >> department;
                    Mycollege.m_management->updatestudent(id, name, department);
                    break;
                case SEARCH:
                    cout << "Enter StudentID: ";
                    cin >> id;
                    Mycollege.m_management->findstudent(id);
                    break;
                case DISPLAY:
                    Mycollege.m_management->displaystudent();
                    break;
                case STUDENT_EXIT:
                    student = false;
                    break;
                default:
                    cout << "Enter a valid option" << endl;
                    break;
                }
            }
        }
        break;

        case STAFF:
        {
            bool staff = true;
            while (staff)
            {
                cout << "Enter 1.Add Staff " << endl;
                cout << "2.Delete Staff " << endl;
                cout << "3.Update Staff Details " << endl;
                cout << "4.Search Staff " << endl;
                cout << "5.Display Staffs " << endl;
                cout << "6.Exit " << endl;
                cin >> choice;

                switch (choice)
                {
                case ADD_STAFF:
                    cout << "Enter StaffID: ";
                    cin >> id;
                    cout << "Name: ";
                    cin >> name;
                    cout << "Department: ";
                    cin >> department;
                    Mycollege.m_management->addstaff(id, name, department);
                    break;
                case DELETE_STAFF:
                    cout << "Enter StaffID: ";
                    cin >> id;
                    Mycollege.m_management->deletestaff(id);
                    break;
                case UPDATE_STAFF:
                    cout << "Enter StaffID: ";
                    cin >> id;
                    cout << "New Name: ";
                    cin >> name;
                    cout << "New Department: ";
                    cin >> department;
                    Mycollege.m_management->updatestaff(id, name, department);
                    break;
                case SEARCH_STAFF:
                    cout << "Enter StaffID: ";
                    cin >> id;
                    Mycollege.m_management->findstaff(id);
                    break;
                case DISPLAY_STAFF:
                    Mycollege.m_management->displaystaff();
                    break;
                case STAFF_EXIT:
                    staff = false;
                    break;
                default:
                    cout << "Enter a valid option" << endl;
                    break;
                }
            }
        }
        break;

        case EXIT:
            exit(0);
            break;

        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
    return 0;
}
