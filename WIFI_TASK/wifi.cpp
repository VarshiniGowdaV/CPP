#include "WIFI.h"
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

WIFI::WIFI()
{
    cout << "WIFI default constructor called" << endl;
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
    cout << "WIFI destructor called" << endl;
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

void WIFI::displayWiFi(const list<WIFI>& wifiList)
{
    if (wifiList.empty())
    {
        cout << "No WiFi networks available.\n";
        return;
    }

    list<WIFI> sortedList = wifiList;

    sortedList.sort([](const WIFI& a, const WIFI& b){
        if (a.m_status == "connected" && b.m_status != "connected")
            return true;
        if (a.m_status != "connected" && b.m_status == "connected")
            return false;
        if (a.m_status == "saved" && b.m_status == "available")
            return true;
        if (a.m_status == "available" && b.m_status == "saved")
            return false;
        return a.m_strength > b.m_strength;
    });

    cout << "\n--- WiFi Networks (Connected First) ---\n";
    for (const auto& wifi : sortedList)
    {
        cout << "WiFi Name: " << wifi.getName() << endl;
        cout << "Status: " << wifi.getStatus() << endl;
        cout << "Strength: " << wifi.getStrength() << endl;
    }
}
