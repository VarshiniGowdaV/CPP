#include "Year.h"

Year::Year(int year) : m_year(year), april(4, year) {}

Month& Year::getApril() {
    return april;
}
