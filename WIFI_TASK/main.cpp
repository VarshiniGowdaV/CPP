#include <iostream>
#include <list>
#include "wifi.h"
#include "fileoperation.h"
#include "wifimanager.h"

using namespace std;

enum choice { display = 1, sorting, connection };

int main()
{
    int userChoice;

    Wifimanager wifimanobj;
    std::list<Wifi> wifilist;

   /* wifilist.push_back(Wifi("varshi", 60, "connected", 12345));
    wifilist.push_back(Wifi("pallu", 70, "available", 12345));
    wifilist.push_back(Wifi("likitha", 80, "available", 12345));
    wifilist.push_back(Wifi("dharshini", 50, "saved", 12345));
    wifilist.push_back(Wifi("darshan", 56, "saved", 12345));
    wifilist.push_back(Wifi("anu", 66 , "saved" , 12345));
    wifilist.push_back(Wifi("thanu", 55 , "saved" , 12345));
    wifilist.push_back(Wifi("prathik", 63, "available", 12345));
    wifilist.push_back(Wifi("praneeth", 65, "available", 12345));*/

    cout << "Enter your choice:" << endl;
    cout << "1. Display available networks" << endl;
    cout << "2. Sorting" << endl;
    cout << "3. Connection" << endl;
    cin >> userChoice;

    switch (userChoice)
    {
    case display:
        wifimanobj.readData();
        wifimanobj.writeData();
        wifimanobj.display();
        break;

    case sorting:
        wifimanobj.sortwifi();
        wifimanobj.display();
        break;

    case connection:
        wifimanobj.connection();
        wifimanobj.sortwifi();
        wifimanobj.display();
        break;

    default:
        cout << "Invalid choice. Please enter a valid option." << endl;
        break;
    }

    return 0;
}
