#include <iostream>
using namespace std;

class Entity
{
public:
    string Getname()
    {
        return "Entity";
    }

    virtual void fun() = 0;
};

class Player : public Entity
{
private:
    string m_name;

public:
    Player(const std::string& name) : m_name(name) {}
    string getname() { return m_name; }

    void fun() override { cout << m_name << endl; }
};

int main()
{

    Player* p = new Player("Varshini");
    cout << p->getname() << endl;
    p->fun();
    cout << "Hello World!" << endl;
    return 0;
}
