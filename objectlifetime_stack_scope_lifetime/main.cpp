#include <iostream>

using namespace std;
class Entity
{
public:
Entity()
    {
    cout<<"Create entity"<<endl;
    }
~Entity()
    {
    cout<<"Destructor called"<<endl;
    }
int * createrArray()
    {
    int array[50];
        return array;
    }
private:
    int x;
};

int main()
{
    Entity*e =new Entity();
    cout << "Hello World!" << endl;
    return 0;
}
