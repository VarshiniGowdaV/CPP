#include "staff.h"
#include <iostream>
#include "personaldetails.h"
using namespace std;
Staff::Staff(int id, std::string name, int age, std::string department, std::string mobile_number, std::string address, float salary)
    //: PersonalDetails(id, name, age, department, mobile_number, address)
{
    m_salary =salary;
}

Staff::~Staff()
{
    cout<<"staff destructor called"<<endl;
}
int Staff::getstaffid(int id) {
    return getstaffid();
}

std::string Staff::getstaffname(std::string name) {
    return name();
}

std::string Staff::getstaffmobilenumber(std::string mobile_number) {
    return MobileNumber();
}
void Staff::set(int id, std::string name, int age, std::string department, std::string mobile_number, std::string address, float salary) {
    setid(id);
    setname(name);
    setAge(age);
    setDepartment(department);
    setMobileNumber(mobile_number);
    setAddress(address);
    m_salary = salary;
}
