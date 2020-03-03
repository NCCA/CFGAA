#include <iostream>
#include "State.h"

int main()
{
  // create game with high score of 0
  Game g(0);
  std::cout<<"** START **\n";
  for(int i=0; i<4; ++i)
  {
    g.draw();
    std::cout<<"** now update the state**\n";
    g.update();
  }
  std::cout<<"setting high score\n";
  g.setScore(200);
  g.update();
  g.update();
  g.update();
  std::cout<<"***EXIT GAME AND TIDY UP***\n";
}
