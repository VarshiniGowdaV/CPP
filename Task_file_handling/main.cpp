#include <iostream>
#include"csvdata.h"
#include"jsondata.h"
#include"txtdata.h"
#include"xmldata.h"
using namespace std;

enum{
    CSVDATA=1,
    JSONDATA,
    TXTDATA,
    XMLDATA,
    EXIT
};
int main()
{
    int choice;
    // Student studentdata;
    // Csvdata csvdata;
    // JSONDATA Jsondata;
    // TXTDATA Txtdata;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   +

    Student student1("Varshini",22,"1JB20ISE083","1234567890");
    Student student2("Pallavi",23,"1JB20ISE034","1234567890");
    Student student3("likitha",24,"1JB20ISE022","1234567890");
    Student student4("dharshini",23,"1JB20ISE034","1234567890");
    Student student5("darshan",25,"1JB20ISE033","1234567890");
    Student student6("neha",23,"1JB20ISE035","1234567890");
    Student student7("anu",23,"1JB20ISE001","1234567890");
    Student student8("chethan",23,"1JB20ISE004","1234567890");
    Student student9("ranjith",21,"1JB20ISE044","1234567890");
    Student student10("vyshnav",23,"1JB20ISE084","1234567890");
    cout<<"Enter the file choice "<<endl;
    cout<<"1.CSV 2.JSON 3.TXT 4.XML"<<endl;
    cin>>choice;
    switch(choice)
    {
    case CSVDATA:
    {
        for(int i=0;i<10;i++)
        {
            student1.display();
        }
        break;
    }
    case JSONDATA:
    {
        for(int i=0;i<10;i++)
        {
            student1.display();

        }
        break;
    }
    case TXTDATA:
    {
        for(int i=0;i<10;i++)
        {
            student1.display();
        }
        break;
    }
    case XMLDATA:
    {
        for(int i=0;i<10;i++)
        {
            student1.display();
        }
        break;
    }
    }

    return 0;
}
