#ifndef STAFF_H
#define STAFF_H
#include <iostream>
using namespace std;
#include <vector>
class Staff
{
private:
    int m_id;
    std::string m_name;
    std::string m_department;

public:
    Staff();
    ~Staff();
    Staff(int id,std::string name,std::string department);
    vector<Staff>staffData;

    void display()const;
    void displaystaff()const;

    void addstaff(int id,std::string name,std::string department);
    void deletestaff(int id);
    void updatestaff(int id);
    void findstaff(int id);

    int getid(int id);
    void setdetails(std::string name,std::string department);
};

#endif // STAFF_H
