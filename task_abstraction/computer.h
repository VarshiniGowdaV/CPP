#ifndef COMPUTER_H
#define COMPUTER_H
#include "processor.h"
class Computer
{
    Processor pro;
public:
    Computer();
    ~Computer();
    void startcomputer();
    void showdowncomputer();
};

#endif // COMPUTER_H
