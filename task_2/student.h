#ifndef STUDENT_H
#define STUDENT_H

    class student
{
public:
    student();
    student(int m_age, int m_contact_number);
    ~student();
    int *m_age;
    int *m_contactnumber;

    void printme();

};
#endif
