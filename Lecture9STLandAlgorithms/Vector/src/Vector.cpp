/*
  Copyright (C) 2009 Jon Macey

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "Vector.h"
#include <cmath>
#include <cassert>
#include <iostream>
//----------------------------------------------------------------------------------------------------------------------
/// @file Vector.cpp
/// @brief implementation files for Vector class
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
void Vector::set(float _x,float _y, float _z,float _w )
{
	m_x=_x;
	m_y=_y;
	m_z=_z;
	m_w=_w;
}

//----------------------------------------------------------------------------------------------------------------------
void Vector::set(const Vector& _v )
{
   m_x=_v.m_x;
   m_y=_v.m_y;
   m_z=_v.m_z;
   m_w=_v.m_w;
}



//----------------------------------------------------------------------------------------------------------------------
float& Vector::operator[](  int _i )
{
	assert(_i >=0 || _i<=4);
	return (&m_x)[_i];
}


//----------------------------------------------------------------------------------------------------------------------
Vector Vector::operator-() const
{
	return Vector(-m_x,-m_y,-m_z,m_w);
}



//----------------------------------------------------------------------------------------------------------------------
void Vector::operator+=( const Vector& _v )
{
	m_x+=_v.m_x;
	m_y+=_v.m_y;
	m_z+=_v.m_z;
  // m_w=0.0; note design decision on w to leave as is!
}

//----------------------------------------------------------------------------------------------------------------------
void Vector::operator/=(const float _v )
{
	assert(_v !=0);
	m_x/=_v;
	m_y/=_v;
	m_z/=_v;
  // m_w=0.0;
}

//----------------------------------------------------------------------------------------------------------------------
void Vector::operator-=(const Vector& _v  )
{
	m_x-=_v.m_x;
	m_y-=_v.m_y;
	m_z-=_v.m_z;
  // m_w=0.0;
}

//----------------------------------------------------------------------------------------------------------------------
Vector Vector::operator/( float _v )const
{
	return Vector(
								m_x/_v,
								m_y/_v,
								m_z/_v,
								m_w
								);
}

//----------------------------------------------------------------------------------------------------------------------
Vector Vector::operator+(const Vector& _v )const
{
	return Vector(
							  m_x+_v.m_x,
							  m_y+_v.m_y,
							  m_z+_v.m_z,
							  m_w
							  );
}

//----------------------------------------------------------------------------------------------------------------------
Vector Vector::operator-( const Vector& _v )const
{
	return Vector(
								m_x-_v.m_x,
								m_y-_v.m_y,
								m_z-_v.m_z,
								m_w
							 );
}

//----------------------------------------------------------------------------------------------------------------------
bool Vector::operator==( const Vector& _v )const
{
	return (
					FCompare(_v.m_x,m_x)  &&
					FCompare(_v.m_y,m_y)  &&
					FCompare(_v.m_z,m_z)
				 );
}
//----------------------------------------------------------------------------------------------------------------------
bool Vector::operator!=( const Vector& _v )const
{
	return (
					!FCompare(_v.m_x,m_x) ||
					!FCompare(_v.m_y,m_y) ||
					!FCompare(_v.m_z,m_z)
				 );
}
//----------------------------------------------------------------------------------------------------------------------
Vector Vector::operator*( const Vector& _v )const
{
	return Vector(
								m_x*_v.m_x,
								m_y*_v.m_y,
								m_z*_v.m_z,
								m_w
							 );
}

//----------------------------------------------------------------------------------------------------------------------
Vector Vector::operator/( const Vector& _v  )const
{
	return Vector(
								m_x/_v.m_x,
								m_y/_v.m_y,
								m_z/_v.m_z,
								m_w
								);
}

//----------------------------------------------------------------------------------------------------------------------
Vector Vector::operator *(float _i )const
{
	return Vector(
								m_x*_i,
								m_y*_i,
								m_z*_i,
								m_w
							 );
}


//----------------------------------------------------------------------------------------------------------------------
Vector & Vector::operator=( const Vector& _v  )
{
	m_x = _v.m_x;
	m_y = _v.m_y;
	m_z = _v.m_z;
	m_w = _v.m_w;
	return *this;
}

//----------------------------------------------------------------------------------------------------------------------
std::ostream& operator<<( std::ostream& _output,  const Vector& _v   )
{
	return _output<<"["<<_v.m_x<<","<<_v.m_y<<","<<_v.m_z<<","<<_v.m_w<<"]";
}
//----------------------------------------------------------------------------------------------------------------------
std::istream& operator>>( std::istream& _input, Vector& _s  )
{
  return _input >> _s.m_x >> _s.m_y >> _s.m_z;//>>s.m_w;
}

//----------------------------------------------------------------------------------------------------------------------
std::ostream& operator<<(  std::ostream& _output,  const Vector* _s    )
{
  return _output<<"["<<_s->m_x<<","<<_s->m_y<<","<<_s->m_z<<","<<_s->m_w<<"]";
}
/// \todo #warning don't forget the nasty don't load m_w hack here

//----------------------------------------------------------------------------------------------------------------------
std::istream& operator>>( std::istream& _input,   Vector *_s   )
{
  return _input >> _s->m_x >> _s->m_y >> _s->m_z;//>>s->m_w;
}


