#ifndef WIRE_H
#define WIRE_H
#include <string>
class wire
{
public:
    int m_lenght;
    float m_thickness;
    float m_price;
    std::string brand;
    std::string colour;
    wire(int m_lenght,float m_thickness,float m_price,std::string brand,std::string colour);
    ~wire();
    void wires();
};

#endif // WIRE_H
