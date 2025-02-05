#ifndef NUMBER_H
#define NUMBER_H

class number
{
    int m_value;
public:
    number(int value);
    ~number();
    int getvalue();
    void setvalue(int value);
    void add();

};

#endif // NUMBER_H
