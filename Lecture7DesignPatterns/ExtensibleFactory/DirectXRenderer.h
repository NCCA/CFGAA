#ifndef DIRECTXRENDERER_H
#define DIRECTXRENDERER_H
#include <iostream>
#include "Renderer.h"

class DirectXRenderer : public Renderer
{
public:
  DirectXRenderer()=default;
  bool loadScene(const std::string &) {return true;}
  void setViewportSize(int , int ) {;}
  void setCameraPos(double , double , double ) {;}
  void setLookAt(double , double , double ) {;}
  void render() {std::cout<<"DirectX Render\n";}
  ~DirectXRenderer(){std::cout<<"Direct X dtor called\n";}
  static Renderer *create() { return new DirectXRenderer; }

};

#endif
