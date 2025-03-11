#ifndef WIFI_H
#define WIFI_H

#include <string>
#include <list>
#include <iostream>
class WIFI
{
private:
    std::string m_name;
    std::string m_password;
    std::string m_status;
    int m_strength;

public:
    WIFI();
    WIFI(std::string name, std::string password, std::string status, int strength);
    ~WIFI();

    std::string getName() const;
    std::string getPassword() const;
    std::string getStatus() const;
    int getStrength() const;

    void setDetails(std::string name, std::string password, std::string status, int strength);

    static void addWiFi(std::list<WIFI>& wifiList);
    static void displayWiFi(const std::list<WIFI>& wifiList);

};

#endif
