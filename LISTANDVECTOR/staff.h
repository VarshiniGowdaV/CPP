#ifndef STAFF_H
#define STAFF_H

#include <iostream>
#include <vector>
using namespace std;

class Staff {
private:
    vector<string> staffMembers;

public:
    void addStaff(const string& name);
    void deleteStaff(const string& name);
    void updateStaff(const string& oldName, const string& newName);
    void displayStaff() const;
};

#endif
