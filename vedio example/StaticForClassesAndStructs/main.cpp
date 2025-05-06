#include <iostream>

using namespace std;
struct Entity
{
    int x,y;
    void print()
    {
        std::cout<<x<<","<<y<<std::endl;
    }
};

int main()
{
    Entity e;
    e.x=2;
    e.y=3;
    e.print();
    e.print();
    cout << "Hello World!" << endl;
    return 0;
}
