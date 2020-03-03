#ifndef VEC3_H_
#define VEC3_H_

constexpr float  EPSILON = 0.001f;
#define FCompare(a,b) \
    ( ((a)-EPSILON)<(b) && ((a)+EPSILON)>(b) )

class Vec3
{
  public :
    Vec3()=default;
    Vec3(const Vec3 &)=default;
    ~Vec3()=default;
    Vec3(float _x, float _y, float _z) :
      m_x{_x},m_y{_y},m_z{_z}{}
    Vec3(float _v) : m_x{_v},m_y{_v},m_z{_v}{}

    bool operator==( const Vec3 &_v )const;
    bool operator!=( const Vec3 &_v )const;

    Vec3 operator +(const Vec3 &_v )const ;
    Vec3 operator -(const Vec3 &_v )const ;
    Vec3& operator+=(const Vec3& _v );
    Vec3& operator-=( const Vec3& _v );
    Vec3 operator *( float  _i )const;
    Vec3 operator*( const Vec3 &_v  )const ;
    Vec3& operator*=( float _v ) ;
    Vec3& operator/=( float _v ) ;
    Vec3 operator/(float _v  )const ;
    Vec3 operator/(const Vec3 &_v) const;
    Vec3& operator/=(const Vec3 &_v) ;



  float m_x=0.0f;
  float m_y=0.0f;
  float m_z=0.0f;
};

inline Vec3 operator *(float _k, const Vec3 &_v)
{
  return Vec3(_k*_v.m_x, _k*_v.m_y, _k*_v.m_z);
}


#endif
