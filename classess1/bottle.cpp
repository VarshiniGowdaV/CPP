#include "bottle.h"
#include <iostream>
using namespace std;

bottle::bottle(int m_lenght,int m_width,int m_capcity,string m_shape,string m_bottle_name,string m_colour)
{
    this->m_lenght=m_lenght;
    this->m_width=m_width;
    this->m_capcity=m_capcity;
    this->m_shape = m_shape;
    this->m_bottle_name=m_bottle_name;
    this->m_colour = m_colour;
}
bottle::~bottle()
{

}
void bottle::display() const
{
    cout<<"lenght: "<<m_lenght<<endl;
    cout<<"width: "<<m_width<<endl;
    cout<<"capcity: "<<m_capcity<<endl;
    cout<<"shape: "<<m_shape<<endl;
    cout<<"bottle_name: "<<m_bottle_name<<endl;
    cout<<"colour: "<<m_colour<<endl;

}
