#include "fileoperation.h"
#include <fstream>
#include <iostream>

using namespace std;

FileOperation::FileOperation() {}
FileOperation::~FileOperation() {}

void FileOperation::writeBikeData(const vector<Bike*>& bikes) {
    ofstream file("bikes.csv", ios::app);
    if (!file.is_open()) {
        cerr << "Error opening bikes.csv for writing!" << endl;
        return;
    }

    file << "VehicleNumber,VehicleName,Model,Type,Cost,Payment,Duration,Status\n"; // Header
    for (const auto& bike : bikes) {
        file << bike->getVechicalNumber() << ","
             << bike->getVechicalName() << ","
             << bike->getModal() << ","
             << bike->getType() << ","
             << bike->getCast() << ","
             << bike->getPayment() << ","
             << bike->getDuration() << ","
             << bike->getStatus() << "\n";
    }
    file.close();
    cout << "Bike data saved successfully!" << endl;
}

vector<Bike*> FileOperation::readBikeData() {
    vector<Bike*> bikes;
    ifstream file("bikes.csv");
    if (!file.is_open()) {
        cerr << "Error opening bikes.csv for reading!" << endl;
        return bikes;
    }

    string header;
    getline(file, header);

    int vehicle_number, cost, payment, duration;
    string vehicle_name, model, type, status;
    while (file >> vehicle_number && file.ignore() &&
           getline(file, vehicle_name, ',') &&
           getline(file, model, ',') &&
           getline(file, type, ',') &&
           file >> cost && file.ignore() &&
           file >> payment && file.ignore() &&
           file >> duration && file.ignore() &&
           getline(file, status)) {
        bikes.push_back(new Bike(vehicle_number, vehicle_name, model, type, cost, payment, duration, status));
    }
    file.close();
    return bikes;
}

void FileOperation::writeCarData(const vector<Car*>& cars) {
    ofstream file("cars.csv", ios::app);
    if (!file.is_open()) {
        cerr << "Error opening cars.csv for writing!" << endl;
        return;
    }

    file << "VehicleNumber,VehicleName,Model,Type,Cost,Payment,Duration,Status\n";
    for (const auto& car : cars) {
        file << car->getVechicalNumber() << ","
             << car->getVechicalName() << ","
             << car->getModal() << ","
             << car->getType() << ","
             << car->getCast() << ","
             << car->getPayment() << ","
             << car->getDuration() << ","
             << car->getStatus() << "\n";
    }
    file.close();
    cout << "Car data saved successfully!" << endl;
}

vector<Car*> FileOperation::readCarData() {
    vector<Car*> cars;
    ifstream file("cars.csv");
    if (!file.is_open()) {
        cerr << "Error opening cars.csv for reading!" << endl;
        return cars;
    }

    string header;
    getline(file, header);

    int vehicle_number, cost, payment, duration;
    string vehicle_name, model, type, status;
    while (file >> vehicle_number && file.ignore() &&
           getline(file, vehicle_name, ',') &&
           getline(file, model, ',') &&
           getline(file, type, ',') &&
           file >> cost && file.ignore() &&
           file >> payment && file.ignore() &&
           file >> duration && file.ignore() &&
           getline(file, status)) {
        cars.push_back(new Car(vehicle_number, vehicle_name, model, type, cost, payment, duration, status));
    }
    file.close();
    return cars;
}

void FileOperation::writeCustamerData(const list<CustamerDetails*>& custamerDetails) {
    ofstream file("customers.csv", ios::app);
    if (!file.is_open()) {
        cerr << "Error opening customers.csv for writing!" << endl;
        return;
    }

    file << "CustomerName,IDProof,Age,PhoneNumber\n";
    for (const auto& custamer : custamerDetails) {
        file << custamer->getCustamerName() << ","
             << custamer->getIdProof() << ","
             << custamer->getAge() << ","
             << custamer->getphnum() << "\n";
    }
    file.close();
    cout << "Customer data saved successfully!" << endl;
}

list<CustamerDetails*> FileOperation::readCustamerData() {
    list<CustamerDetails*> custamerDetails;
    ifstream file("custamers.csv");
    if (!file.is_open()) {
        cerr << "Error opening custamers.csv for reading!" << endl;
        return custamerDetails;
    }

    string header;
    getline(file, header);

    string custamer_name, idproof, phnum;
    int age;
    while (getline(file, custamer_name, ',') &&
           getline(file, idproof, ',') &&
           file >> age && file.ignore() &&
           getline(file, phnum)) {
        custamerDetails.push_back(new CustamerDetails(custamer_name, idproof, age, phnum));
    }
    file.close();
    return custamerDetails;
}
