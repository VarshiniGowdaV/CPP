#include <iostream>
#include <string>
using namespace std;

class Entity
{
private:
    int m_score;
    std::string m_name;

public:
    Entity() : m_name("unknown"), m_score(0) {}

    Entity(const std::string& name) : m_name(name), m_score(0) {}

    const std::string& getname() const {
        return m_name;
    }
};

int main()
{
    cout << "Hello World!" << endl;

    Entity e1;
    Entity e2("Alice");

    cout << "Default name: " << e1.getname() << endl;
    cout << "Given name: " << e2.getname() << endl;

    return 0;
}
