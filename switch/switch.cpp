#include "switch.h"
#include <iostream>

using namespace std;
Switch::Switch(int length, int width, int switch_num, int capacity, std::string brand, std::string colour)
    : m_length(length), m_width(width), switch_num(switch_num), m_capacity(capacity), brand(brand), colour(colour) {}
void Switch::switchs()
{
    cout << "Length: " << m_length << endl;
    cout << "Width: " << m_width << endl;
    cout << "Switch Number: " << switch_num << endl;
    cout << "Capacity: " << m_capacity << endl;
    cout << "Brand: " << brand << endl;
    cout << "Colour: " << colour << endl;
}
