#include "music.h"
#include <iostream>
using namespace std;
music::music(std::string song_name)
{
    m_song_name=song_name;
    std::cout<<"music constructor"<<std::endl;
}
music::~music()
{
    std::cout<<"music distructor"<<std::endl;
}

void music::playmusic()
{

}
void music::display()
{
    cout<<"song_name:"<<m_song_name<<endl;
}
