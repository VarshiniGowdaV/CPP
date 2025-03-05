#include "management.h"
#include <iostream>
using namespace std;
Management::Management()
{
    cout<<"Management constructor called"<<endl;
}
Management::~Management()
{
    cout<<"Management destructor called"<<endl;
}
void Management::addStudent(int id, std::string name, int age, std::string department, std::string mobile_number, std::string address)
{
    studentdata.push_back(Student(id, name, age, department, mobile_number, address));
}

void Management::deleteStudent(int id)
{

    studentdata.remove([id](const Student& s) { return s.getId() == id; });
}

void Management::updateStudent(int id, std::string name, int age, std::string department, std::string mobile_number, std::string address)
{
    for (auto& s : studentdata)
    {
        if (s.getId() == id)
        {
            s.setName(name);
            s.setAge(age);
            s.setDepartment(department);
            s.setMobileNumber(mobile_number);
            s.setAddress(address);
            return;
        }
    }
}

void Management::displayStudent()
{
    for (const auto& s : studentdata) {
        s.display();
    }
}

void Management::addStaff(int id, std::string name, int age, std::string department, std::string mobile_number, std::string address, float salary) {
    staffdata.push_back(Staff(id, name, age, department, mobile_number, address, salary));
}

void Management::deleteStaff(int id) {
    auto it = std::remove_if(staffdata.begin(), staffdata.end(), [id](const Staff& s) { return s.getId() == id; });
    staffdata.erase(it, staffdata.end());
}

void Management::updateStaff(int id, std::string name, int age, std::string department, std::string mobile_number, std::string address, float salary) {
    for (auto& s : staffdata) {
        if (s.getId() == id) {
            s.setName(name);
            s.setAge(age);
            s.setDepartment(department);
            s.setMobileNumber(mobile_number);
            s.setAddress(address);
            s.setSalary(salary);
            return;
        }
    }
}

void Management::displayStaff() {
    for (const auto& s : staffdata) {
        s.display();
    }
}
