#include "Collage.h"

void College::addStudent(const string& name) {
    studentData.addStudent(name);
}

void College::deleteStudent(const string& name) {
    studentData.deleteStudent(name);
}

void College::updateStudent(const string& oldName, const string& newName) {
    studentData.updateStudent(oldName, newName);
}

void College::addStaff(const string& name) {
    staffData.addStaff(name);
}

void College::deleteStaff(const string& name) {
    staffData.deleteStaff(name);
}

void College::updateStaff(const string& oldName, const string& newName) {
    staffData.updateStaff(oldName, newName);
}

void College::displayData() const {
    studentData.displayStudents();
    staffData.displayStaff();
}
