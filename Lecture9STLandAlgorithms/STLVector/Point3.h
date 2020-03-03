#ifndef POINT3_H_
#define POINT3_H_
#include <iostream>
#include <cassert>

class Point3
{
public :

	friend std::ostream& operator<<(
																	std::ostream& _output,
																	const Point3& _s
																 )
	{
	return _output<<"["<<_s.m_x<<","<<_s.m_y<<","<<_s.m_z<<"]";
	}

	inline Point3(float _x=0.0, float _y=0.0, float _z=0.0): m_x(_x),m_y(_y),m_z(_z){;}

	inline float& operator[]( int _i)
	{
		assert(_i >=0 || _i<=3);
		return (&m_x)[_i];
	}
	

	private :
		float m_x;
		float m_y;
		float m_z;


};

#endif
