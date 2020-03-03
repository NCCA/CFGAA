#include "Renderer.h"
#include <string>

class RenderFactory
{
public :
  Renderer *createRenderer(const std::string &_type);

};
