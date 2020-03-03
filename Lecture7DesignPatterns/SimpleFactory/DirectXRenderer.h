#ifndef DIRECTXRENDERER_H
#define DIRECTXRENDERER_H
#include <iostream>
#include "Renderer.h"

class DirectXRenderer : public Renderer
{
public:

  bool loadScene(const std::string &_filename) {return true;}
  void setViewportSize(int _w, int _h) {;}
  void setCameraPos(float _x, float _y, float _z) {;}
  void setLookAt(float _x, float _y, float _z) {;}
  void render() {std::cout<<"DirectX Render\n";}
  ~DirectXRenderer(){std::cout<<"DirectX dtor called\n";}
};

#endif
