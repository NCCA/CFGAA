#include "Config.h"
#include <iostream>

void draw()
{
  Config m;
  std::cout<<"in draw "<<m.getPointSize()<<'\n';
  std::cout<<"in draw "<<m.getColour()<<'\n';
}

int main()
{
  Config m;
  std::cout<<"in main "<<m.getColour()<<'\n';
  draw();
  std::cout<<"draw mode"<<m.getDrawMode()<<'\n';
}
