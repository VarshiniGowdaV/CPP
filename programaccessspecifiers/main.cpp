#include <iostream>
#include "programaccessspecifiers.h"
using namespace std;

int main()
{
    class programaccessspecifiers e;
    e.set_data(5,5);
    cout<<e.get_data()<<endl;
    e.c=20;
    return 0;
}
