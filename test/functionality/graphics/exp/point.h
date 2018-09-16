#pragma  once

#include "__zz_cib_internal/point_impl1.h"
class Point
{
public:
	Point(Point&& rhs);
public:
	Point(float x, float y);
	float X() const;
	void X(float x);
	float Y() const;
	void Y(float y);
	::Point operator +(const ::Point& p) const;
	::Point operator -(::Point p) const;

private:
	__ZZ_CIB_CLASS_INTERNAL_DEF(Point, ::Point);
};


#include "__zz_cib_internal/point_impl2.h"
