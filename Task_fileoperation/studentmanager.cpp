#include "studentmanager.h"
#include <iostream>
#include <vector>
//#include "fileoperation.h"
using namespace std;
Studentmanager::Studentmanager()
{
    cout<<"student manager constructor called"<<endl;
    fp = new Readcsv;
    StudentData = fp->readdata();
}
Studentmanager::~Studentmanager()
{
    cout<<"student manager destructor called"<<endl;
}
