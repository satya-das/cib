#pragma  once

#include "__zz_cib_internal/Circle-predef.h"

class Circle
{
public:
  Circle(Circle&& rhs);
public:
  Circle(float r);
  Circle(const Circle&);
  virtual ~Circle();
  float Radius() const;
  void SetRadius(float r);
  virtual float Area() const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(Circle, Circle);
};

#include "__zz_cib_internal/Circle-postdef.h"
