#include "studentmagageager.h"
#include<iostream>
using namespace std;
Studentmagageager::Studentmagageager()
{
    fp = new CSV;
    studentmagageager = fp->ReadData();
    cout<<"Student manageager constructor called"<<endl;
}
Studentmagageager::~Studentmagageager()
{
    cout<<"Student manageager destructor called"<<endl;
}

