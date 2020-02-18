#include "Global.h"
#include <iostream>

void draw()
{
  Global *m=Global::Instance();
  std::cout<<"in draw "<<m->getPointSize()<<"\n";
  std::cout<<"in draw "<<m->getColour()<<"\n";
}

int main()
{
  Global *m=Global::Instance();
  std::cout<<"in main "<<m->getColour()<<"\n";
  draw();
  std::cout<<"draw mode"<<m->getDrawMode()<<"\n";
}
