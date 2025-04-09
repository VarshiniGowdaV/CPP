#include <iostream>
#include "owner.h"
#include "driver.h"
#include "car.h"
using namespace std;

int main()
{
    Owner owner("Veeranna","123456789");
    Driver driver("Raju","123","Bangalore");
    Car car("Swift","KA07V1234","i20");
    owner.assignDrivertocar(&car,&driver);
    if(car.getassigneddriver()!=nullptr)
    {
        cout<<"Assigned Driver: "<<car.getassigneddriver()->getdrivername()<<endl;
    }
    return 0;
}
