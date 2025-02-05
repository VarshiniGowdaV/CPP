#ifndef NUMBER_H
#define NUMBER_H

class number
{
    int m_value;
public:
    number();
    ~number();
    number(int value);
    void add(number obj);
};

#endif // NUMBER_H
