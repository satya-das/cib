#include "Circle.h"

Circle::Circle(float r)
  : mRadius(r)
{}

float Circle::Radius() const  {
  return mRadius;
}

void Circle::SetRadius(float r) {
  mRadius = r;
}

float Circle::Area  () const  {
  return 3.1416 * mRadius * mRadius;
}
