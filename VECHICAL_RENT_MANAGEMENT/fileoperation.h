#ifndef FILEOPERATION_H
#define FILEOPERATION_H

#include <vector>
#include <list>
#include "bike.h"
#include "car.h"
#include "custamerdetails.h"

class FileOperation {
public:
    FileOperation();
    ~FileOperation();

    void writeBikeData(const std::vector<Bike*>& bikes);
    std::vector<Bike*> readBikeData();

    void writeCarData(const std::vector<Car*>& cars);
    std::vector<Car*> readCarData();

    void writeCustamerData(const std::list<CustamerDetails*>& custamerDetails);
    std::list<CustamerDetails*> readCustamerData();
};

#endif // FILEOPERATION_H
