#include "book.h"
#include <iostream>
using namespace std;

book::book(string book_name,string color): book_name(book_name), color(color) {}
void book::books()
{
    cout << "Book Name: " << book_name << endl;
    cout << "Color: " << color << endl;
}
