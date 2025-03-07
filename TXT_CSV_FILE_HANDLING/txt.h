#ifndef TXT_H
#define TXT_H
#include "student.h"
#include "fileoperation.h"
#include <list>
class TXT:public Fileoperation
{
public:
    TXT();
    ~TXT();
    std::list<Student> ReadData() override;

    void writedatafromtxtfile(const std::string& filename);
    static void readdatafromtxtfile(const std::string& filename);
};

#endif // TXT_H
