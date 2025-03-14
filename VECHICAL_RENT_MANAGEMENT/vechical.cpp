#include "vechical.h"
#include <iostream>
using namespace std;
Vechical::Vechical()
{
    cout<<"vechical default constructor called"<<endl;
}
Vechical::Vechical(int vechical_number, string vechical_name, string modal, string type, int cast, int payment, int duration, string status)
{
    m_vechical_number=vechical_number;
    m_vechical_name=vechical_name;
    m_modal=modal;
    m_type=type;
    m_cast=cast;
    m_payment=payment;
    m_duration=duration;
    m_status=status;
}
Vechical::~Vechical()
{
    cout<<"Vechical destructor called"<<endl;
}
void Vechical::display() {
    cout << "Vehicle Number: " << m_vechical_number << endl;
    cout << "Vehicle Name: " << m_vechical_name<< endl;
    cout << "Model: " << m_modal << endl;
    cout << "Type: " << m_type << endl;
    cout << "Cost: " << m_cast << endl;
    cout << "Payment: " << m_payment << endl;
    cout << "Duration: " << m_duration << " days" << endl;
    cout << "Status: " << m_status << endl;
}
