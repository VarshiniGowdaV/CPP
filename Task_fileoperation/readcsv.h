#ifndef READCSV_H
#define READCSV_H
#include "fileoperation.h"
#include <vector>
#include "student.h"
class Readcsv:public Fileoperation
{
public:
    Readcsv();
    ~Readcsv();
    std::vector<Student> readdata() override;
};

#endif // READCSV_H
