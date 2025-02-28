#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H
#include "fileoperation.h"
#include <vector>
#include "student.h"
#include"readcsv.h"
class Studentmanager
{
public:
    Studentmanager();
    ~Studentmanager();
    Fileoperation* fp;
    std::vector<Student>StudentData;
};

#endif // STUDENTMANAGER_H
