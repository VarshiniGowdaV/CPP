#include "csv.h"

void CSV::writeData(const list<Student>& students)
{
    ofstream file("STUDENT.csv",ios::app);
    if (!file)
    {
        cout << "Error opening CSV file for writing!" << endl;
        return;
    }

    //file << "Name,Age,USN,MobileNumber\n";
    for (const auto& student : students)
    {
        file << student.getName() << "," << student.getAge() << ","<< student.getUSN() << "," << student.getMobileNumber() << "\n";
    }
    file.close();
    cout << "Data written to CSV successfully." << endl;
}

list<Student> CSV::readData()
{
    list<Student> students;
    ifstream file("STUDENT.csv");
    if (!file)
    {
        cout << "Error opening CSV file for reading!" << endl;
        return students;
    }

    string name, mobile;
    int age, usn;


    while (getline(file, name, ',') && file >> age && file.ignore() &&
           file >> usn && file.ignore() && getline(file, mobile))
    {
        students.push_back(Student(name, age, usn, mobile));
    }

    file.close();
    return students;
}
