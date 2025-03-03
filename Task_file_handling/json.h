#ifndef JSON_H
#define JSON_H
#include "student.h"
#include <vector>
#include "fileoperation.h"
class JSON:public Fileoperation
{
public:
    JSON();
    ~JSON();
    std::vector<Student> Readdata() override;
};

#endif // JSON_H
