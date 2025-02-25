#ifndef STAFF_H
#define STAFF_H
#include<iostream>
#include<vector>
using namespace std;
class Staff
{
private:
    vector<string>staffMembers;
public:
    Staff();
    ~Staff();
    void addstaff(std::string& name);
    void deletestaff(std::string& name);
    void updatestaff(std::string& oldname,std::string& newname);
    void displaystaff();
};

#endif // STAFF_H
