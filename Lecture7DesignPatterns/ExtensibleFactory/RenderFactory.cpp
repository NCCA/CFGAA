#include "RenderFactory.h"

// instantiate the static variable in RendererFactory
std::unordered_map<std::string, std::function<Renderer *()>>  RendererFactory::m_renderers;

void RendererFactory::registerRenderer(const std::string &type,std::function<Renderer *()> cb)
{
  m_renderers[type] = cb;
}

void RendererFactory::unregisterRenderer(const std::string &type)
{
  m_renderers.erase(type);
}

Renderer *RendererFactory::createRenderer(const std::string &type)
{

  auto it = m_renderers.find(type);
  if (it != m_renderers.end())
  {
    // call the creation callback to construct this derived type
    return it->second();
  }
  return nullptr;
}











