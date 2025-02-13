#include <iostream>

using namespace std;

void display();
auto sum()
{
    int a=1;
    int b=6;
    int c;
    c=a+b;
    cout<<c<<endl;
    return c;
}
auto main(* int)
{
    int a=10;
    auto b=66;
    auto c="V";
    cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    display();
    sum();
    return 0;
}
void display()
{
    cout<<"Hello.."<<endl;
}
