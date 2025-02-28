#ifndef POLYCAB_H
#define POLYCAB_H
class Ac;
class polycab
{
private:
    Ac *acptr;
public:
    polycab();
    ~polycab();

    void setac(Ac* ac);
    void wireOn();
};

#endif // POLYCAB_H
