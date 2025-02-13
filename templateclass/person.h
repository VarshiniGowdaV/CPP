#ifndef PERSON_H
#define PERSON_H
#include "string"
template<typename V,typename G>
class Person
{
public:
    Person();
    V add(V a,V b);
    G sub(G a,G b);
};

#endif // PERSON_H
