#include "chair.h"
#include <iostream>
using namespace std;
// chair::chair(int m_lenght,int m_width,std::string colour){}
// void chair::chairs()
// {
//     m_lenght = 10;
//     m_width = 20;
//     colour = "black";
//     cout <<"Lenght:" <<m_lenght <<endl;
//     cout <<"widht:"  <<m_width  <<endl;
//     cout <<"colour:" <<colour  <<endl;
// }
void chair::add(int a, int b)
{
    int sum;
    sum = a+b;
    std::cout<<sum<<endl;
}
void chair::add(float a, float b)
{
    float result;
    result=a+b;
    std::cout<<result<<endl;
}
void chair::add()
{
    std::cout<<"HELLO"<<endl;
}
void chair::sub(int a, int b)
{
    std::cout<<"HIII"<<endl;
}
void chair::sub(double a, double b)
{
    std::cout<<"BYEEE"<<endl;
}
void chair::add(double a, double b) {
    double result = a + b;
    std::cout << result << std::endl;
}

