#ifndef WORLD_H_
#define WORLD_H_
// based on discussion here
// http://gameprogrammingpatterns.com/flyweight.html
#include <cassert>
#include <random>
#include "Terrain.h"
constexpr int WIDTH=80;
constexpr int HEIGHT=20;

class World
{
  public :
    World() :
      m_grassTerrain(1,false,TextureID::GRASS),
      m_hillTerrain(3,false,TextureID::HILL),
      m_riverTerrain(2,true,TextureID::RIVER){}

    void generateTerrain();
    const Terrain & getTile(int _x, int _y) const
    {
      assert(_x<WIDTH);
      assert(_y<HEIGHT);
      return *m_tiles[_x][_y];
    }
  private :
    Terrain m_grassTerrain;
    Terrain m_hillTerrain;
    Terrain m_riverTerrain;
    // simple 2d array for now but could use
    // other container
    Terrain *m_tiles[WIDTH][HEIGHT];

};

void World::generateTerrain()
{
  // Seed with a real random value, if available
  std::random_device rd;
  //create a mersenne twister generator
  std::mt19937 gen(rd());
  // create an int distribution
  std::uniform_int_distribution<> dis(0, 10);

  for(int x=0; x<WIDTH; ++x)
  {
    for(int y=0; y<HEIGHT; ++y)
    {
      if(dis(gen) ==0)
      {
        m_tiles[x][y]=&m_hillTerrain;
      }
      else
        m_tiles[x][y]=&m_grassTerrain;
    }
  }
  std::uniform_int_distribution<> dis2(0, WIDTH);

  int x=dis2(gen);
  for(int y=0; y<HEIGHT; ++y)
    m_tiles[x][y]=&m_riverTerrain;
}

#endif
