#ifndef CAR_H
#define CAR_H

class Car
{
public:
    Car();
    template<typename T>
    T add(T a,T b);
    template<typename g>
    g sub(g a,g b);
    template<typename A>
    A add(A a,A b,A c);
    template<typename D>
    D name(D a,D b);
    template<typename B,typename C>
    B add(B a,B b,C c);


};

#endif // CAR_H
