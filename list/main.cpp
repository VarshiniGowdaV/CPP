#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
    list<int>list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_front(5);
    list1.push_front(6);
    list1.pop_front();
    list1.pop_front();
    list1.remove(2);
    for(int& i:list1)
    {
        std::cout<<i<<endl;
    }

    vector<std::string>vector1;
    vector1.push_back("a");
    vector1.push_back("b");
    vector1.push_back("c");
    vector1.push_back("d");
    vector1.pop_back();


    for(std::string& str:vector1)
    {
        std::cout<<str<<endl;
    }
    cout << "Hello World!" << endl;
    return 0;
}
