#include "ac.h"
#include <iostream>
using namespace std;
ac::ac(int ac_num,int lenght,int width, int capcity,int price, std::string brand,std::string color)
    :m_ac_num(ac_num),m_lenght(lenght),m_width(width),m_capcity(capcity),m_price(price),brand(brand),color(color){}
ac::~ac(){}
void ac::acs()
{
    cout<<"ac_num:" <<m_ac_num <<endl;
    cout<<"lenght:" <<m_lenght <<endl;
    cout<<"width:" <<m_width <<endl;
    cout<<"capcity:" <<m_capcity <<endl;
    cout<<"price:" <<m_price <<endl;
    cout<<"brand:" <<brand <<endl;
    cout<<"color:" <<color <<endl;
}
