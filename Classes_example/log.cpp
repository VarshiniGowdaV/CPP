#include "log.h"

Log::Log()
{

}
void Log::Move(Log& log,int xa,int yb)
{
    log.x+=xa*log.speed;
    log.y+=yb*log.speed;
}
