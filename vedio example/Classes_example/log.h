#ifndef LOG_H
#define LOG_H

class Log
{
public:
    int x,y;
    int speed;
    Log();
    void Move(Log& log ,int xa,int ya);
};

#endif // LOG_H
