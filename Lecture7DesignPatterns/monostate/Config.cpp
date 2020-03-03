#include "Config.h"
#include <fstream>

bool Config::m_configRead=false;
std::string Config::m_colour="";
std::string Config::m_drawMode="";
int Config::m_pointSize=1;


Config::Config()
{
  if(m_configRead ==false)
  {
    m_configRead=true;
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
}
