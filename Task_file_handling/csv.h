#ifndef CSV_H
#define CSV_H
#include "student.h"
#include <vector>
#include "fileoperation.h"
class CSV:public Fileoperation
{
public:
    CSV();
    ~CSV();
    std::vector<Student> Readdata() override;
};

#endif // CSV_H
