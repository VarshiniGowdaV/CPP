#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;
namespace pthinks
{
class Employee
{
    int m_age;
    std::string m_name;
public:
    Employee(int age,std::string name);
    Employee();
    ~Employee();

};
}
#endif // EMPLOYEE_H
