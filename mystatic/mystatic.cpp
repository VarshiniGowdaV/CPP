#include "mystatic.h"
#include <iostream>
using namespace std;
#include "mystatic.h"

int mystatic::staticvariable =20;

mystatic::mystatic(int m_z)
{
    this->m_z=m_z;
    cout<<m_z<<endl;
}

int mystatic::staticfun()
{
   cout<<"static function called"<<endl;
}

int mystatic::nonstaticfun()
{
    cout<<"static variable"<<staticvariable<<endl;
    staticvariable++;
}
