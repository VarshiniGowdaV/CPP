#include "wire.h"
#include <iostream>
using namespace std;
wire::wire(int lenght,float thickness,float price,std::string brand,std::string colour)
    :m_lenght(lenght),m_thickness(thickness),m_price(price),brand(brand),colour(colour) {}
wire::~wire(){}
void wire::wires()
{
    cout<<"lenght:"<<m_lenght <<endl;
    cout<<"thickness:"<<m_thickness<<endl;
    cout<<"price:"<<m_price<<endl;
    cout<<"brand:"<<brand<<endl;
    cout<<"colour:"<<colour<<endl;

}
