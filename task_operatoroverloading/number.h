#ifndef NUMBER_H
#define NUMBER_H

class number
{
    int m_value;
public:
    number(int value);
    ~number();
    void add();
    int getvalue();
    void setvalue(int value);
    void sub();
    int getsub();
    void setsub(int value);


};

#endif // NUMBER_H
