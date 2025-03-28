#include "vehiclemanager.h"
#include <iostream>
#include "onlinepayment.h"
#include "cashpayment.h"
using namespace std;
VehicleManager::VehicleManager()
{
    cout<<"Vehicle manager constructor called"<<endl;
}
VehicleManager::~VehicleManager()
{
    cout<<"Vehicle manager destructor called"<<endl;
}
void VehicleManager::addBike()
{
    string number,brand,model,status;
    float rentPrice;
    cout<<"Enter bike number: ";
    cin>>number;
    cout<<"Enter bike brand: ";
    cin>>brand;
    cout<<"Enter bike model: ";
    cin>>model;
    cout<<"Enter bike price: ";
    cin>>rentPrice;
    cout<<"Enter bike status: ";
    cin>>status;
    bikelist.push_back(RentalBike(number,brand,model,rentPrice,status));
    file.writeBikeData(bikelist);
}
void VehicleManager::addCar()
{
    string number,brand,model,status;
    float rentPrice;
    cout<<"Enter car number: ";
    cin>>number;
    cout<<"Enter car brand: ";
    cin>>brand;
    cout<<"Enter car model: ";
    cin>>model;
    cout<<"Enter car price: ";
    cin>>rentPrice;
    cout<<"Enter car status: ";
    cin>>status;
    carlist.push_back(RentalCar(number,brand,model,rentPrice,status));
    file.writeCarData(carlist);
}
void  VehicleManager::BookBike()
{
    bikelist = file.readBikeData();
    string number;
    cout<<"Enter Bike number to Book: ";
    cin>>number;

    for(auto i=bikelist.begin();i!=bikelist.end();i++)
    {
        if(i->getvehicalNumber()==number && i->getstatus() == "Available")
        {
        string name,idproof,phnum;
        int age;
        cout<<"Enter customer name: ";
        cin>>name;
        cout<<"Enter customer idProof: ";
        cin>>idproof;
        cout<<"Enter customer age: ";
        cin>>age;
        cout<<"Enter customer phnum: ";
        cin>>phnum;
        Customer customerlist(name,idproof,age,phnum);
        i->setrentstatus("Booked");
        file.writeBikeData(bikelist);
        //customerlist.push_back(Customer(name,idproof,age,phnum));
        //file.writeCustomerdatabike(customerlist);
        cout<<"Bike booked successfully bike no:  "<<number <<endl;
        return;
    }
        cout<<"Bike not available or incorrect number!"<<endl;
    }
}
void VehicleManager::BookCar()
{
    carlist = file.readCarData();
    string number;
    cout << "Enter Car Number to Book: ";
    cin >> number;

    for (auto i = carlist.begin(); i != carlist.end(); i++)
    {
        if (i->getvehicalNumber() == number && i->getstatus() == "Available")
        {
            string name, idProof, phone;
            int age;

            cout << "Enter Customer Name: ";
            cin >> name;
            cout << "Enter ID Proof: ";
            cin >> idProof;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Phone Number: ";
            cin >> phone;

            Customer customerList(name, idProof, age, phone);

            i->getvehicalNumber(), i->getbrand(),i->getmodel(), i->getrentprice(), i->getstatus(), "Booked";

            cout << "Car Booked Successfully for " << name << endl;
            return;
        }
    }
    cout << "Car not available or incorrect number!" << endl;
}

void VehicleManager::ReturnCar()
{
    carlist = file.readCarData();
    cout << "Car return function called" << endl;

    string vehicleNumber;
    string newstatus ;

    cout << "Enter car number to return: ";
    cin >> vehicleNumber;

    for (auto i = carlist.begin(); i != carlist.end(); i++)
    {
        if (i->getvehicalNumber() == vehicleNumber && i->getstatus() == "booked")
        {
            i->setrentstatus("available");
            file.writeCarData(carlist);
            cout << "Car returned successfully from the customer" << endl;
            return;
        }
    }
    cout << "Car with number " << vehicleNumber << " is not booked" << endl;
}


void VehicleManager::ReturnBike()
{
    bikelist = file.readBikeData();
    cout<<"Bike return function called"<<endl;
    string vechicalNumber;
    string newstatus;
    cout<<"Enter bike number to return: ";
    cin>>vechicalNumber;
    for(auto i=bikelist.begin();i!=bikelist.end();i++)
    {
        if(i->getvehicalNumber() == vechicalNumber && i->getstatus() == "booked")
        {
            i->setrentstatus("available");
            file.writeBikeData(bikelist);
            cout<<"Bike returned successfully from the customer"<<endl;
            return;
        }
    }
    cout<<"car with number "<<vechicalNumber<<"is not booked"<<endl;
}

void VehicleManager::displayBike()
{
    bikelist=file.readBikeData();
    for ( auto &bike : bikelist)
    {
        cout << "Bike: " << bike.getvehicalNumber() << " "
             << bike.getbrand() <<" "
             << bike.getmodel() << " "
             << bike.getrentprice() << " "
             << bike.getstatus() << endl;
    }
}

void VehicleManager::displayCar()
{
    carlist=file.readCarData();
    for( auto &car:carlist)
    {
        cout<<"Car: "<<car.getvehicalNumber() <<" "
             <<car.getbrand() <<" "
             <<car.getmodel() <<" "
             <<car.getrentprice() <<" "
             <<car.getstatus() <<endl;
    }
}

void VehicleManager::updateBikePrice()
{
    bikelist=file.readBikeData();
    string number;
    float newPrice;
    cout << "Enter Bike Number and New Rent Price: ";
    cin >> number >> newPrice;
    for (auto &bike : bikelist) {
        if (bike.getvehicalNumber() == number)
        {
        bike.getvehicalNumber(), bike.getbrand(), bike.getmodel(), newPrice,  bike.getstatus();
            //file.writeBikeData(bikelist);
            cout << "Bike Rent Price Updated!\n";
            return;
        }
    }
    cout << "Bike not found!\n";
}
void VehicleManager::updateCarPrice()
{
    carlist=file.readCarData();
    string number;
    float newPrice;
    cout << "Enter Car Number and New Rent Price: ";
    cin >> number >> newPrice;
    for (auto &car : carlist) {
        if (car.getvehicalNumber() == number) {
            car.getvehicalNumber(), car.getbrand(), car.getmodel(), newPrice,  car.getstatus();
            //file.writeBikeData(bikelist);
            cout << "Car Rent Price Updated!\n";
            return;
        }
    }
    cout << "Car not found!\n";
}
void VehicleManager::deleteBike()
{
    bikelist = file.readBikeData();
    cout << "Bike Delete function called" << endl;
    string vehicleNumber;

    cout << "Enter bike number to delete: " << endl;
    cin >> vehicleNumber;

    for (auto i = bikelist.begin(); i != bikelist.end(); ++i)
    {
        if (i->getvehicalNumber() == vehicleNumber && i->getstatus() != "booked")
        {
            bikelist.erase(i);
            file.writeBikeData(bikelist);
            cout << "Bike deleted successfully" << endl;
            return;
        }
    }

    cout << "Bike with number " << vehicleNumber << " deleted found  is booked)." << endl;
}

void VehicleManager::deleteCar()
{
    carlist =file.readCarData();
    cout<<"Car delete function called"<<endl;
    string vehicleNumber;
    cout<<"Enter car number to delete: "<<endl;
    cin>>vehicleNumber;
    for(auto i=carlist.begin();i!=carlist.end();i++)
    {
        if(i->getvehicalNumber() == vehicleNumber && i->getstatus() == "booked")
        {
            carlist.erase(i);
            file.writeCarData(carlist);
            cout<<"Car deleted successfully"<<endl;
            return;
        }
    }
    cout<<"Car with number "<<vehicleNumber <<"is not deleted"<<endl;
}
void VehicleManager::searchBike()
{
    bikelist=file.readBikeData();
    string vehicalNumber;
    for ( auto& bike : bikelist)
    {
        if (bike.getvehicalNumber() ==  vehicalNumber)
        {
            std::cout << "Bike Found:\n";
            std::cout << "Brand: " << bike.getbrand() << std::endl;
            std::cout << "Model: " << bike.getmodel() << std::endl;
            std::cout << "Rent Price: " << bike.getrentprice() << std::endl;
            std::cout << "status: " << bike.getstatus() << " days" << std::endl;
            return;
        }
    }
    std::cout << "Bike with Number " << vehicalNumber << " not found" << std::endl;
}
void VehicleManager::searchCar()
{
    carlist = file.readCarData();
    string vehicleNumber;
    for ( auto& car : carlist) {
        if (car.getvehicalNumber() == vehicleNumber) {
            std::cout << "Car Found:\n";
            std::cout << "Model: " << car.getmodel() << std::endl;
            std::cout << "Rent Price: " << car.getrentprice() << std::endl;
            return;
        }
    }
    std::cout << "Car with ID " << vehicleNumber << " not found!" << std::endl;
}
void VehicleManager::sortbikeStatus()
{
    bikelist=file.readBikeData();
    cout << "Sorting bikes" << endl;
    for (auto i = bikelist.begin(); i != bikelist.end(); ++i)
    {
        for (auto j = i; j != bikelist.end(); ++j)
        {
            if (j->getstatus() == "available" && i->getstatus() == "booked")
            {
                iter_swap(i, j);
            }
            else if (i->getstatus() == j->getstatus() && j->getrentprice() > i->getrentprice())
            {
                iter_swap(i, j);
            }
            else if (i->getstatus() == j->getstatus() && j->getrentprice() == i->getrentprice() )
            {
                iter_swap(i, j);
            }
        }
    }
}

void VehicleManager::sortcarbyStatus()
{
    carlist=file.readCarData();
    cout << "Sorting cars" << endl;
    for (auto i = carlist.begin(); i != carlist.end(); ++i)
    {
        for (auto j = i; j != carlist.end(); ++j)
        {
            if (j->getstatus() == "available" && i->getstatus() == "booked")
            {
                iter_swap(i, j);
            }
            else if (i->getstatus() == j->getstatus() && j->getrentprice() > i->getrentprice())
            {
                iter_swap(i, j);
            }
            else if (i->getstatus() == j->getstatus() && j->getrentprice() == i->getrentprice() )
            {
                iter_swap(i, j);
            }
        }
    }
}
void VehicleManager::sortbikebyPrice()
{
    bikelist=file.readBikeData();
    cout<<"Bike price sorted function called"<<endl;
    for(auto &i:bikelist)
    {
        for(auto &j:bikelist)
        {
            if(i.getrentprice() <j.getrentprice())
            {
                iter_swap(&i,&j);
            }
        }
    }
    file.writeBikeData(bikelist);
    displayBike();
}
void VehicleManager::sortcarbyPrice()
{
    carlist=file.readCarData();
    cout<<"Car price sorted function called"<<endl;
    for(auto &i :carlist)
    {
        for(auto &j:carlist)
        {
            if(i.getrentprice() <j.getrentprice())
            {
                iter_swap(&i,&j);
            }
        }
    }
    file.writeCarData(carlist);
    displayCar();
}
void VehicleManager::alldetails()
{

    //loginManagement.loginManagement();
    int choice;
    while (true)
    {
        cout << "\nVehicle Rental Application" << endl;
        cout << " 1. Add Vehicles" << endl;
        cout << " 2. Display Vehicles" << endl;
        cout << " 3. Update Vehicle Rent Price" << endl;
        cout << " 4. Rent Vehicle" << endl;
        cout << " 5. Payment for Vehicle" << endl;
        cout << " 6. Return Vehicle" << endl;
        cout << " 7. Delete Vehicle" << endl;
        cout << " 8. Search Vehicle" << endl;
        cout << " 9. Sort Vehicle " <<endl;
        cout << " 10. Exit" << endl;
        cout << " Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int addChoice;
            cout << "\n ADD VEHICLES " << endl;
            cout << " 1. Add Bike " << endl;
            cout << " 2. Add Car " << endl;
            cout << " 3. Exit " << endl;
            cout << " Enter your choice: ";
            cin >> addChoice;

            switch (addChoice)
            {
            case 1:
                addBike();
                break;
            case 2:
                addCar();
                break;
            case 3:
                cout << "Exit " << endl;
                break;
            default:
                cout << "Invalid Choice" << endl;
                break;
            }
        }
        break;
        case 2:
            cout << "\n Display Vehicles " << endl;
            displayBike();
            displayCar();
            break;
        case 3:
        {
            int updateChoice;
            cout << "\n Update Rent Price " << endl;
            cout << " 1. Update Bike Rent Price " << endl;
            cout << " 2. Update Car Rent Price " << endl;
            cout << " Enter your choice: ";
            cin >> updateChoice;
            if (updateChoice == 1)
                updateBikePrice();
            else if (updateChoice == 2)
                updateCarPrice();
            else
                cout << "Invalid choice!" << endl;
        }
        break;
        case 4:
        {
            int rentChoice;
            cout << "\n Rent Vehicle " << endl;
            cout << " 1. Rent a Bike " << endl;
            cout << " 2. Rent a Car " << endl;
            cout << " Enter your choice: ";
            cin >> rentChoice;
            if (rentChoice == 1)
                BookBike();
            else if (rentChoice == 2)
                BookCar();
            else
                cout << "Invalid choice!" << endl;
        }
        break;
        case 5:
        {
            int paymentChoice;
            cout << "\n Payment Method " <<endl;
            cout << " 1. Online Payment " <<endl;
            cout << " 2. Cash Payment " <<endl;
            cout << " Enter your choice: ";
            cin >> paymentChoice;
            if(paymentChoice == 1)
            {
                string upi_id,transaction_id;
                double amount;
                cout<<"Enter UPI ID: ";
                cin>>upi_id;
                cout<<"Enter Transaction_id: ";
                cin>>transaction_id;
                cout<<"Enter Payment Amount: ";
                cin>>amount;
                OnlinePayment online(upi_id,transaction_id);
                online.processPayment(amount);
                online.displayPaymentDetails();
            }
            else if(paymentChoice == 2)
            {
                double amount;
                cout<<"Enter Payment Amount: ";
                cin>>amount;
                CashPayment cash(amount);
                cash.displayPayment();
            }
            else
            {
                cout<<"Invalid choice!"<<endl;
            }
        }
        case 6:
        {
            int returnChoice;
            cout << "\n Return Vehicle " << endl;
            cout << " 1. Return a Bike " << endl;
            cout << " 2. Return a Car " << endl;
            cout << " Enter your choice: ";
            cin >> returnChoice;
            if (returnChoice == 1)
                ReturnBike();
            else if (returnChoice == 2)
                ReturnCar();
            else
                cout << "Invalid choice!" << endl;
        }
        break;
        case 7:
        {
            int deleteChoice;
            cout << "\n Delete Vehicle " << endl;
            cout << " 1. Delete a Bike " << endl;
            cout << " 2. Delete a Car " << endl;
            cout << " Enter your choice: ";
            cin >> deleteChoice;
            if (deleteChoice == 1)
                deleteBike();
            else if (deleteChoice == 2)
                deleteCar();
            else
                cout << "Invalid choice!" << endl;
        }
        break;
        case 8:
        {
            int searchChoice;
            std::cout << "\nSearch Vehicle " << std::endl;
            std::cout << "1. Search a Bike" << std::endl;
            std::cout << "2. Search a Car" << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> searchChoice;

            std::string vehicleNumber;

            if (searchChoice == 1) {
                std::cout << "Enter Bike Number: ";
                std::cin >> vehicleNumber;
                searchBike();
            }
            else if (searchChoice == 2) {
                std::cout << "Enter Car Number: ";
                std::cin >> vehicleNumber;
                searchCar();
            }
            else {
                std::cout << "Invalid Choice!" << std::endl;
            }
        }
        break;
        case 9:
            cout<<"1.Bike"<<endl;
            cout<<"2.Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                 sortbikeStatus();
                break;
            case 2:
                sortcarbyStatus();
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break;
            }
            break;
        case 10:
            cout<<"1.Bike"<<endl;
            cout<<"2.Car"<<endl;
            cout<<"enter choice"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                sortbikebyPrice();
                break;
            case 2:
                sortcarbyPrice();
                break;
            default:
                cout<<"Invalid choice"<<endl;
                break;
            }
            break;

        case 11:
            cout << "Exiting Application..." << endl;
            return;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }
}
