#include "benz.h"
#include <iostream>
using namespace std;
Benz::Benz(std::string modle,std::string type):Car(modle,type)
{
    //m_private = 10;
   // m_public = 20;
    //m_protected = 30;
    std::cout<<"benz constructor"<<std::endl;
}
Benz::~Benz()
{
   std::cout<<"benz distructor"<<std::endl;
}
