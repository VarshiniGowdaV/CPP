#include "number.h"
#include <iostream>
using namespace std;

number::number(int value)
{
    m_value = value;
    cout << "Constructor called" << endl;
}

number::~number()
{
    cout << "Destructor called" << endl;
}

int number::getvalue()
{
    return m_value;
}

void number::setvalue(int value)
{
    m_value = value;
}

void number::add()
{
    m_value++;
}
