#include "Texture.h"
#include <cstdlib>

void checkForTexture()
{
  Texture::getTexture("new.tga");
  Texture::printCurrentTexture();
}


int main()
{
  Texture::getTexture("diffuse.tga");
  Texture::printCurrentTexture();
  Texture::getTexture("specular.tga");
  Texture::printCurrentTexture();
  Texture::getTexture("diffuse.tga");
  Texture::printCurrentTexture();
  checkForTexture();
  return EXIT_SUCCESS;
}

