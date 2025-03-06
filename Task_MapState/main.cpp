#include <iostream>
#include <map>
#include "capital.h"
#include "state.h"
using namespace std;

int main()
{
    map<State,Capital>india;
    india.emplace("karnataka","bengaluru");
    india.emplace("tamilnaadu","chennai");
    india.emplace("andrapradesh", "Amaravathi");
    india.emplace("telangana","hyderabad");

    for(auto i=india.begin();i!=india.end();i++)
    {
        cout<<"State and capital"<<i->first<<" "<<i->second<<endl;
    }
    return 0;

}
