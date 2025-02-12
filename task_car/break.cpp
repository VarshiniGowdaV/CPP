#include "break.h"
#include <iostream>

using namespace std;

Break::Break()
{
    cout << "Break constructor called" << endl;
}

Break::~Break()
{
    cout << "Break destructor called" << endl;
}

void Break::applyBreak()
{
    cout << "Break applied. Car is stopping..." << endl;
}
