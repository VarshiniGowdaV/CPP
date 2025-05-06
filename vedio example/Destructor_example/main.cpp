#include <iostream>

using namespace std;
class Entity
{
public:
    float X,Y;
    Entity()
    {
        cout<<"constrctor called"<<endl;
    }
    Entity(float x,float y)
    {
        X=x;
        Y=y;
    }
    ~Entity()
    {
        std::cout<<"dertroyed Ertity"<<std::endl;
    }
    void Print()
    {
        cout<<X<<","<<Y<<endl;
    }
    void Function()
    {
        Entity e;
        e.Print();
        e.~Entity();
    }
};

int main()
{
    Entity e;
    e.Function();
    cout << "Hello World!" << endl;
    return 0;
}
