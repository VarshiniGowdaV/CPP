#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include <list>
#include "student.h"
class Fileoperation
{
public:
    Fileoperation();
    virtual ~Fileoperation();
    virtual std::list<Student> ReadData()=0;
};

#endif // FILEOPERATION_H
