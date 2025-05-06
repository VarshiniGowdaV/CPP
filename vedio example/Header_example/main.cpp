#include <iostream>
#include "log.h"
using namespace std;

void LogMessage(const char* message) {
    cout << message << endl;
}

int main() {
    Log log;
    log.Initlog();
    LogMessage("Hello World!");
    return 0;
}
