#include "Student.h"
#include "student1.h"
#include <iostream>

int main() {
    Student student1("John Doe", 101, 20);

    student1.display();

    std::cout << "Using getter methods:" << std::endl;
    std::cout << "Name: " << student1.getName() << std::endl;
    std::cout << "ID: " << student1.getId() << std::endl;
    std::cout << "Age: " << student1.getAge() << std::endl;

    std::string newName = "Jane Smith";
    student1.setName(newName);
    student1.setAge(22);
    student1.setId(102);

    std::cout << "\nAfter modification:" << std::endl;
    student1.display();

    std::cout << "\nUsing overloaded operator<<:" << std::endl;
    std::cout << student1 << std::endl;

    return 0;

}

