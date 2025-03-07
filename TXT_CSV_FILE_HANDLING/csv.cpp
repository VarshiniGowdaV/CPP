#include "csv.h"
#include "student.h"
#include<iostream>
using namespace std;
CSV::CSV()
{
    cout<<"CSV constructor called"<<endl;
}
CSV::~CSV()
{
    cout<<"CSV destructor called"<<endl;
}
std::list<Student>CSV::Readdata()
{
    cout<<"CSV student Data"<<endl;
    Student s1("Varshini","1234567890",22,"1JB20ISE083");
    Student s2("Pallavi","1234567890",23,"1JB20ISE065");
    Student s3("likitha","1234567890",24,"1JB20ISE033");
    Student s4("Dharshini","1234567890",25,"1JB20ISE005");
    Student s5("Darshan","123456789098",23,"1JB20ISE004");
    Student s6("neha","123456789009",21,"1JB20ISE055");
    Student s7("sharath","1234567890",20,"1JB20ISE077");
    Student s8("anu","1234567890",21,"1JB20ISE002");
    Student s9("abhiiiii","1234567890",22,"1JB20ISE01");
    Student s10("vidya","1234567890",24,"1JB20ISE084");
    std::list<Student>studentlist;
    studentlist.reserve(10);
    studentlist.push_back(s1);
    studentlist.push_back(s2);
    studentlist.push_back(s3);
    studentlist.push_back(s4);
    studentlist.push_back(s5);
    studentlist.push_back(s6);
    studentlist.push_back(s7);
    studentlist.push_back(s8);
    studentlist.push_back(s9);
    studentlist.push_back(s10);


    return studentlist;
}
