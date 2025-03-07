
#include "txt.h"

void TXT::writeData(const list<Student>& students) {
    ofstream file("students.txt",ios::app);
    if (!file) {
        cout << "Error opening TXT file for writing!" << endl;
        return;
    }

    for (const auto& student : students) {
        file << student.getName() << " " << student.getAge() << " "
             << student.getUSN() << " " << student.getMobileNumber() << endl;
    }
    file.close();
    cout << "Data written to TXT successfully." << endl;
}

list<Student> TXT::readData() {
    list<Student> students;
    ifstream file("students.txt");
    if (!file) {
        cout << "Error opening TXT file for reading!" << endl;
        return students;
    }

    int age, usn;
    string name, mobile;

    while (getline(file, name, ' ') && file >> age && file.ignore() &&
           file >> usn && file.ignore() && getline(file, mobile))
    {
        students.push_back(Student(name, age, usn, mobile));
    }
    file.close();
    return students;
}
