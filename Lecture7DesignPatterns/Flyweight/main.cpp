 #include <iostream>
#include <cstdlib>
#include "World.h"

int main()
{
World world;
world.generateTerrain();
for(int y=0; y<HEIGHT; ++y)
{
  for(int x=0; x<WIDTH; ++x)
  {
    std::cout<<world.getTile(x,y).getMoveCost();
  }
  std::cout<<'\n';
}


}
