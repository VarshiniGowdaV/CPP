#ifndef XML_H
#define XML_H
#include "student.h"
#include <vector>
#include "fileoperation.h"
class XML:public Fileoperation
{
public:
    XML();
    ~XML();
    std::vector<Student> Readdata() override;
};

#endif // XML_H
