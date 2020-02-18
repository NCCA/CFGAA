#include "Global.h"
#include <fstream>
/// @file Global.cpp
/// @brief implementation of singleton

Global* Global::m_pinstance = 0;// initialize pointer

Global* Global::Instance() 
{
  if (m_pinstance == 0)  // is it the first call?
  {
    std::cout<<"new instance\n";
    m_pinstance = new Global; // create sole instance
  }
  std::cout<<"existing object\n";
  return m_pinstance; // address of sole instance
}

Global::Global()
{
    std::fstream fileIn;
    fileIn.open("config.txt",std::ios::in);
    if (!fileIn.is_open())
    {
      exit(EXIT_FAILURE);
    }
    fileIn>>m_colour;
    fileIn>>m_pointSize;
    fileIn>>m_drawMode;
    fileIn.close();
}
