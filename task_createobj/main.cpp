#include <iostream>
#include "person.h"
#include "myclass.h"
using namespace std;

int main()
{
    Person Person1("Gowda",22);
    Person1.setname("Gowda");
    Person1.setage(22);
    std::cout<<"name:"<<Person1.getname()<<std::endl;
    std::cout<<"age:"<<Person1.getage()<<std::endl;

    myclass num(10);
    num.displayNumber();
    return 0;
}
