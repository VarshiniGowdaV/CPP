#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
class Staff
{
private:
    std::string m_name;
    std::string m_dept;
public:
    Staff(std::string name,std::string dept);
    Staff();
    ~Staff();

    void writefromfile(const string& filename);
    void readfromfile(const string& filename);
};

#endif // STAFF_H
