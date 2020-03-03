#include "Vec3.h"
#include <cassert>
#include <iostream>

bool Vec3::operator==(const Vec3& _v)const
{
  return (
          FCompare(_v.m_x,m_x)  &&
          FCompare(_v.m_y,m_y)  &&
          FCompare(_v.m_z,m_z)
         );
}

bool Vec3::operator!=(const Vec3& _v  )const
{
  return (
          !FCompare(_v.m_x,m_x) ||
          !FCompare(_v.m_y,m_y) ||
          !FCompare(_v.m_z,m_z)
         );
}

std::ostream& operator<<( std::ostream& _output,  const Vec3& _v   )
{
  return _output<<"["<<_v.m_x<<","<<_v.m_y<<","<<_v.m_z<<"]";
}
std::istream& operator>>( std::istream& _input, Vec3& _s  )
{
  return _input >> _s.m_x >> _s.m_y >> _s.m_z;
}

float& Vec3::operator[](  size_t _i )
{
  assert( _i<=3);
  return m_openGL[_i];
}

Vec3 Vec3::operator-()
{
    m_x=-m_x;
    m_y=-m_y;
    m_z=-m_z;
    return *this;
}



Vec3 Vec3::operator+( const Vec3& _v)const
{
  return Vec3(m_x+_v.m_x,m_y+_v.m_y,m_z+_v.m_z);
}

Vec3 Vec3::operator-( const Vec3& _v)const
{
  return Vec3(m_x-_v.m_x,m_y-_v.m_y,m_z-_v.m_z);
}


Vec3& Vec3::operator+=(const Vec3& _v)
{
  m_x+=_v.m_x;
  m_y+=_v.m_y;
  m_z+=_v.m_z;
  return *this;
}

Vec3& Vec3::operator-=(const Vec3& _v)
{
  m_x-=_v.m_x;
  m_y-=_v.m_y;
  m_z-=_v.m_z;
  return *this;
}


Vec3 Vec3::operator *(float _i)const
{
  return Vec3(m_x*_i,m_y*_i,m_z*_i);
}


Vec3 Vec3::operator*( const Vec3& _v  )const
{
  return Vec3(m_x*_v.m_x,m_y*_v.m_y,m_z*_v.m_z );
}

Vec3& Vec3::operator*=(float _v)
{
  m_x*=_v;
  m_y*=_v;
  m_z*=_v;
  return *this;
}

Vec3 Vec3::operator/(float _v)const
{
  return Vec3(m_x/_v,m_y/_v,m_z/_v);
}


Vec3& Vec3::operator/=(float _v)
{
  assert(_v !=0.0f);
  m_x/=_v;
  m_y/=_v;
  m_z/=_v;
  return  *this;
}

Vec3 Vec3::operator/( const Vec3& _v )const
{
  return Vec3(m_x/_v.m_x,m_y/_v.m_y,m_z/_v.m_z);
}

Vec3& Vec3::operator/=(const Vec3 &_v)
{
  assert(_v.m_x !=0.0f && _v.m_y !=0.0f && _v.m_z !=0.0f);
  m_x/=_v.m_x;
  m_y/=_v.m_y;
  m_z/=_v.m_z;
  return  *this;
}


