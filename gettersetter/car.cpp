#include "car.h"
car::car(int lenght, int widht)
{
    m_lenght = lenght;
    m_widht = widht;
}
car::~car()
{

}
int car::getlenght()
{
    return m_lenght;
}
void car::setlenght(int lenght)
{
    m_lenght = lenght;
}
int car::getwidht()
{
    return m_widht;
}
void car::setwidht(int widht)
{
    m_widht = widht;
}
