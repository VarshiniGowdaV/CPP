#include "Collage.h"
#include <iostream>

using namespace std;

enum MenuOption {
    ADD_STUDENT = 1,
    DELETE_STUDENT,
    UPDATE_STUDENT,
    ADD_STAFF,
    DELETE_STAFF,
    UPDATE_STAFF,
    DISPLAY_DATA,
    EXIT
};

int main() {
    College myCollege;
    int choice;
    string name, oldName, newName;

    while (true) {
        cout << "\nCollege Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Delete Student\n";
        cout << "3. Update Student\n";
        cout << "4. Add Staff\n";
        cout << "5. Delete Staff\n";
        cout << "6. Update Staff\n";
        cout << "7. Display All Data\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (static_cast<MenuOption>(choice)) {
        case ADD_STUDENT:
            cout << "Enter Student Name: ";
            cin.ignore();
            getline(cin, name);
            myCollege.addStudent(name);
            break;
        case DELETE_STUDENT:
            cout << "Enter Student Name to Delete: ";
            cin.ignore();
            getline(cin, name);
            myCollege.deleteStudent(name);
            break;
        case UPDATE_STUDENT:
            cout << "Enter Old Student Name: ";
            cin.ignore();
            getline(cin, oldName);
            cout << "Enter New Student Name: ";
            getline(cin, newName);
            myCollege.updateStudent(oldName, newName);
            break;
        case ADD_STAFF:
            cout << "Enter Staff Name: ";
            cin.ignore();
            getline(cin, name);
            myCollege.addStaff(name);
            break;
        case DELETE_STAFF:
            cout << "Enter Staff Name to Delete: ";
            cin.ignore();
            getline(cin, name);
            myCollege.deleteStaff(name);
            break;
        case UPDATE_STAFF:
            cout << "Enter Old Staff Name: ";
            cin.ignore();
            getline(cin, oldName);
            cout << "Enter New Staff Name: ";
            getline(cin, newName);
            myCollege.updateStaff(oldName, newName);
            break;
        case DISPLAY_DATA:
            myCollege.displayData();
            break;
        case EXIT:
            cout << "Exiting program..." << endl;
            return 0;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
