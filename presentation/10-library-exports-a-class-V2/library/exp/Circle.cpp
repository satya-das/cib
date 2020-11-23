#include "Circle.h"
#include "MethodTableCircle.h"

#include <functional>

extern "C" MethodTableCircle DLLIMPORT gMethodTableCircle;

Circle::Circle(CircleImpl* pCircleImpl)
  : pImpl(pCircleImpl)
{}

Circle::Circle(float r)
  : Circle(gMethodTableCircle.Create(r))
{}

Circle::Circle(float x, float y, float r)
  : Circle(gMethodTableCircle.numMethods < 8
            ? (throw std::bad_function_call(), nullptr)
            : gMethodTableCircle.Create2(x, y, r))
{}

Circle::Circle(const Circle& a)
  : Circle(gMethodTableCircle.Copy(a.pImpl))
{}

Circle::~Circle() {
  gMethodTableCircle.Delete(pImpl);
}

float Circle::Radius() const {
  return gMethodTableCircle.Radius(pImpl);
}

void Circle::SetRadius(float r) {
  return gMethodTableCircle.SetRadius(pImpl, r);
}

float Circle::Area() const {
  return gMethodTableCircle.Area(pImpl);
}

float Circle::Perimeter() const {
  if (gMethodTableCircle.numMethods < 8)
    throw std::bad_function_call();
  return gMethodTableCircle.Perimeter(pImpl);
}
