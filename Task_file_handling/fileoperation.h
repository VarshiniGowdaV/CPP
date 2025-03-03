#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include <vector>
#include "student.h"
class Fileoperation
{
public:
    Fileoperation();
    virtual ~Fileoperation();
    virtual std::vector<Student> Readdata()=0;

};

#endif // FILEOPERATION_H
