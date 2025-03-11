#include "WIFI.h"
#include <iostream>
#include <algorithm>
using namespace std;

WIFI::WIFI()
{
    cout<<"WIFI default constructor called"<<endl;
}

WIFI::WIFI(string name, string password, string status, int strength)
{
    m_name = name;
    m_password = password;
    m_status = status;
    m_strength = strength;
}

WIFI::~WIFI()
{
    cout<<"WIFI destructor called"<<endl;
}

string WIFI::getName() const
{
    return m_name;
}
string WIFI::getPassword() const
{
    return m_password;
}
string WIFI::getStatus() const
{
    return m_status;
}
int WIFI::getStrength() const
{
    return m_strength;
}

void WIFI::setDetails(string name, string password, string status, int strength)
{
    m_name = name;
    m_password = password;
    m_status = status;
    m_strength = strength;
}

void WIFI::addWiFi(list<WIFI>& wifiList)
{
    WIFI newWiFi;
    string name, password, status;
    int strength;

    cout << "Enter WiFi Name: ";
    getline(cin, name);
    cout << "Enter Password: ";
    getline(cin, password);
    cout << "Enter Status (connected/Saved/Available): ";
    getline(cin, status);
    cout << "Enter Signal Strength : ";
    cin >> strength;
    cin.ignore();

    newWiFi.setDetails(name, password, status, strength);
    wifiList.push_back(newWiFi);

    cout << "WiFi Network Added Successfully!\n";
}

void WIFI::displayWiFi(const std::list<WIFI>& wifiList)
{
    if (wifiList.empty())
    {
        cout << "No WiFi networks available.\n";
        return;
    }

    // std::list<WIFI> sortedWiFi = wifiList;

    // sortedWiFi.sort([](const WIFI &a, const WIFI &b) {
    //     if (a.getStatus() == "Connected" && b.getStatus() != "Connected")
    //         return true;
    //     if (a.getStatus() != "Connected" && b.getStatus() == "Connected")
    //         return false;
    //     return a.getStrength() > b.getStrength();
    // });

    cout << "\n--- WiFi Networks (Connected First) ---\n";
    for (const auto &wifi : /*sorted*/wifiList)
    {
        cout << "WiFi Name: " << wifi.getName() << endl;
        cout << "Status: " << wifi.getStatus() << endl;
        cout << "Strength: " << wifi.getStrength() << endl;
    }
}
