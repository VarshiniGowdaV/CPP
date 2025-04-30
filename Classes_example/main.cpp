#include <iostream>
#include "log.h"
using namespace std;

int main()
{
    Log log;
    log.Move(log, 2, 4);
    cout << "Hello World!" << endl;

    return 0;

}
