#include "Agent.h"
#include "Command.h"


void RunCommand::execute(Agent& _agent)
{
  _agent.run();
}

void WalkCommand::execute(Agent &_agent)
{
  _agent.walk();
}

void LeftCommand::execute(Agent &_agent)
{
  _agent.left();
}

void RightCommand::execute(Agent &_agent)
{
  _agent.right();
}

void UpCommand::execute(Agent &_agent)
{
  _agent.up();
}

void DownCommand::execute(Agent &_agent)
{
  _agent.down();
}


