#ifndef READXML_H
#define READXML_H
#include "fileoperation.h"
#include "student.h"
#include <vector>
class Readxml:public Fileoperation
{
public:
    Readxml();
    ~Readxml();
    std::vector<Student> readdata() override;
};

#endif // READXML_H
