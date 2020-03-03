#ifndef TERRAIN_H_
#define TERRAIN_H_
// based on discussion here
// http://gameprogrammingpatterns.com/flyweight.html

enum class TextureID{GRASS,HILL,RIVER};

class Terrain
{
  public :
    Terrain(int _moveCost, bool _isWater,TextureID _tex) :
      m_moveCost(_moveCost),
      m_isWater(_isWater),
      m_tex(_tex){}

    int getMoveCost() const {return m_moveCost;}
    bool isWater() const {return m_isWater;}
    const TextureID & getTexture() const
    {
      return m_tex;
    }

  private :
    int m_moveCost;
    bool m_isWater;
    TextureID m_tex;

};

#endif
