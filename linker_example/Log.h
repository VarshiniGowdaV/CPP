#ifndef LOG_H
#define LOG_H
#include <iostream>
using namespace std;

static void Log(const char* message)
{
    std::cout<<message<<std::endl;
}
#endif // LOG_H
