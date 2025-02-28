#ifndef FINOLEX_H
#define FINOLEX_H
class Ac;
class finolex
{
private:
    Ac *acptr;
public:
    finolex();
    ~finolex();

    void setac(Ac* ac);
    void wireOn();
};

#endif // FINOLEX_H
