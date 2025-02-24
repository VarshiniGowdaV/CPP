// #include "student1.h"

// Student1::Student1(std::string name,int id,int age)
// {
//     m_name=name;
//     m_age=age;
//     m_id=id;
//     cout<<"student constructor called"<<endl;
// }
// Student1::~Student1()
// {
//     cout<<"student destructor called"<<endl;
// }
// std::string Student1::getname()
// {
//     return m_name;
// }
// int Student1::getage()
// {
//     return m_age;
// }
// int Student1::getid()
// {
//     return m_id;
// }
// void Student1::setname(std::string name)
// {
//     m_name=name;
// }
// void Student1::setage(int age)
// {
//     m_age=age;
// }
// void Student1::setid(int id)
// {
//     m_id=id;
// }
// void Student1::display()
// {
//     cout<<"name:"<<m_name<<endl;
//     cout<<"age:"<<m_age<<endl;
//     cout<<"id:"<<m_id<<endl;
// }
// friend std::ostream& operator<<(std::ostream& os,const Student1& s)
// {
//     os << "Student(Name: " << s.m_name << ", ID: " << s.m_id << ", Age: " << s.m_age << ")";
//     return os;
// }
