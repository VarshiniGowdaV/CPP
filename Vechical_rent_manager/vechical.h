#ifndef VECHICAL_H
#define VECHICAL_H

class Vechical
{
protected:
    string m_vechical_number;
    string m_vechical_name;
    string m_model;
    string m_brand;
    float m_rentPrice;
    string m_duration;
    string m_status;
public:
    Vechical(string vechical_number,string );
    Vechical();
    ~Vechical();
};

#endif // VECHICAL_H
