#ifndef CAR_H
#define CAR_H
#include <iostream>
class Car
{
private:
     //int  m_private;
    std::string m_modle;
    std::string m_type;
public:
    int m_public;
    Car(std::string modle,std::string type);
    ~Car();
protected:
    int m_protected;
};

#endif // CAR_H
