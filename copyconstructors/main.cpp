#include <iostream>
using namespace std;
// class code
// {
//     int m_id;
// public:
//     code(int id);
//     ~code();
//     void init(int x);
//     void display();
// };
// code::code(int id)
// {
//     m_id=id;
//     cout<<"constructor called"<<endl;
// }
// code::~code()
// {
//     cout<<"distructor called"<<endl;
// }
// void code::init(int x)
// {
//    m_id=x;
// }
// void code::display()
// {
//     cout<<m_id<<endl;
// }

// int main()
// {
//     code obj1(6);
//     obj1.init(6);
//     obj1.display();
//     code obj2=obj1;
//     obj2.display();
//     return 0;
// }
// class shallowcopy
// {
// private:
//     int *data;
// public:
//     shallowcopy(int val)
//     {
//         data = new int(val);
//     }
//     shallowcopy(const shallowcopy& obj)
//     {
//         data = obj.data;
//     }
//     ~shallowcopy()
//     {
//         cout<<"shallowcopy class destructor called"<<endl;
//     }
//     void show()
//     {
//         cout<<"value is "<<*data<<endl;
//         delete data;
//     }

// };
// int main()
// {
//     shallowcopy obj1 =10;
//     shallowcopy obj2=obj1;
//     obj1.show();
//     obj2.show();
// }
class Deepcopy
{
private:
    int *data;
public:
    Deepcopy(int val)
    {
        data = new int(val);
    }
    Deepcopy(const Deepcopy& obj)
    {
        data = new int (*obj.data);
    }
    ~Deepcopy()
    {
        cout<<"Deep copy class destructor called"<<endl;
    }
    void show()
    {
        cout<<"value is"<<*data<<endl;
        delete data;
        cout<<data<<endl;
    }
};
int main()
{
    Deepcopy obj1=20;
    Deepcopy obj2=obj1;
    obj1.show();
    obj2.show();
}
