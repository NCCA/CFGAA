#ifndef TEXTURE_H_
#define TEXTURE_H_
#include <string>
#include <unordered_map>
#include <memory>
class Texture
{
public :
  static Texture* getTexture(const std::string &_type);
  // just to demo the process
  static void printCurrentTexture();
private :
    static std::unordered_map<std::string,std::shared_ptr<Texture>> m_textures;
    // the type of this texture (i.e. the name)
    std::string m_name;

  // note: constructor private forcing one to use static getTexture()
    Texture(const std::string &_t) : m_name( _t ) {}
};

#endif
