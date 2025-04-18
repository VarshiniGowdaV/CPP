#include <iostream>
#include <vector>
#include "calender.h"
#include <map>
#include "theatermanager.h"
using namespace std;
int main()
{
    Calender calender;
    calender.PrintAprilCalendar(2025);
    calender.CurrentDate();

    vector<Theater> m_theaterlist;
    for(int i=0;i<10;++i)
    {
        m_theaterlist.push_back(Theater(i));
    }
    map<vector<int>,Theater>map1;
    vector<int>keyvec = {0,1,2};
    map1[keyvec]=m_theaterlist[0];

    map<int,vector<int>> dateToBookedIds;

    int choice;
    do
    {
        cout<<"\n....Theater Booking System....\n";
        cout<<"1.Book a Theater\n";
        cout<<"2.Check Booking status on the date\n";
        cout<<"3.date Booked Id's\n";
        cout<<"4.Exit\n";
        cout<<"Enter Your choice: ";
        cin>>choice;
        TheaterManager manager;
        if(choice == 1)
        {

            int id ,day;
            cout<<"Enter Date in April(1-30): ";
            cin>>day;
            cout<<"Enter Theater Id(0-9): ";
            cin>>id;
            if(manager.bookTheater(m_theaterlist,id,day))
            {
                dateToBookedIds[day].push_back(id);
            }
        }
        else if (choice == 2)
        {
            int day;
            cout << "Enter Date in April (1 - 30) to check status: ";
            cin >> day;

            manager.printStatus(m_theaterlist, day);
        }
        else if (choice == 3)
        {
            cout << "\n Booked Theater IDs by Date:\n";
            for (const auto& entry : dateToBookedIds)
            {
                cout << "April " << entry.first << ": theater ";
                for (int id : entry.second)
                {
                    cout << id << " ";
                }
                cout << "\n";
            }
        }

    } while (choice != 4);

    return 0;
}

