#ifndef CONFIG_H_
#define CONFIG_H_
#include <string>

class Config
{
  public :
    Config();
    int getPointSize() const {return m_pointSize;}
    std::string getColour() const {return m_colour;}
    std::string getDrawMode() const {return m_drawMode;}
  private :
    static bool m_configRead;
    static int m_pointSize;
    static std::string m_colour;
    static std::string m_drawMode;
};


#endif
