#ifndef LIBRARYSTAFF_H
#define LIBRARYSTAFF_H
#include <iostream>
using namespace std;
class Staff
{
private:
    string m_name;
    string m_id;
public:
    Staff();
    Staff(string name,string id);
    ~Staff();

    string getname();
    string getid();

    void setStaffdetails(string name,string id);
};

#endif // LIBRARYSTAFF_H
