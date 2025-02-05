#include "oppo.h"
#include <iostream>
#include "phone.h"
using namespace std;
oppo::oppo(std::string name,std::string colour):phone(name,colour)
{
    std::cout<<"oppo constructor"<<std::endl;
}
oppo::~oppo()
{
    std::cout<<" oppo distructor"<<std::endl;
}
