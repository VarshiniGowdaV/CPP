#include <iostream>
#include "car.h"
#include <iostream>
using namespace std;

int main()
{
    car car1(10,20);
    car1.setlenght(10);
    car1.setwidht(20);
    std::cout<<"lenght:"<<car1.getlenght()<<std::endl;
    std::cout<<"widht:"<<car1.getwidht()<<std::endl;
    return 0;
}
