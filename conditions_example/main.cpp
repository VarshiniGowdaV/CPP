#include "log.h"

int main()
{
    // int x = 5;
    // bool comparisonResult = x == 5;
    // if (comparisonResult)
    // {
    //     Log("Hello world");
    // }
    const char* ptr = nullptr;

    if (ptr)
    {
        Log(ptr);
    }
    else if(ptr == "Hello")

        Log("Log is Hello");
        else
        Log("ptr is null");
        return 0;
    }

