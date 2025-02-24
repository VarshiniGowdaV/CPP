#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
    // list<int>list1;
    // list1.push_back(1);
    // list1.push_back(2);
    // list1.push_back(2);
    // list1.push_back(3);
    // list1.push_back(4);
    // list1.push_front(5);
    // list1.push_front(6);
    // list1.pop_front();
    // list1.pop_front();
    // list1.remove(2);
    // list1.push_front(2);
    // for(int& i:list1)
    // {
    //     std::cout<<i<<endl;
    // }


    // list<float>list2;
    // list2.push_front(1.1);
    // list2.push_front(1.0);
    // list2.push_back(1.2);
    // list2.push_back(1.3);
    // list2.push_back(1.4);
    // list2.pop_front();
    // for(float& f:list2)
    // {
    //     std::cout<<f<<endl;
    // }

    // list<double>list3;
    // list3.push_front(22.2);
    // list3.push_back(22.4);
    // for(double& d:list3)
    // {
    //     std::cout<<d<<endl;
    // }

    // vector<std::string>vector1;
    // vector1.push_back("a");
    // vector1.push_back("b");
    // vector1.push_back("c");
    // vector1.push_back("d");
    // vector1.pop_back();


    // for(std::string& str:vector1)
    // {
    //     std::cout<<str<<endl;
    // }
    vector<int>vector1;
    vector1.push_back(1);
    vector1.push_back(2);
    vector1.push_back(3);
    vector1.push_back(4);
    vector1.push_back(5);
    vector1.push_back(6);
    vector1.push_back(7);
    // for(int& i:vector1)
    // {
    //     cout<<i<<endl;
    // }
  std::cout<<sizeof(vector1)<<endl;

    list<int>list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(6);
    // for(int& n:list1)
    // {
    //     //std::cout<<sizeof(list1)<<endl;
    // }
    std::cout<<sizeof(list1)<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
