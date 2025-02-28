#include <iostream>
using namespace std;
#include "switch.h"
#include "ac.h"
#include "polycab.h"
//#include "finolex.h"
//#include "havels.h"

int main()
{
    Ac acobj1;
    Switch switchobj1;
    int choice;
    polycab *p;
    finolex *f;
    havels *h;

    cout<<"enter the wire brand"<<endl;
    cout<<"1.Polycab 2.Finolex 3.Havels"<<endl;
    cin>>choice;

    switch(choice)
    {
    case 1:
    {
        p=new polycab;
        acobj1.intializewiretoac(p);
        switchobj1.initializewire(p);
        switchobj1.switchOn();
        break;
    }

    case 2:
    {
        f=new finolex;
        acobj1.intializewiretoac(f);
        switchobj1.initializewire(f);
        switchobj1.switchOn();
        break;

    }

    case 3:
    {
        h=new havels;
        acobj1.intializewiretoac(h);
        switchobj1.initializewire(h);
        switchobj1.switchOn();
        break;

    }
    }
    return 0;
}
