#include <iostream>
#include "fileoperation.h"
#include "readcsv.h"
#include "student.h"
#include "readjson.h"
#include "readxml.h"
#include "studentmanager.h"
using namespace std;
enum
{
    CSV=1,
    JSON,
    XML,
    EXIT
};
int main()
{
    Fileoperation *fp;
    int choice;
    while(1)
    {
        cout<<"1.CSV"<<endl;
        cout<<"2.JSON"<<endl;
        cout<<"3.XML"<<endl;
        cout<<"Enter the choice"<<endl;
        cin>>choice;
        switch(choice)
        {
        case CSV:
            fp = new Readcsv;
            fp->readdata();
            break;
        case JSON:
            fp = new Readjson;
            fp->readdata();
            break;
        case XML:
            fp = new Readxml;
            fp->readdata();
            break;
        default:
            cout<<"Invalid choice"<<endl;
        }
    }
    return 0;


}
