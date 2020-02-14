#include "Colour.h"
#include <cassert>
float Colour::red() const
{
  return m_r;
}

float Colour::green() const
{
  return m_g;
}

float Colour::blue() const
{
  return m_b;
}

float Colour::alpha() const
{
  return m_a;
}

void Colour::set(float _r, float _g, float _b, float _a)
{
  m_r=_r;
  m_g=_g;
  m_b=_b;
  m_a=_a;
}

void Colour::setRed(float _r)
{
  m_r=_r;
}
void Colour::setGreen(float _g)
{
  m_g=_g;
}

void Colour::setBlue(float _b)
{
  m_b=_b;
}

void Colour::setAlpha(float _a)
{
  m_a=_a;
}

void Colour::clamp(float _min, float _max)
{
  auto clamp=[](float _v,float _min,float _max)
  {
  return (_v < _min) ? _min : (_max < _v) ? _max : _v;
  };

  m_r=clamp(m_r,_min,_max);
  m_g=clamp(m_g,_min,_max);
  m_b=clamp(m_b,_min,_max);
  m_a=clamp(m_a,_min,_max);

}


void Colour::mix(const Colour &_in, float _t)
{
  assert(_t>=0.0f && _t <= 1.0f);
  m_r=m_r+(_in.m_r-m_r)*_t;
  m_g=m_g+(_in.m_g-m_g)*_t;
  m_b=m_b+(_in.m_b-m_b)*_t;
  m_a=m_a+(_in.m_a-m_a)*_t;

}


Colour Colour::mix(const Colour &_a, const Colour &_b, float _t)
{
  Colour ret;
  ret.m_r=_a.m_r+(_b.m_r-_a.m_r)*_t;
  ret.m_g=_a.m_g+(_b.m_g-_a.m_g)*_t;
  ret.m_b=_a.m_b+(_b.m_b-_a.m_b)*_t;
  ret.m_a=_a.m_a+(_b.m_a-_a.m_a)*_t;
  return ret;
}




