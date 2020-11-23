#include "Circle.h"

Circle::Circle(float r)
  : mRadius(r)
{}

Circle::Circle(float ox, float oy, float r)
  : mOx(ox), mOy(oy), mRadius(r)
{}

float Circle::Radius() const  {
  return mRadius;
}

void Circle::SetRadius(float r) {
  mRadius = r;
}

float Circle::Perimeter() const  {
  return 2 * 3.1416 * mRadius;
}

float Circle::Area() const  {
  return 3.1416 * mRadius * mRadius;
}
