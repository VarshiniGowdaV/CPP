#include "vehical.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

Vehical::Vehical()
{
    cout << "Vehical constructor called" << endl;
}

Vehical::~Vehical()
{
    cout << "Vehical destructor called" << endl;
}

Vehical::Vehical(const Vehical& vehical)
{
    cout << "Vehical copy constructor called" << endl;
}

void Vehical::operator=(const Vehical& vehical)
{
    cout << "Vehical assignment operator called" << endl;
}

int Vehical::getRandomNumber(int min, int max)
{
    return min + rand() % (max - min + 1);
}

void Vehical::generateBikeDat(const string& filename, int numberofEntries)
{
    ofstream file(filename);
    if (!file)
    {
        cout << "Error opening file!" << endl;
        return;
    }

    srand(time(NULL));

    const string brands[] = {"TVS", "Bajaj", "KTM", "Yamaha", "Honda", "Suzuki"};
    const string models[] = {"Apache", "Pulsar", "Duke", "R15"};
    const string status[] = {"Available", "Booked"};

    for (int i = 0; i < numberofEntries; i++)
    {
        int regnum = getRandomNumber(10000, 99999);
        int brandIndex = getRandomNumber(0, 5);
        int modelIndex = getRandomNumber(0, 3);
        int statusIndex = getRandomNumber(0, 1);
        int rentPrice = getRandomNumber(300, 1000);

        file << "KA07" << regnum << ","
             << brands[brandIndex] << ","
             << models[modelIndex] << ","
             << status[statusIndex] << ","
             << rentPrice << endl;
    }

    file.close();
    cout << "Data successfully written to " << filename << endl;
}
void Vehical::searchBike()
{
    cout<<"Search Bike function called"<<endl;
    int regnum;
    cout<<"Enter bike number to search";
    cin>>regnum;

}
