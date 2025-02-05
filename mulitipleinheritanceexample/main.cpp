#include <iostream>
#include "teacher.h"
#include "student.h"
#include "school.h"
using namespace std;

int main()
{
    school school1(1,"varshi",2,"anitha");
    school1.student::display();
    school1.teacher::display();
    return 0;
}
