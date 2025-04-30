#include <iostream>
#include <cstring>
using namespace std;

int main()
{/*
    int var=8;
    void* ptr=&var;

    cout << "Hello World!" << endl;*/
    char* buffer = new char[8];
    memset(buffer, 0, 6);
    delete[] buffer;
    cout << "Hello World!" << endl;
    return 0;
}
