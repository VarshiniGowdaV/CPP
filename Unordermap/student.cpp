#include "student.h"
#include <iostream>
using namespace std;
Student::Student()
{
    cout<<"student constructor called"<<endl;
}
Student::~Student()
{
    cout<<"student destructor called"<<endl;
}
void Student::add(const K &key, const V &value)
{
    data[key]=value;
}
friend ostream& operator<<(ostream &os,const Student<K,V> &obj)
{
    for(const auto &pair : obj.data){
    os<<"{"<<pair.first << ":" << pair.second <<"}";
    }
return os;
}
