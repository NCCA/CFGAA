#ifndef GLES_H
#define GLES_H
#include <iostream>
#include "Renderer.h"

class GLES : public Renderer
{
public:

  bool loadScene(const std::string &) {return true;}
  void setViewportSize(int , int ) {;}
  void setCameraPos(double , double , double ) {;}
  void setLookAt(double , double , double ) {;}
  void render() {std::cout<<"GLES Render\n";}
  ~GLES(){std::cout<<"GLES dtor called\n";}
  static Renderer *create() { return new GLES; }

};

#endif
