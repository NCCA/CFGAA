#include <iostream>
#include <cstdlib>
#include <array>
#include <vector>
#include "Command.h"
#include "InputProcessor.h"
#include "Agent.h"

int main()
{
 // create an array of moves to demonstrate
 // this could actually be an interactive key loop,
 // moves generated from an AI or playback from a file

 std::array<Moves,10> input{{Moves::WALK,Moves::RIGHT,
                            Moves::RUN,Moves::UP,
                            Moves::RIGHT,Moves::DOWN,
                            Moves::WALK,Moves::DOWN,
                            Moves::LEFT,Moves::LEFT
                      }};

 // create an agent
 std::vector<Agent>agents;
 agents.push_back(Agent(Point2{0.0f,0.0f},"agent 1"));
 agents.push_back(Agent(Point2{0.0f,2.0f},"agent 2"));
 agents.push_back(Agent(Point2{3.0f,0.0f},"agent 3"));


 // create an input processor
 InputProcessor processor;
 // process data
 for(auto move : input)
 {
  Command* command=processor.handleInput(move);
  if (command !=nullptr)
  {
   for(auto a : agents)
   {
     command->execute(a);
     a.debug();
    }
  }
 }
 return EXIT_SUCCESS;
}
