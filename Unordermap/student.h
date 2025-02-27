#ifndef STUDENT_H
#define STUDENT_H
#include "string"
#include<iostream>
#include<unordered_map>
template <typename K, typename V>
class Student
{
private:
    Student<K,V> data;
public:
    Student();
    ~Student();
    void add(const K &key,const V &value);
    friend ostream& operator<<(ostream &os,const Student<K,V> &obj);
};

#endif // STUDENT_H
