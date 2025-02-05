#ifndef BOOK_H
#define BOOK_H

#include <string>

class book
{
public:
    std::string book_name;
    std::string color;
    book(std::string book_name,std::string color);
    void books();
};

#endif // BOOK_H
