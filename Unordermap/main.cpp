#include <iostream>
#include "student.h"
#include"string"
using namespace std;

int main()
{
    unordered_map<int,string>intStringMap;
    intStringMap.add(1,"one");
    intStringMap.add(2,"two");
    intStringMap.add(3,"three");

    unordered_map<float,string>floatStringMap;
    floatStringMap.add(1.1f,"one point one");
    floatStringMap.add(1.2f,"one point two");
    floatStringMap.add(1.3f,"one point three");

    unordered_map<string,int>stringIntMap;
    stringIntMap.add("varshini",14);
    stringIntMap.add("gowda",9);

    cout<<"Int_String_Map: "<<intStringMap<<endl;
    cout<<"Float_String_Map: "<<floatStringMap<<endl;
    cout<<"String_Int_Map: "<<stringIntMap<<endl;

    return 0;
}
