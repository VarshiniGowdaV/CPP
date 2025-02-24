#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <unordered_map>

class Student {
private:
    std::string m_name;
    int m_id;
    int m_age;

public:
    Student(std::string name, int id, int age);
    ~Student();

    std::string getName();
    int getAge();
    int getId();
    void setName(std::string& name);
    void setAge(int age);
    void setId(int id);
    void display();
    friend std::ostream& operator<<(std::ostream& os, const Student& s);
    template <typename T>
    T setAttribute(const std::string& attribute, T value);
};

#endif // STUDENT_H
