#include "MethodTableCircle.h"

#include "A.h"

static Circle* CreateCircle(float r) {
  return new Circle(r);
}

static void DeleteCircle(Circle* pCircle) {
  delete pCircle;
}

static void Draw(const Circle* pCircle, Context* pCtx) {
  pCircle->Draw(pCtx);
}



extern "C" {
  MethodTableCircle DLLEXPORT gMethodTableCircle = {
    3,
    &CreateCircle,
    &DeleteCircle,
    &Draw
  };
}
