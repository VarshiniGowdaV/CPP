#include <iostream>

using namespace std;
class Entity
{
public:
    float X,Y;
    void Move(float xa,float yb)
    {
        X += xa;
        Y += yb;

    }
};
class Player:public Entity
{
public:
    const char*Name;
    float X,Y;
    void Move(float xa,float yb)
    {
        X += xa;
        Y += yb;

    }
    void PrintName()
    {
        cout<<Name<<endl;
    }
};

int main()
{
    Player player;
    player.Move(5.5,5.6);
    player.X =2;
    cout << "Hello World!" << endl;
    return 0;
}
