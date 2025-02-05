#include "car.h"
#include <iostream>
using namespace std;
Car::Car(std::string modle,std::string type):m_modle(modle),m_type(type)
{

    //m_carnum=10;

    std::cout<<"modle:"<<m_modle<<endl;
    std::cout<<"type:"<<m_type<<endl;
    std::cout<<"car constructor"<<std::endl;
}
Car::~Car()
{
    std::cout<<"car distructor"<<std::endl;
}


