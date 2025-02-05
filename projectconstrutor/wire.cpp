#include "Wire.h"
#include <iostream>
using namespace std;

Wire::Wire(int length, float thickness, float price, std::string brand, std::string colour)
    : m_length(length), m_thickness(thickness), m_price(price), m_brand(brand), m_colour(colour)
{
    std::cout << "Wire Constructor called" << std::endl;
}

Wire::~Wire()
{
    std::cout << "Wire Destructor called" << std::endl;
}

void Wire::wire()
{
    std::cout << "Length: " << m_length  << std::endl;
    std::cout << "Thickness: " << m_thickness  << std::endl;
    std::cout << "Price: " << m_price << std::endl;
    std::cout << "Brand: " << m_brand << std::endl;
    std::cout << "Colour: " << m_colour << std::endl;

}
void Wire::connect()
{
    std::cout<<"Wire is connected "<<std::endl;
}

void Wire::disconnect()
{
    std::cout<<"Wire is disconnected  "<<std::endl;
}
