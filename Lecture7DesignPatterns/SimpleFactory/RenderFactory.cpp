#include "RenderFactory.h"
#include "DirectXRenderer.h"
#include "OpenGLRenderer.h"


Renderer *RenderFactory::createRenderer(const std::string &_type)
{
  if(_type=="OpenGL")
  {
    return new OpenGLRenderer();
  }

  else if(_type=="DirectX")
  {
    return new DirectXRenderer();
  }
  else return nullptr;
}
