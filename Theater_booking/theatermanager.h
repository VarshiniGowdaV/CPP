#ifndef THEATERMANAGER_H
#define THEATERMANAGER_H
#include "theater.h"
#include <iostream>
#include <vector>
using namespace std;
class TheaterManager
{
private:
    vector<Theater>m_theaterlist;
public:
    TheaterManager();
    ~TheaterManager();

    void bookTheater(vector<Theater>& m_theaterlist,int id,int day);
    void printStatus(vector<Theater>& m_theaterlist,int day);
};

#endif // THEATERMANAGER_H
