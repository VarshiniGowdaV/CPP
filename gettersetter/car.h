#ifndef CAR_H
#define CAR_H

class car
{
    int m_lenght;
    int m_widht;
public:
    car(int lenght,int widht);
    ~car();
    int getlenght();
    void setlenght(int lenght);
    int getwidht();
    void setwidht(int widht);
};

#endif // CAR_H
