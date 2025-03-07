#ifndef STUDENTMAGAGEAGER_H
#define STUDENTMAGAGEAGER_H
#include "fileoperation.h"
#include <list>
#include <iostream>
#include "student.h"
#include "csv.h"
class Studentmagageager
{
public:
    Studentmagageager();
    ~Studentmagageager();
    Fileoperation *fp;
    std::list<Student>studentmagageager;
};

#endif // STUDENTMAGAGEAGER_H
