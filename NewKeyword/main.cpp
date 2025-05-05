#include <iostream>
#include <string>
using namespace std;

class Entity {
private:
    string m_name;
public:
    Entity() : m_name("Unknown") {}
    Entity(const string& name) : m_name(name) {}
    const string& getname() const { return m_name; }
};

int main() {
    int a = 2;

    int* b = new int[50];
    Entity* e = new Entity[50];
    delete[] b;
    delete[] e;

    cout << "Hello World!" << endl;
    return 0;
}
