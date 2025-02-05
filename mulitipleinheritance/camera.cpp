#include "camera.h"
#include <iostream>
using namespace std;
camera::camera(int pixels,std::string name,std::string colour)
{
    m_pixels=pixels;
    m_name = name;
    m_colour = colour;
    std::cout<<"camera constructor"<<std::endl;
}
camera::~camera()
{
    std::cout<<"camera distructor"<<std::endl;
}

void camera::takephoto()
{

}
void camera::display()
{
    cout<<"pixels:"<<m_pixels<<endl;
    cout<<"name:"<<m_name<<endl;
    cout<<"coloir:"<<m_colour<<endl;
}
