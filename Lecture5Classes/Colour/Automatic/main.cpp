#include "Colour.h"

int main()
{
  Colour c; // create automatic object on stack
  {
    Colour x(0.1f,0.2f,0.3f,0.4f);
    for(int i=0; i<10; ++i)
    {
        Colour y={1.0f,0.0f,0.0f,1.0f};
    }
  }
}
