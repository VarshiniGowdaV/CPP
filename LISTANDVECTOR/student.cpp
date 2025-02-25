#include "Student.h"

void Student::addStudent(const string& name) {
    students.push_back(name);
    cout << "Student added: " << name << endl;
}

void Student::deleteStudent(const string& name) {
    students.remove(name);
    cout << "Student deleted: " << name << endl;
}

void Student::updateStudent(const string& oldName, const string& newName) {
    for (auto& student : students) {
        if (student == oldName) {
            student = newName;
            cout << "Student updated from " << oldName << " to " << newName << endl;
            return;
        }
    }
    cout << "Student not found: " << oldName << endl;
}

void Student::displayStudents() const {
    cout << "Students List: ";
    for (const auto& student : students) {
        cout << student << " ";
    }
    cout << endl;
}
