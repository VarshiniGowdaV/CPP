#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include <iostream>
#include <list>
#include <vector>
class Student;
class Staff;
class Management
{
private:
    std::list<Student>studentdata;
    std::vector<Staff>staffdata;
public:
    Management();
    ~Management();

    void addStudent(int id, std::string name, int age, std::string department, std::string mobile_number, std::string address);
    void deleteStudent(int id);
    void updateStudent(int id, std::string name, int age,std::string department,std::string mobile_number,std::string address);
    void displayStudent();

    void addStaff( int id,std::string name,int age,std::string department,std::string mobile_number,std::string address ,float salary);
    void deleteStaff(int id);
    void updateStaff(int id,std::string name,int age,std::string department,std::string mobile_number,std::string address ,float salary);
    void displayStaff();

};

#endif // MANAGEMENT_H
