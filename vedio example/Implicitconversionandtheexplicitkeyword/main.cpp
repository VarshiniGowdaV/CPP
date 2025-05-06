#include <iostream>
#include <string>
using namespace std;
class Entity
{
private:
    std::string m_name;
    int m_age;
public:
    Entity(const std::string& name):m_name(name){}
    Entity(int age):m_name("unknown"),m_age(age){}
};

int main()
{
    Entity a("Varshi");
    Entity b(22);
    cout << "Hello World!" << endl;
    return 0;
}
