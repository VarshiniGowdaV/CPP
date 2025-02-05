#include <iostream>
#include "person.h"
#include "student.h"
using namespace std;

int main()
{
    person person1("Varshi",22);
    person1.setname("Varshi");
    person1.setage(22);
    std::cout<<"name:"<<person1.getname()<<std::endl;
    std::cout<<"age:"<<person1.getage()<<std::endl;

    student student1("Varshi",22);
    student1.setname("Varshi");
    student1.setage(22);
    std::cout<<"name:"<<student1.getname()<<std::endl;
    std::cout<<"age:"<<student1.getage()<<std::endl;


    return 0;

}
