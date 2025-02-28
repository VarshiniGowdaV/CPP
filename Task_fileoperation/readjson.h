#ifndef READJSON_H
#define READJSON_H
#include "fileoperation.h"
#include "student.h"
#include <vector>
class Readjson:public Fileoperation
{
public:
    Readjson();
    ~Readjson();
    std::vector<Student> readdata() override;
};

#endif // READJSON_H
