#include "switch.h"
#include <iostream>

using namespace std;
Switch::Switch(int length, int width, int switch_num, int capacity,int price, std::string brand, std::string colour)
    : m_length(length), m_width(width), switch_num(switch_num), m_capacity(capacity),m_price(price), brand(brand), colour(colour) {}
Switch::~Switch(){}
void Switch::switchs()
{
    cout << "Length: " << m_length << endl;
    cout << "Width: " << m_width << endl;
    cout << "Switch Number: " << switch_num << endl;
    cout << "Capacity: " << m_capacity << endl;
    cout << "price:" <<m_price <<endl;
    cout << "Brand: " << brand << endl;
    cout << "Colour: " << colour << endl;
}
