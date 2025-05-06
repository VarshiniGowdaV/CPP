#ifndef COMPLEX_H
#define COMPLEX_H

class complex
{
    int m_real;
    int m_image;
public:
    complex();
    complex(int real,int image);
    complex operator +(const complex &c2);
    complex operator =(const complex &c2);
    complex operator >>(const complex &c2);
    complex operator <<(const complex &c2);
    complex operator *(const complex &c2);
    complex operator /(const complex &c2);
    complex operator >=(const complex &c2);
    complex operator <=(const complex &c2);
    complex operator ==(const complex &c2);
    void printme();
    ~complex();
};

#endif // COMPLEX_H
