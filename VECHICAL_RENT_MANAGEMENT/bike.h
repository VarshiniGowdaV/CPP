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

    int getVechicalNumber();
    string getVechicalName();
    string getModal();
    string getType();
    int getCast();
    int getPayment();
    int getDuration();
    string getStatus();

    void setDetails(string Modal,string type,int cast,int payment,int duration,string status);

    void inputBikeDetails();
    void DisplayBikeDetails()const;

    void bookBike();
    void returnBike();

    bool isBookedBike() const;
    void setBookedBike(bool status);

};

#endif // BIKE_H
