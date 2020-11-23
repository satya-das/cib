#include "MethodTableCircle.h"

#include "Circle.h"

static Circle* CreateCircle(float r) {
  return new Circle(r);
}

static Circle* CopyCircle(const Circle* pCircle) {
  return new Circle(*pCircle);
}

static void DeleteCircle(Circle* pCircle) {
  delete pCircle;
}

static float Radius(const Circle* pCircle) {
  return pCircle->Radius();
}

static void SetRadius(Circle* pCircle, float r) {
  pCircle->SetRadius(r);
}

static float Area(const Circle* pCircle) {
  return pCircle->Area();
}

extern "C" {
  MethodTableCircle DLLEXPORT gMethodTableCircle = {
    6,
    &CreateCircle,
    &CopyCircle,
    &DeleteCircle,
    &Radius,
    &SetRadius,
    &Area
  };
}
