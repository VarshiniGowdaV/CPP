#include "car.h"
#include <iostream>
#include "vechical.h"
#include "bike.h"
#include "custamerdetails.h"
using namespace std;

Car::Car()
{
    cout << "Car constructor called" << endl;
    booked = false;
}

Car::Car(int vechical_number, string vechical_name, string modal, string type, int cast, int payment, int duration, string status) {
    m_vechical_number = vechical_number;
    m_vechical_name = vechical_name;
    m_modal = modal;
    m_type = type;
    m_cast = cast;
    m_payment = payment;
    m_duration = duration;
    m_status = status;
    booked = false;
}

Car::~Car()
{
    cout << "Car Destructor called" << endl;
}
void Car::bookCar()
{
    if (!isBooked)
    {
        isBooked = true;
        cout << "Car has been successfully booked." << endl;
    }
    else
    {
        cout << "Car is already booked!" << endl;
    }
}


void Car::returnCar()
{
    if(isBooked)
    {
        isBooked = false;
        cout<<"Car has been successfully returned."<<endl;
    }
    else
    {
        cout<<"Car is already available!"<<endl;
    }
}

bool Car::isbookedCar() const
{
    return isBooked;
}
void Car::setBookedCar(bool status)
{
    isBooked =status;
}
void Car::inputCarDetails()
{
    cout << "Enter Car Number: ";
    cin >> m_vechical_number;
    cout << "Enter Car Name: ";
    cin >> m_vechical_name;
    cout << "Enter Car Model: ";
    cin >> m_modal;
    cout << "Enter Car Type: ";
    cin >> m_type;
    cout << "Enter Car Cost: ";
    cin >> m_cast;
    cout << "Enter Car Payment: ";
    cin >> m_payment;
    cout << "Enter Car Duration: ";
    cin >> m_duration;
    cout << "Enter Car Status: ";
    cin >> m_status;
    booked = false;
}

void Car::displayDetails() const
{
    cout << "Car Number: " << m_vechical_number << endl;
    cout << "Car Name: " << m_vechical_name << endl;
    cout << "Car Model: " << m_modal << endl;
    cout << "Car Type: " << m_type << endl;
    cout << "Car Cost: " << m_cast << endl;
    cout << "Car Payment: " << m_payment << endl;
    cout << "Car Duration: " << m_duration << endl;
    cout << "Car Status: " << (booked ? "Booked" : "Available") << endl;
}
void Car::customerDisplay()
{
    custamer.customerDisplay();
}
CustomerDetails Car::getCustomerDetails() const
{
    return custamer;
}
