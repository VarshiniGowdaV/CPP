#ifndef FILEHANDLING_H
#define FILEHANDLING_H
#include <vector>
#include "bike.h"
#include "car.h"
#include "customerdetails.h"
using namespace std;
class Filehandling
{
private:
    vector<Bike*> bikelist;
    vector<Car*> carList;
    vector<CustomerDetails*> customerList;
public:
    Filehandling();
    ~Filehandling();


    void writeBikeData(std::vector<Bike>bikelist);
    vector<Bike> readBikeData();

    vector<Car> readCarData();
    void writeCarData(std::vector<Car> carList);


    void writeCustamerDetails(std::vector<CustomerDetails> customerList);
    vector<CustomerDetails> readCustamerData();

};

#endif // FILEHANDLING_H
