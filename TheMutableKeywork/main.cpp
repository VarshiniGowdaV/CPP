#include <iostream>

using namespace std;
class Entity
{
private:
    std::string m_name;
public:
    const std::string&getname()const
    {
        return m_name;
    }
};

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
