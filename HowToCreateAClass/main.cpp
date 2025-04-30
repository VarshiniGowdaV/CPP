#include <iostream>
class Log
{
public:
    const int LogLevelError =0;
    const int LogLevelWarning =1;
    const int LogLevelInfo =2;
private:
    int m_loglevel=LogLevelInfo;

public:
    void setLevel(int level)
    {
        m_loglevel=level;
    }
    void Error(const char* message)
    {
        if(m_loglevel>=LogLevelError)
        std::cout<<"[Error]: "<<message<<std::endl;
    }
    void warn(const char* message)
    {
        std::cout<<"[Warning]: "<<message<<std::endl;
    }
};

using namespace std;

int main()
{
    Log log;
    log.setLevel(2);
    log.warn("hii");
    log.Error("hii");

            cout << "Hello World!" << endl;
    return 0;
}
