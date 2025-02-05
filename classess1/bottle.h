#ifndef BOTTLE_H
#define BOTTLE_H
#include <string>
using namespace std;
class bottle
{
private:
    int m_lenght;
    int m_width;
    int m_capcity;
    string m_shape;
    string m_bottle_name;
    string m_colour;

public:
    bottle(int m_lenght,int m_width,int m_capcity,string m_shape,string m_bottle_name,string m_colour);
    void display() const;
    ~bottle();
};

#endif // BOTTLE_H
