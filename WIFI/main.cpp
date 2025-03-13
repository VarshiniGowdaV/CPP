
#include <iostream>
#include <list>
#include "wifi.h"
using namespace std;
#include "fileoperation.h"
#include "wifimanager.h"

enum choice {display=1,sorting,connection};

int main()
{
    int choice;

    /* wifilist.push_back(Wifi("varshi", 60, "connected", 12345));
    wifilist.push_back(Wifi("pallu", 70, "available", 12345));
    wifilist.push_back(Wifi("likitha", 80, "available", 12345));
    wifilist.push_back(Wifi("dharshini", 50, "saved", 12345));
    wifilist.push_back(Wifi("darshan", 56, "saved", 12345));
    wifilist.push_back(Wifi("anu", 66 , "saved" , 12345));
    wifilist.push_back(Wifi("thanu", 55 , "saved" , 12345));
    wifilist.push_back(Wifi("prathik", 63, "available", 12345));
    wifilist.push_back(Wifi("praneeth", 65, "available", 12345));*/

    // Fileoperation fobj;
    Wifimanager wifimanobj;
    while(true)
    {
        cout<<"enter the choice"<<endl;
        cout<<"1.Display available networks"<<endl;
        cout<<"2.Sorting"<<endl;
        cout<<"3.Connection"<<endl;
        cin>>choice;
        switch(choice)
        {
        case display:
        {
            // wifimanobj.writeData();
            wifimanobj.display();
            break;
        }

        case sorting:
        {
            //wifilist=wifimanobj.readData();
            wifimanobj.sortwifi();
            wifimanobj.display();
            break;
        }
        case connection:
        {
            // wifilist=wifimanobj.readData();
            wifimanobj.connection();
            wifimanobj.sortwifi();
            wifimanobj.display();
        }
        default:
            cout<<"invalid choice"<<endl;
        }

    }
    return 0;
}
