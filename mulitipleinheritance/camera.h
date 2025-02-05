#ifndef CAMERA_H
#define CAMERA_H
#include <iostream>
using namespace std;
class camera
{
public:
    int m_pixels;
    std::string m_name;
    std::string m_colour;
    camera(int pixels,std::string name,std::string colour);
    ~camera();
    void takephoto();
    void display();
};

#endif // CAMERA_H
