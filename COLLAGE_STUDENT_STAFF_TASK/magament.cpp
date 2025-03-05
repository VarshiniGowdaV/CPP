#include "magament.h"
#include <iostream>
#include "staff.h"
#include "student.h"
using namespace std;

Magament::Magament()
{
    cout<<"Magament constructor called"<<endl;
}
Magament::~Magament()
{
    cout<<"Magament destructor called"<<endl;
}
void Magament::addStudent(int id, string name, int age, string department, string mobile_number, string address)
{
   studentData.push_back(new Student(id, name, age, department, mobile_number, address));
    cout << "Student added successfully"<<endl;
}

void Magament::deleteStudent(int id)
{
    for (auto it = studentData.begin(); it != studentData.end(); ++it) {
        if ((*it)->getstudentid(id) == id) {
            delete *it;
            studentData.erase(it);
            cout << "Student deleted successfully.\n";
            return;
        }
    }
    cout << "Student with ID " << id << " not found.\n";
}

void Magament::updateStudent(int id, string name, int age, string department, string mobile_number, string address) {
    for (auto student : studentData) {
        if (student->getstudentid(id) == id) {
            student->set(name, age, department, mobile_number, address);
            cout << "Student updated successfully.\n";
            return;
        }
    }
    cout << "Student with ID " << id << " not found.\n";
}

void Magament::displayStudent() {
    if (studentData.empty()) {
        cout << "No students to display.\n";
        return;
    }
    for (auto student : studentData) {
        student->display();
    }
}

void Magament::addStaff(int id, string name, int age, string department, string mobile_number, string address, float salary) {
    staffData.push_back(new Staff(id, name, age, department, mobile_number, address, salary));
    cout << "Staff added successfully.\n";
}

void Magament::deleteStaff(int id) {
    for (auto it = staffData.begin(); it != staffData.end(); ++it) {
        if ((*it)->getstaffid() == id) {
            delete *it;
            staffData.erase(it);
            cout << "Staff deleted successfully.\n";
            return;
        }
    }
    cout << "Staff with ID " << id << " not found.\n";
}

void Magament::updateStaff(int id, string name, int age, string department, string mobile_number, string address, float salary) {
    for (auto staff : staffData) {
        if (staff->getstaffid() == id) {
            staff->set(name, age, department, mobile_number, address, salary);
            cout << "Staff updated successfully"<<endl;
            return;
        }
    }
    cout << "Staff with ID " << id << " not found.\n";
}

void Magament::displayStaff() {
    if (staffData.empty()) {
        cout << "No staff members to display.\n";
        return;
    }
    for (auto staff : staffData) {
        staff->display();
    }
}
