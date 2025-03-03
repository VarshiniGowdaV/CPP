#ifndef STUDENTMANAGEAGER_H
#define STUDENTMANAGEAGER_H
#include "fileoperation.h"
#include <vector>
#include <student.h>
#include "csv.h"
class Studentmanageager
{
public:
    Studentmanageager();
    ~Studentmanageager();
    Fileoperation *fp;
    std::vector<Student>Studentmanagager;
};

#endif // STUDENTMANAGEAGER_H
