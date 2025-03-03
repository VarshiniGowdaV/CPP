#include "studentmanageager.h"

Studentmanageager::Studentmanageager()
{
    fp = new CSV;
    Studentmanagager = fp->Readdata();
    cout<<"Student manageager constructor called"<<endl;
}
Studentmanageager::~Studentmanageager()
{
    cout<<"Student manageager destructor called"<<endl;
}

