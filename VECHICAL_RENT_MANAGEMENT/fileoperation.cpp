// #include "fileoperation.h"
// #include <fstream>
// #include <iostream>

// using namespace std;

// FileOperation::FileOperation() {}
// FileOperation::~FileOperation() {}

// void FileOperation::writeVechicalData(list<Vechical*> vechicals) {
//     ofstream file("vechicals.csv", ios::app);
//     if (!file) {
//         cout << "Error opening file for writing!" << endl;
//         return;
//     }

//     for (auto vechical : vechicals) {
//         file << vechical->getVechicalNumber() << ","
//              << vechical->getVechicalName() << ","
//              << vechical->getModel() << ","
//              << vechical->getType() << ","
//              << vechical->getCost() << ","
//              << vechical->getPayment() << ","
//              << vechical->getDuration() << ","
//              << vechical->getStatus() << "\n";
//     }

//     file.close();
//     cout << "Vehicle data written successfully." << endl;
// }

// list<Vechical*> FileOperation::readVechicalData() {
//     list<Vechical*> vechicals;
//     ifstream file("vechicals.csv");
//     if (!file) {
//         cout << "Error opening file for reading!" << endl;
//         return vechicals;
//     }

//     int vechical_number, cost, payment, duration;
//     string vechical_name, model, type, status;

//     while (file >> vechical_number && file.ignore() &&
//            getline(file, vechical_name, ',') &&
//            getline(file, model, ',') &&
//            getline(file, type, ',') &&
//            file >> cost && file.ignore() &&
//            file >> payment && file.ignore() &&
//            file >> duration && file.ignore() &&
//            getline(file, status)) {
//         vechicals.push_back(new Vechical(vechical_number, vechical_name, model, type, cost, payment, duration, status));
//     }

//     file.close();
//     return vechicals;
// }

// void FileOperation::writecustamerData(list<CustamerDetails*> custamerDetails) {
//     ofstream file("customers.csv", ios::app);
//     if (!file) {
//         cout << "Error opening file for writing!" << endl;
//         return;
//     }

//     for (auto customer : custamerDetails) {
//         file << customer->getCustamerName() << ","
//              << customer->getIdProof() << ","
//              << customer->getAge() << ","
//              << customer->getphnum() << "\n";
//     }

//     file.close();
//     cout << "Customer data written successfully." << endl;
// }

// list<CustamerDetails*> FileOperation::readcustamerData() {
//     list<CustamerDetails*> custamerDetails;
//     ifstream file("customers.csv");
//     if (!file) {
//         cout << "Error opening file for reading!" << endl;
//         return custamerDetails;
//     }

//     string custamer_name, idproof, phnum;
//     int age;

//     while (getline(file, custamer_name, ',') &&
//            getline(file, idproof, ',') &&
//            file >> age && file.ignore() &&
//            getline(file, phnum)) {
//         custamerDetails.push_back(new CustamerDetails(custamer_name, idproof, age, phnum));
//     }

//     file.close();
//     return custamerDetails;
// }
