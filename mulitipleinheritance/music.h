#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
using namespace std;
class music
{
public:
    std::string m_song_name;
    music(std::string song_name);
    ~music();
    void playmusic();
    void display();
};

#endif // MUSIC_H
