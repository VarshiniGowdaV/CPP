#ifndef CSV_H
#define CSV_H
#include "student.h"
#include<fileoperation.h>
#include <list>
#include "sstream"
class CSV:public Fileoperation
{
public:
    CSV();
    ~CSV();
    std::list<Student> ReadData() override;

    void writedatafromcsvfile(const std::string& filename);
    static void readdatafromcsvfile(const std::string& filename);

};

#endif // CSV_H
