#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;
class Date {
private:
    std::string m_dateStr;
    string m_day;
    string m_month;
    string m_year;

public:
    Date(std::string day, std::string month, std::string year);
    Date(std::string dateStr = "01-04-2025");
    ~Date();
    std::string getDateStr() const;

    bool operator==(const Date& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Date& dt);
};

#endif
