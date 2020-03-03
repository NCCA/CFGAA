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
#ifndef VECTOR_H_
#define VECTOR_H_
//----------------------------------------------------------------------------------------------------------------------
/// @file Vector.h
/// @brief a simple 4D vector class
//----------------------------------------------------------------------------------------------------------------------

#include <cmath>
#include <iosfwd>
#include <array>
//----------------------------------------------------------------------------------------------------------------------
/// @file Vector.h
/// @brief encapsulates a 4d Homogenous Point / Vector object
/// @author Jonathan Macey
/// @version 3.0
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
/// @class Vector "include/Vector.h"
/// @brief simple Vector class for OpenGL graphics, contains overloaded operators for
/// most math functions, including operators for manipulation by Point3 and Matrix
/// has a simple union to allow data to be access as x,y,z,w or float[4] array
//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
/// @brief FCompare macro used for floating point comparision functions
//----------------------------------------------------------------------------------------------------------------------
#ifndef EPSILON
  constexpr float EPSILON = 0.001f;
#endif
#define FCompare(a,b) \
      ( ((a)-EPSILON)<(b) && ((a)+EPSILON)>(b) )


class Vector
{

public:


  void set(float _x, float _y, float _z,  float _w=1.0f );

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief set from another  vector
  /// @param[in]  _v the vector to set from
  //----------------------------------------------------------------------------------------------------------------------
  void set(const Vector& _v );
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief copy ctor
  /// @param[in] _v the value to set
  //----------------------------------------------------------------------------------------------------------------------
  Vector( const Vector& _v ) :
            m_x(_v.m_x),
            m_y(_v.m_y),
            m_z(_v.m_z),
            m_w(_v.m_w){;}


  //----------------------------------------------------------------------------------------------------------------------
  /// @brief initialise the constructor from 3 or 4 float
  /// @param[in]  _x x value
  /// @param[in]  _y y value
  /// @param[in]  _z z value
  /// @param[in]  _w 1.0f default so acts as a points
  //----------------------------------------------------------------------------------------------------------------------
   Vector(float _x, float _y,float _z,float _w=1.0 ):
           m_x(_x),
           m_y(_y),
           m_z(_z),
           m_w(_w){}


  //----------------------------------------------------------------------------------------------------------------------
  /// @brief [] index operator to access the index component of the vector
  /// @returns  this[x] as a float
  //----------------------------------------------------------------------------------------------------------------------
  float& operator[](  int _i) ;



  //----------------------------------------------------------------------------------------------------------------------
  /// @brief += operator add vector v to current vector
  /// @param[in]  &_v vector to add
  //----------------------------------------------------------------------------------------------------------------------
  void operator+=( const Vector& _v );

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief -= operator this-=v
  /// @param[in]  &_v vector to subtract
  //----------------------------------------------------------------------------------------------------------------------
  void operator-=( const Vector& _v  );

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief this * i for each element
  /// @param[in]  _i the scalar to mult by
  /// @returns Vector
  //----------------------------------------------------------------------------------------------------------------------
  Vector operator *( float _i )const;

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief + operator add vector+vector
  /// @param[in]  &_v the value to add
  /// @returns the vector + v
  //----------------------------------------------------------------------------------------------------------------------
  Vector operator+(const Vector &_v   )const;

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief divide vector components by a scalar
  /// @param[in] _v the scalar to divide by
  /// @returns a vector V(x/v,y/v,z/v,w)
  //----------------------------------------------------------------------------------------------------------------------
  Vector operator/(  float _v)const;

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief divide this vector components by a scalar
  /// @param[in] _v the scalar to divide by
  /// sets the vector to vector V(x/v,y/v,z/v,w)
  //----------------------------------------------------------------------------------------------------------------------
  void operator/=(  float _v  );

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief subtraction operator subtract vevtor-vector
  /// @param[in]  &_v the value to sub
  /// @returns this - v
  //----------------------------------------------------------------------------------------------------------------------
  Vector operator-(const Vector& _v )const;

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief * operator mult vevtor*vector
  /// @param[in]  _v the value to mult
  /// @returns new vector this*v
  //----------------------------------------------------------------------------------------------------------------------
  Vector operator*(const Vector &_v )const;

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief assignment operator set the current vector to rhs
  /// @param[in] _v the vector to set
  /// @returns a new vector
  //----------------------------------------------------------------------------------------------------------------------
  Vector &operator =( const Vector &_v );

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief negate the vector components
  //----------------------------------------------------------------------------------------------------------------------
  Vector operator-() const;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief check for equality uses FCompare (from Util.h) as float values
  /// @param[in] _v the vector to check against
  /// @returns true or false
  //----------------------------------------------------------------------------------------------------------------------
  bool operator==( const Vector &_v )const;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief not equal check
  /// @param[in] _v the vector to check against
  /// @returns true of false
  //----------------------------------------------------------------------------------------------------------------------
  bool operator!=( const Vector &_v  )const;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief \ operator div vector/vector
  /// @param[in]  _v the value to div by
  /// @returns Vector / Vector
  //----------------------------------------------------------------------------------------------------------------------
  Vector operator/(const Vector& _v )const;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief insertion operator to print out the vector
  /// @param[in] _output the stream to write to
  /// @param[in] _s the vector to write
  //----------------------------------------------------------------------------------------------------------------------
  friend std::ostream& operator<<(std::ostream& _output, const Vector& _s);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief extraction operator to read in  the vector
  /// @param[in] _input the stream read from
  /// @param[in] _s the vector to write
  //----------------------------------------------------------------------------------------------------------------------
  friend std::istream& operator>>(std::istream& _input, Vector &_s);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief insertion operator to print out the vector
  /// @param[in] _output the stream to write to
  /// @param[in] _s the vector to write
  //----------------------------------------------------------------------------------------------------------------------
  friend std::ostream& operator<<(std::ostream& _output, const Vector* _s);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief extraction operator to read in  the vector
  /// @param[in] _input the stream read from
  /// @param[in] _s the vector to write
  //----------------------------------------------------------------------------------------------------------------------
  friend std::istream& operator>>(std::istream& _input, Vector* _s);

public :



      float m_x=0.0f;
      float m_y=0.0f;
      float m_z=0.0f;
      float m_w=1.0f;


};



//----------------------------------------------------------------------------------------------------------------------
/// @brief scalar * vector operator
/// @param _k the float value
/// @param _v the vector value
/// @returns a vector _k*v
//----------------------------------------------------------------------------------------------------------------------
Vector operator *(float _k, const Vector &_v)
{
return Vector(_k*_v.m_x, _k*_v.m_y, _k*_v.m_z,_v.m_w);
}


#endif

//----------------------------------------------------------------------------------------------------------------------
