#include <iostream>
#include <cstdlib>

  typedef struct
  {
    int x;
    int y;
  }Point2i;


  typedef struct
  {
    int r;
    int g;
    int b;
    int a;
  }Colour4i;

  typedef struct
  {
    Point2i p;
    Colour4i c;
    void debug() const
    {
      std::cout<<'['<<p.x<<','<<p.y<< "] ";
      std::cout<<'('<<c.r<<','<<c.g<<','<<c.b<<','<<c.a<<")\n";
    }
  }ColourVert;



int main()
{
	ColourVert c={{23,10},{255,0,0,0}};
  ColourVert d={{99,12},{255,0,255,0}};

	c.debug();
  d.debug();
  return EXIT_SUCCESS;
}