#ifndef DRIVER_H
#define DRIVER_H
#include <string>

class Driver
{
private:
    std::string m_name;
public:
    Driver();
    ~Driver();

    void setName(std::string newName);
    std::string getName();
};

#endif
