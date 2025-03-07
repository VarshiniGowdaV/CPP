#include "staff.h"
#include <iostream>
using namespace std;
Staff::Staff(std::string name,std::string dept)
{
    m_name=name;
    m_dept=dept;
}
Staff::Staff()
{

}
Staff::~Staff()
{

}
void Staff::writefromfile(const string & filename)
{
    ofstream outfile(filename,ios::app);
    if(outfile.is_open())
    {
        outfile<<m_name<<","<<m_dept<<","<<endl;
        outfile.close();
        cout<<"Data written to file successfully"<<endl;
    }
    else
    {
        cout<<"file is not opened"<<endl;
    }
}
void Staff::readfromfile(const string &filename)
{
    ifstream infile("Staff.txt");
    if(infile.is_open())
    {
        string line;
        cout<<"Reading the data from file"<<endl;
        while(getline(infile,line))
        {
            stringstream data(line);
            string name;
            string dept;
            getline(data,name,',');
            data>>name;
            data.ignore();
            data>>dept;
            cout<<"name: "<<name<<"department: "<<dept<<endl;
        }
            infile.close();
    }
        else
        {
            cout<<"file is not opened"<<endl;
        }
}
