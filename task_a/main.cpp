#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    Student s1;
    s1.a=new int;
    *s1.a=25;
    Student s2 = s1;
    delete s2.a;
    cout<<(*s1.a);
    cout<<"before returning"<<endl;
    return 0;
}
