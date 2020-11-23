#include "A.h"
#include "MethodTableCircle.h"
#include "MethodTableGenericCtx.h"

static void DrawCircle(Context* pCtx, float r) {
  return pCtx->DrawCircle(r);
}

static MethodTableClientCtx gMethodTableCtx = { 1, &DrawCircle };

///////////////////////////////////////////////////

Context::Context(ContextImpl* pCtxImpl)
  : pImpl(pCtxImpl)
{}

extern "C" MethodTableGenericCtx DLLIMPORT gMethodTableGenericCtx;

Context::Context()
  : Context(gMethodTableGenericCtx.Create(this, &gMethodTableCtx))
{}

Context::~Context() {
  gMethodTableGenericCtx.Delete(pImpl);
}

///////////////////////////////////////////////////

extern "C" MethodTableCircle DLLIMPORT gMethodTableCircle;

Circle::Circle(CircleImpl* pCircleImpl)
  : pImpl (pCircleImpl)
{}

Circle::Circle(float r)
  : Circle(gMethodTableCircle.Create(r))
{}

Circle::~Circle() {
  gMethodTableCircle.Delete(pImpl);
}

void Circle::Draw(Context* pCtx) const {
  return gMethodTableCircle.Draw(pImpl, pCtx->pImpl);
}
