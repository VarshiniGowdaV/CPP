#include <iostream>

using namespace std;

void Log(int& value)
{
    value++;
}
int main()
{
     int a=10;
    int b=5;
    // int* b =&a;
    int& ref=a;
    ref=b;
    Log(a);
    cout<<a<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
