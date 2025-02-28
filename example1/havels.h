#ifndef HAVELS_H
#define HAVELS_H
class Ac;
class havels
{
private:
    Ac *acptr;
public:
    havels();
    ~havels();

    void setac(Ac* ac);
    void wireOn();
};

#endif // HAVELS_H
