#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string,string>india;
    india.insert({"Karnataka","Bengaluru"});
    india["Delhi"]="NewDelhi";
    //map<string,string>india;
    india.emplace("Karnataka","Bengaluru");
    india.emplace("TamilNadu","Chennai");
    india.emplace("Andhra","Amaravathi");
    india.emplace("Telangana","Hyderaba");

    cout<<"India States and their Capitals: "<<endl;
    for(const auto& state: india)
    {
        cout<<state.first<<"  "<<state.second<<endl;
    }

    string state;
    cout<<"Enter state name "<<endl;
    cin>>state;
    cout<<"Capitals " <<state<<" is "<<india.at(state)<<endl;
    return 0;
}

