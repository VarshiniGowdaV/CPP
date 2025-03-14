#ifndef BIKE_H
#define BIKE_H
#include "vechical.h"
class Bike:public Vechical
{
private:
    bool booked;
    bool isbooked=false;
public:
    Bike(int vechical_number, string vechical_name, string modal, string type, int cast, int payment, int duration, string status);
    ~Bike();
    Bike();

    void inputBikeDetails();
    void DisplayBikeDetails()const;

    void bookBike();
    void returnBike();

    bool isBookedBike() const;
    void setBookedBike(bool status);

};

#endif // BIKE_H
