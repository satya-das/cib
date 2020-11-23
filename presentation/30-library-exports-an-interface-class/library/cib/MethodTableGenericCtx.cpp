#include "MethodTableGenericCtx.h"

#include "A.h"

class ClientCtxImpl;

class GenericCtx : public Context {
public:
  GenericCtx(ClientCtxImpl* p,
             MethodTableClientCtx* m)
    : pImpl(p)
    , pMethodTable(m)
  {}

  void DrawCircle(float r) override {
    pMethodTable->DrawCircle(pImpl, r);
  }

private:
  ClientCtxImpl*        pImpl;
  MethodTableClientCtx* pMethodTable;
};

static Context* CreateGenericCtx(ClientCtxImpl* p, MethodTableClientCtx* m) {
  return new GenericCtx(p, m);
}

static void DeleteGenericCtx(Context* pGenericCtx) {
  delete pGenericCtx;
}


extern "C" {
  MethodTableGenericCtx DLLEXPORT gMethodTableGenericCtx = {
    2,
    &CreateGenericCtx,
    &DeleteGenericCtx
  };
}
