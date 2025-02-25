#include "Staff.h"

void Staff::addStaff(const string& name) {
    staffMembers.push_back(name);
    cout << "Staff added: " << name << endl;
}

void Staff::deleteStaff(const string& name) {
    for (auto it = staffMembers.begin(); it != staffMembers.end(); ++it) {
        if (*it == name) {
            staffMembers.erase(it);
            cout << "Staff deleted: " << name << endl;
            return;
        }
    }
    cout << "Staff not found: " << name << endl;
}

void Staff::updateStaff(const string& oldName, const string& newName) {
    for (auto& staff : staffMembers) {
        if (staff == oldName) {
            staff = newName;
            cout << "Staff updated from " << oldName << " to " << newName << endl;
            return;
        }
    }
    cout << "Staff not found: " << oldName << endl;
}

void Staff::displayStaff() const {
    cout << "Staff List: ";
    for (const auto& staff : staffMembers) {
        cout << staff << " ";
    }
    cout << endl;
}
