#include "ac.h"
#include <iostream>
using namespace std;
ac::ac(int lenght,int width, int capcity, std::string brand,std::string color){}
void ac::acs()
{
    m_lenght = 10;
    m_width =  10;
    m_capcity = 16000;
    brand = "voltas";
    color = "white";
    cout<<"lenght:" <<m_lenght <<endl;
    cout<<"width:" <<m_width <<endl;
    cout<<"capcity:" <<m_capcity <<endl;
    cout<<"brand:" <<brand <<endl;
    cout<<"color:" <<color <<endl;
}
