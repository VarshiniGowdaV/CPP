#include "engine.h"
#include <iostream>
using namespace std;
Engine::Engine()
{
    cout<<"engine default constructor called"<<endl;
}

Engine::~Engine()
{
    cout<<"engine distructor called"<<endl;
}
void Engine::startengine()
{
    cout<<"engine starting"<<endl;
}
void Engine::stopengine()
{
    cout<<"engine stop"<<endl;
}
