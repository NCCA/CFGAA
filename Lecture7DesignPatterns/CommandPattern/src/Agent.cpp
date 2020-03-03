#include "Agent.h"
#include <iostream>
void Agent::run()
{
  m_speed=2.0f;
}

void Agent::walk()
{
  m_speed=1.0f;
}


void Agent::up()
{
  m_pos.y+=m_speed;
}

void Agent::down()
{
  m_pos.y-=m_speed;
}

void Agent::left()
{
  m_pos.x-=m_speed;
}

void Agent::right()
{
  m_pos.x+=m_speed;
}

void Agent::debug() const
{
  std::cout<<m_name<<" position "<<m_pos.x<<" "<<m_pos.y<<"\n";
}
