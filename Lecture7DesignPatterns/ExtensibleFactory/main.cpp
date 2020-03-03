#include <iostream>
#include <memory>
#include "RenderFactory.h"
#include "OpenGLRenderer.h"
#include "DirectXRenderer.h"
#include "GLES.h"


int main()
{
  // register the various 3D renderers with the factory object
  RendererFactory::registerRenderer("opengl", OpenGLRenderer::create);
  RendererFactory::registerRenderer("DirectX", DirectXRenderer::create);
  RendererFactory::registerRenderer("GLES", GLES::create);
  // create an OpenGL renderer
  std::unique_ptr<Renderer> ogl(RendererFactory::createRenderer("opengl"));
  ogl->render();

  // create a DirectX software renderer
  std::unique_ptr<Renderer> DirectX( RendererFactory::createRenderer("DirectX"));
  DirectX->render();

  // create a DirectX software renderer
  std::unique_ptr<Renderer> gles(RendererFactory::createRenderer("GLES"));
  gles->render();
  // unregister the DirectX renderer
  RendererFactory::unregisterRenderer("DirectX");
  DirectX.reset (RendererFactory::createRenderer("DirectX"));
  if (!DirectX)
  {
    std::cout << "DirectX renderer unregistered\n";
  }
  return EXIT_SUCCESS;
}

