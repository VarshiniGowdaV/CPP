#include "Student.h"
#include <iostream>
using namespace std;
Student::Student(std::string name, int id, int age)
{
    m_name=name;
    m_age=age;
    m_id=id;
    cout<<"constructor called"<<endl;
}

Student::~Student()
{
    cout<<"destructor called"<<endl;
}

std::string Student::getName()
{
    return m_name;
}

int Student::getAge()
{
    return m_age;
}

int Student::getId()
{
    return m_id;
}

void Student::setName(std::string& name)
{
    m_name = name;
}

void Student::setAge(int age)
{
    m_age = age;
}

void Student::setId(int id)
{
    m_id = id;
}

void Student::display()
{
    std::cout << "Student Info: " << std::endl;
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "ID: " << m_id << std::endl;
    std::cout << "Age: " << m_age << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Student& s)
{
    os << "Student(Name: " << s.m_name << ", ID: " << s.m_id << ", Age: " << s.m_age << ")";
    return os;
}

template <typename T>
T Student::setAttribute(const std::string& attribute, T value)
{
    if (attribute == "name")
    {
        m_name = value;
    } else if (attribute == "age")
    {
        m_age = static_cast<int>(value);
    } else if (attribute == "id")
    {
        m_id = static_cast<int>(value);
    }
    return value;
}
