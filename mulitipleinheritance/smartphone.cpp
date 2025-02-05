#include "smartphone.h"
#include <iostream>
#include "string"
#include "phone.h"
#include "camera.h"
#include "music.h"
using namespace std;
smartphone::smartphone(int pixels,std::string name,std::string colour,std::string s_song_name,std::string ph_num,std::string ph_name)
    :camera(pixels,name,colour),music(s_song_name),phone(ph_num,ph_name)
{

}
smartphone::~smartphone()
{

}
