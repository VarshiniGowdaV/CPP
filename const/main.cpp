#include <iostream>

using namespace std;

int main()
{
    const int MAX_AGE = 90;
    int* a = new int;
    *a = 2;
    delete a;
    const int* b = &MAX_AGE;

    b = nullptr;

    cout << "Hello World!" << endl;
    return 0;
}
