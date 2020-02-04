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
}ColourVert;

void debug(const ColourVert &p)
{
  std::cout<<'['<<p.p.x<<','<<p.p.y<< "] ";
  std::cout<<'('<<p.c.r<<','<<p.c.g<<','<<p.c.b<<','<<p.c.a<<")\n";
}


int main()
{
	ColourVert c={ {23,10},{255,0,0,0} };
	debug(c);
  return EXIT_SUCCESS;
}








