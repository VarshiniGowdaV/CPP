#include "student.h"
#include<iostream>
using namespace std;

student::student(int age,int contactnumber) {

    m_age = new int;
    *m_age = age;
    m_contactnumber=new int;
    *m_contactnumber =contactnumber;
}

void student::printme(){

    cout<<*m_age<<" "<<*m_contactnumber<<endl;
}

student::~student()
{
    cout<<"constructor destroyed";
    delete m_age;
    delete m_contactnumber;
}
