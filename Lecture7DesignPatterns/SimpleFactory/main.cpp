#include <iostream>
#include <RenderFactory.h>
#include "OpenGLRenderer.h"
#include <memory>
int main()
{
    // create the factory object
  std::unique_ptr<RenderFactory>f(new RenderFactory);

  // create an OpenGL renderer
  std::unique_ptr<Renderer> renderType( f->createRenderer("OpenGL"));
  renderType->render();

    //Renderer *directX =
    renderType.reset(f->createRenderer("DirectX"));
    renderType->render();


    std::unique_ptr<Renderer> unknown(f->createRenderer("raytracer"));
    if(unknown == nullptr)
    {
      std::cout<<"don't know how to create a raytracer\n";
    }

    return EXIT_SUCCESS;

}

