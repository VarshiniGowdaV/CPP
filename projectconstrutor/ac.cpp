#include "ac.h"
#include <iostream>
using namespace std;
AC::AC(int ac_num,int length, int width, int capacity, int price, const std::string& brand, const std::string& color)
    :m_ac_num(ac_num), m_length(length), m_width(width), m_capacity(capacity), m_price(price), m_brand(brand), m_color(color)
{
    std::cout << "AC Constructor called" << std::endl;
}

AC::~AC()
{
    std::cout << "AC Destructor called" << std::endl;
}

void AC::ac()
{
    std::cout << "AC Number: " << m_ac_num <<endl;
    std::cout<< "Length: " << m_length <<endl;
    std::cout<< "Width: " << m_width << endl;
    std::cout<< "Capacity: " << m_capacity <<endl;
    std::cout<< "Price: " << m_price << endl;
    std::cout<< "Brand: " << m_brand << endl;
    std::cout<< "Color: " << m_color <<endl;

}
void AC::ac_on()
{
    std::cout<<"AC will on "<<endl;
}
void AC::ac_off()
{
    std::cout<<"Ac will off "<<endl;
}
