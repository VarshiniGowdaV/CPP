#ifndef STAFF_H
#define STAFF_H

class Staff
{
    std::string m_name;
    int m_id;
    int m_age;
public:
    Staff(std::string name,int id,int age);
    Staff();
    ~Staff();
    void addstaff(name,id,age);
    void deletestaff(id);
    void updatestaff(id);
    void findstaff(id);
    void display();
};

#endif // STAFF_H
