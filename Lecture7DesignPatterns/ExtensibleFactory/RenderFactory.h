#include "Renderer.h"
#include <string>
#include <unordered_map>
#include <functional>
class RendererFactory
{
public :
  /// The type for the callback that creates an IRenderer instance

  /// Add a new 3D renderer to the system
  static void registerRenderer(const std::string &type,std::function<Renderer * ()> cb);
  /// Remove an existing 3D renderer from the system
  static void unregisterRenderer(const std::string &type);

  /// Create an instance of a named 3D renderer
  static Renderer *createRenderer(const std::string &type);
private :
    static std::unordered_map<std::string, std::function<Renderer *()>> m_renderers;

};











