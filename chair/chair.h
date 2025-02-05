#ifndef CHAIR_H
#define CHAIR_H
#include <string>
class chair
{
public:
    int m_lenght;
    int m_width;
    std::string colour;
    chair(int lenght,int width, std::string colour);
    void chairs();
    int a;
    int b;
    void add(int a,int b);
    void add(float a,float b);
    void add();
    void sub(int a,int b);
    void sub(double a,double b);
    void add(double a, int b);
    void add(int a,std::string name);
};

#endif // CHAIR_H
