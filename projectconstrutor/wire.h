#ifndef WIRE_H
#define WIRE_H

#include <string>

class Wire {

public:
    int m_length;
    float m_thickness;
    float m_price;
    std::string m_brand;
    std::string m_colour;
    Wire(int length, float thickness, float price, std::string brand, std::string colour);
    ~Wire();
    void wire();
    void connect();
    void disconnect();
};

#endif // WIRE_H
