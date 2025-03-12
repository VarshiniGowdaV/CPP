#include "fileoperation.h"
#include <iostream>
#include "WIFI.h"
#include <fstream>

using namespace std;

Fileoperation::Fileoperation()
{
    cout << "fileoperation constructor called" << endl;
}
Fileoperation::~Fileoperation()
{
    cout << "fileoperation destructor called" << endl;
}

void Fileoperation::writeData(const list<WIFI> &wifi)
{
    ofstream file("WIFI.csv",ios::app);
    if (!file)
    {
        cout << "Error opening CSV file for writing!" << endl;
        return;
    }

    for (const auto &Wifi : wifi)
    {
        file << Wifi.getName() << "," << Wifi.getPassword() << ","<< Wifi.getStatus() << ","<< Wifi.getStrength() << "\n";
    }

    file.close();
    cout << "Data written to CSV file successfully." << endl;
}

list<WIFI> Fileoperation::readData()
{
    list<WIFI> wifi;
    ifstream file("WIFI.csv");
    if (!file)
    {
        cout << "Error opening CSV file for reading!" << endl;
        return wifi;
    }

    string name, password, status;
    int strength;

    while (getline(file, name, ',') && getline(file, password, ',') &&  getline(file, status, ',') && file >> strength && file.ignore())
    {
        wifi.push_back(WIFI(name, password, status, strength));
    }

    file.close();
    return wifi;
}
