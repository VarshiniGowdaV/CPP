#include <iostream>
//#include "student.h"
#include <fstream>
#include "staff.h"
using namespace std;

int main()
{
    // ofstream outf("Student");

    // cout<<"Enter Student name: ";
    // std::string name;
    // cin>>name;
    // outf<<name<<endl;

    // cout<<"Enter Student department: ";
    // std::string department;
    // cin>>department;
    // outf<<department<<endl;

    // outf.close();

    // ifstream inf("Student");
    // inf>>name;
    // inf>>department;
    // cout<<"\n";
    // cout<<"Student name: "<<endl;
    // cout<<"student department: "<<endl;

    // inf.close();
    // return 0;
    string filename ="Staff.txt";

    Staff s("varshi","ise");

    Staff s1("darshi","cse");

    Staff s2("pallu","ise");

    Staff s3("likitha","ise");

    Staff s4("dharshini","ise");

    s.writefromfile(filename);
    s1.writefromfile(filename);
    s2.writefromfile(filename);
    s3.writefromfile(filename);
    s4.writefromfile(filename);

    s.readfromfile(filename);
    s1.readfromfile(filename);
    s2.readfromfile(filename);
    s3.readfromfile(filename);
    s4.readfromfile(filename);
   return 0;
    // ofstream outf("Student.txt",ios::app);
    // if(outf.is_open())
    // {
    //     outf<< s.name() << " "<< s.department() <<endl;
    //     outf<< s1.name() << " "<< s1.department()<<endl;
    //     outf<< s2.name() << " "<< s2.department()<<endl;
    //     outf<< s3.name() << " "<< s3.department()<<endl;
    //     outf<< s4.name() << " "<< s4.department()<<endl;

    //     outf.close();
    // }
    // ifstream inf("Student.txt");
    // if(inf.is_open())
    // {
    //     string name,department;
    //     while(inf>>name>>department)
    //     {
    //         Student temp(name,department);
    //         temp.display();
    //     }
    // inf.close();
    // }
    // return 0;
}
