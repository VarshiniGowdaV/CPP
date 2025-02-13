#include <iostream>
using namespace std;
class code
{
    int m_id;
public:
    code(int id);
    ~code();
    void init(int x);
    void display();
};
code::code(int id)
{
    m_id=id;
    cout<<"constructor called"<<endl;
}
code::~code()
{
    cout<<"distructor called"<<endl;
}
void code::init(int x)
{
   m_id=x;
}
void code::display()
{
    cout<<m_id<<endl;
}

int main()
{
    code obj1(6);
    obj1.init(6);
    obj1.display();
    code obj2=obj1;
    obj2.display();
    return 0;
}
