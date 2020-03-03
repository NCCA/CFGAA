#ifndef VEC3_H_
#define VEC3_H_
#include <iosfwd>
#include <array>
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
    bool  operator==( const Vec3 &_v )const;
    bool  operator!=( const Vec3 &_v )const;
    Vec3  operator +(const Vec3 &_v )const ;
    Vec3  operator -(const Vec3 &_v )const ;
    Vec3& operator+=(const Vec3& _v );
    Vec3& operator-=( const Vec3& _v );
    Vec3  operator *( float  _i )const;
    Vec3  operator*( const Vec3 &_v  )const ;
    Vec3& operator*=( float _v ) ;
    Vec3& operator/=( float _v ) ;
    Vec3  operator/(float _v  )const ;
    Vec3 operator/(const Vec3 &_v) const;
    Vec3& operator/=(const Vec3 &_v) ;
    float& operator[]( size_t _i);
    Vec3 operator-();

    friend std::ostream& operator<<(std::ostream& _output, const Vec3& _s);
    friend std::istream& operator>>(std::istream& _input, Vec3 &_s);
#pragma pack(push,1)
    union
     {
       struct
       {
        float m_x;
        float m_y;
        float m_z;
       };
       std::array<float,3> m_openGL={0.0f,0.0f,0.0f};
      };
#pragma pack(pop)
};



inline Vec3 operator *(float _k, const Vec3 &_v)
{
  return Vec3(_k*_v.m_x, _k*_v.m_y, _k*_v.m_z);
}


#endif
