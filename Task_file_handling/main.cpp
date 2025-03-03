#include <iostream>
#include "student.h"
#include "fileoperation.h"
#include "csv.h"
#include "xml.h"
#include "json.h"
#include "studentmanageager.h"
using namespace std;
enum
{
    READCSV=1,
    READJSON,
    READXML,
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
        case READCSV:
            fp = new CSV;
            fp->Readdata();
            break;
        case READJSON:
            fp = new JSON;
            fp->Readdata();
            break;
        case READXML:
            fp = new XML;
            fp->Readdata();
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
}
    return 0;
}
