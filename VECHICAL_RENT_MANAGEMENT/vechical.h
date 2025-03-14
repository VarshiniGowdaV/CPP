#ifndef VECHICAL_H
#define VECHICAL_H
#include <iostream>
using namespace std;
class Vechical
{
protected:
    int m_vechical_number;
    string m_vechical_name;
    string m_modal;
    string m_type;
    int m_cast;
    int m_payment;
    int m_duration;
    string m_status;
public:
    Vechical(int vechical_number,string vechical_name,string modal,string type,int cast,int payment,int duration ,string status);
    Vechical();
    ~Vechical();

    void display();
};

#endif // VECHICAL_H
