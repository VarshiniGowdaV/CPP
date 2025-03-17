#include "CustamerDetails.h"
#include "vechical.h"
CustomerDetails::CustomerDetails() :vehiclelist(nullptr)
{
    cout << "Customer Details default constructor called" << endl;
}

CustomerDetails::CustomerDetails(string customer_name, string idproof, int age, string phnum)
{
    m_customer_name=customer_name;
    m_idproof=idproof;
    m_age=age;
    m_phnum=phnum;
   vehiclelist=nullptr;
}

CustomerDetails::~CustomerDetails()
{
    cout << "Customer Details destructor called" << endl;
     delete vehiclelist;
}

string CustomerDetails::getCustomerName() const
{
    return m_customer_name;
}

string CustomerDetails::getIdProof() const
{
    return m_idproof;
}

int CustomerDetails::getAge() const
{
    return m_age;
}

string CustomerDetails::getPhoneNumber() const
{
    return m_phnum;
}

void CustomerDetails::setCustomerDetails(const string& customer_name, const string& idproof, int age, const string& phnum)
{
    m_customer_name = customer_name;
    m_idproof = idproof;
    m_age = age;
    m_phnum = phnum;
}
void CustomerDetails::customerDisplay() const
{
        cout << "Customer Name: " << m_customer_name << endl;
        cout << "ID Proof: " << m_idproof << endl;
        cout << "Age: " << m_age << endl;
        cout << "Phone Number: " << m_phnum << endl;

        // for (const auto& vehicle : vehiclelist) {
        //     if (vehicle)
        //     {
        //         vehicle->displayDetails();
        //     }
        // }
}


// void CustomerDetails::setVehicleDetails(Vehicle* vehicle)
// {
//     this->vehicleDetails = vehicle;
// }

