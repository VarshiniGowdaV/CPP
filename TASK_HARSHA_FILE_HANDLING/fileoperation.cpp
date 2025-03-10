#include "fileoperation.h"
Fileoperation::Fileoperation() : fileHandler(nullptr)
{
    cout<<"File operation constructor called"<<endl;
}
Fileoperation::~Fileoperation()
{
    delete fileHandler;
    cout<<"File operation virtual destructor called"<<endl;
}
void Fileoperation::saveStudentData(int choice)
{
    delete fileHandler;
    if(choice==1)
    {
        fileHandler=new Student;
    }
    else
    {
        fileHandler=new Staff;
    }
    fileHandler->writeData(students);
}
void Fileoperation::loadStudentData(int choice)
{
    delete fileHandler;
    if(choice==1)
    {
        fileHandler=new Student;
    }
    else
    {
        fileHandler=new Staff;
    }
    staffs =fileHandler->readData();
}
