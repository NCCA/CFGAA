#ifndef RENDERER_H
#define RENDERER_H

#include <string>

///
/// An abstract interface for a 3D renderer based on the martin reddy book
/// See http://APIBook.com/ for the latest version.
class Renderer
{
public:
  virtual ~Renderer()=default;
  virtual bool loadScene(const std::string &filename) = 0;
  virtual void setViewportSize(int w, int h) = 0;
  virtual void setCameraPos(double x, double y, double z) = 0;
  virtual void setLookAt(double x, double y, double z) = 0;
  virtual void render() = 0;
};

#endif
