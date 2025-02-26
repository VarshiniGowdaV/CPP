#include <iostream>
#include "finolex.h"
#include "havels.h"
#include "polycab.h"
#include "wire.h"
using namespace std;

int main()
{
    Wire *p;
    p=new Wire;

    Polycab *pb;
    pb=new Polycab;

    Havels *h;
    h=new Havels;

    Finolex *f;
    f=new Finolex;

    delete p;
    delete pb;
    delete h;
    delete f;

    return 0;


    // Wire *p;
    // p=new Wire;
    // delete p;

    // p=new Polycab;
    // delete p;
    // p=new Havels;
    // delete p;
    // p=new Finolex;
    // delete p;

    //return 0;
}
