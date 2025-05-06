#include "complex.h"
#include <iostream>
using namespace std;
complex::complex()
{
    cout<<"constructor called"<<endl;
}
complex::complex(int real,int image)
{
    m_real = real;
    m_image = image;
    cout<<"constructor called"<<endl;
}

complex complex::operator +(const complex &c2)
{
    complex result;
    result.m_real =this->m_real+c2.m_real;
    result.m_image =this->m_image+c2.m_image;
    return result;
}
complex complex::operator =(const complex &c2)
{
    complex result;
    result.m_real = this->m_real=c2.m_real;
    result.m_image = this->m_image=c2.m_real;
    return result;
}
complex complex::operator *(const complex &c2)
{
    complex result;
    result.m_real=this->m_real*c2.m_real;
    result.m_image=this->m_image*c2.m_image;
    return result;
}
complex complex::operator /(const complex &c2)
{
    complex result;
    result.m_real=this->m_real/c2.m_real;
    result.m_image=this->m_image/c2.m_image;
    return result;
}
complex complex::operator >=(const complex &c2)
{
    complex result;
    result.m_real=this->m_real>=c2.m_real;
    result.m_image=this->m_image>=c2.m_image;
    return result;
}
complex complex::operator <=(const complex &c2)
{
    complex result;
    result.m_real=this->m_real<=c2.m_real;
    result.m_image=m_image<=c2.m_image;
    return result;
}
complex complex::operator ==(const complex &obj1)
{
    complex result;
    result.m_real=this->m_real==obj1.m_real;
    result.m_image=this->m_image==obj1.m_image;
    return result;
}
void complex::printme()
{
    cout<<"this"<<this->m_image<<endl;
    cout<<"this"<<this->m_real<<endl;
    std::cout<<m_image<<"+i"<<m_image<<std::endl;
    std::cout<<m_real<<"+i"<<m_real<<std::endl;


    cout<<"this"<<this->m_image<<endl;
    cout<<"this"<<this->m_real<<endl;
    std::cout<<m_image<<"=i"<<m_image<<std::endl;
    std::cout<<m_real<<"=i"<<m_real<<std::endl;

    cout<<"this"<<this->m_image<<endl;
    cout<<"this"<<this->m_real<<endl;
    std::cout<<m_image<<"*i"<<m_image<<std::endl;
    std::cout<<m_real<<"*i"<<m_real<<std::endl;

    cout<<"this"<<this->m_image<<endl;
    cout<<"this"<<this->m_real<<endl;
    std::cout<<m_image<<"/i"<<m_image<<std::endl;
    std::cout<<m_real<<"/i"<<m_real<<std::endl;

    cout<<"this"<<this->m_image<<endl;
    cout<<"this"<<this->m_real<<endl;
    std::cout<<m_image<<">=i"<<m_image<<std::endl;
    std::cout<<m_real<<">=i"<<m_real<<std::endl;

    cout<<"this"<<this->m_image<<endl;
    cout<<"this"<<this->m_real<<endl;
    std::cout<<m_image<<"<=i"<<m_image<<std::endl;
    std::cout<<m_real<<"<=i"<<m_real<<std::endl;

    cout<<"this"<<this->m_image<<endl;
    cout<<"this"<<this->m_real<<endl;
    std::cout<<m_image<<"==i"<<m_image<<std::endl;
    std::cout<<m_real<<"==i"<<m_real<<std::endl;
}
complex::~complex()
{
cout<<"distructor called"<<endl;
}
