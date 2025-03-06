#include "state.h"
#include <iostream>
using namespace std;
State::State()
{
    cout<<"State constructor called"<<endl;
}
State::~State()
{
    cout<<"State destructor called"<<endl;
}
State::State(string state)
{
    m_state=state;
}
