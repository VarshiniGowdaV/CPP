#ifndef VEHICAL_H
#define VEHICAL_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <list>
using namespace std;
class Vehical
{
private:
    Vehical<list> VehicalList;
public:
    Vehical();
    ~Vehical();
    Vehical(const Vehical& vehical);
    void operator =(const Vehical& vehical);

    int getRandomNumber(int min,int max);
    void writeBikeData(list<Vehical> VehicalList);
    list
    void generateBikeDat(const string& filename,int numberofEntries);
    void searchBike();
};

#endif // VEHICAL_H
