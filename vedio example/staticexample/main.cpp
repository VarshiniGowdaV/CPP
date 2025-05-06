#include <iostream>
using namespace std;

int main()
{
    item a,b,c;
    // a.getcount();
    // b.getcount();
    // c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout<<"After reading data "<<"\n";

    a.getcount();
    b.getcount();
    c.getcount();
    return 0 ;
}
