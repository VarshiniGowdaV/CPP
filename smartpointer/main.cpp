#include <iostream>
#include <memory>

using namespace std;
class Entity
{
public:
    Entity()
    {
        cout<<"Entity constructor called"<<endl;
    }
    ~Entity()
    {
        cout<<"Entitu destructor called"<<endl;
    }
    void print()
    {

    }
};

int main()
{
    {
        std::unique_ptr<Entity>entity=std::make_unique<Entity>();
        std::shared_ptr<Entity>sharedentity = make_shared<Entity>();
        entity->print();
    }
    cout << "Hello World!" << endl;
    return 0;
}
