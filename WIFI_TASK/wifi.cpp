#include "WIFI.h"
#include <iostream>

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

void WIFI::displayWiFi(const list<WIFI>& wifiList)
{
    if (wifiList.empty())
    {
        cout << "No WiFi networks available.\n";
        return;
    }

    cout << "\n--- WiFi Networks ---\n";
    for (const auto& wifi : wifiList)
    {
        cout << "WiFi Name: " << wifi.getName() <<endl;
        cout << "Status: " << wifi.getStatus() << endl;
        cout << "Strength: " << wifi.getStrength() << endl;
    }
}
