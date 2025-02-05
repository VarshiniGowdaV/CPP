#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include "camera.h"
#include "music.h"
#include "phone.h"
class smartphone:public camera,public music,public phone
{
public:
    smartphone(int pixels,std::string name,std::string colour,std::string s_song_name,std::string ph_num,std::string ph_name);
    ~smartphone();
};

#endif // SMARTPHONE_H
