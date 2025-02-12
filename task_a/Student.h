#ifndef STUDENT_H
#define STUDENT_H

class Student
{
public:
    int *a;
    Student();
    Student(const Student&);
    ~Student();
};

#endif // STUDENT_H
