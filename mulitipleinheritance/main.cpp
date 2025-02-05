#include <iostream>
#include "camera.h"
#include "phone.h"
#include "music.h"
#include "smartphone.h"
using namespace std;

int main()
{
    smartphone obj(4,"camera","black","abc","123456789","xyz");
    obj.makecall();
    obj.playmusic();
    obj.takephoto();
    obj.phone::display();
    obj.music::display();
    obj.camera::display();
    return 0;
}
