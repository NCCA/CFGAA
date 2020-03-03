#ifndef OPENGLRENDERER_H
#define OPENGLRENDERER_H
#include <iostream>
#include "Renderer.h"


class OpenGLRenderer : public Renderer
{
public:

  bool loadScene(const std::string &) {return true;}
  void setViewportSize(int , int ) {;}
  void setCameraPos(double , double , double ) {;}
  void setLookAt(double , double , double ) {;}
  void render() {std::cout<<"OpenGL Render\n";}
  ~OpenGLRenderer(){std::cout<<"OpenGL dtor called\n";}
  static Renderer *create() { return new OpenGLRenderer; }

};

#endif
