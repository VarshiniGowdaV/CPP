#include "student.h"
#include <iostream>
using namespace std;

int main()
{
    student s1(40,123456);
    student s2(50,654321);

    s1.printme();
    s2.printme();
    return 0;
}
