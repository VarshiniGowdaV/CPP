#include "phone.h"
using namespace std;
phone::phone(std::string name, std::string colour):m_name(name),m_colour(colour)
{
    cout<<"phone construtor called"<<endl;
}
phone::~phone()
{
    cout<<"phone distrutor called"<<endl;
}

