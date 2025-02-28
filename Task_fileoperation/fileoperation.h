#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include "student.h"
#include <vector>
class Fileoperation
{
public:
    Fileoperation();
    virtual ~Fileoperation();
    virtual std::vector<Student> readdata()=0;
};

#endif // FILEOPERATION_H
