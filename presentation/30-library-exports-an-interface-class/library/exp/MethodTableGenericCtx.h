#pragma once
#include <stddef.h>

class Context;
using ClientCtxImpl = Context;

struct MethodTableClientCtx {
  const size_t numMethods;

  void (*DrawCircle) (ClientCtxImpl*, float);
};


class ContextImpl;

extern "C" struct MethodTableGenericCtx {
  const size_t numMethods;

  ContextImpl* (*Create) (ClientCtxImpl*, MethodTableClientCtx*);
  void         (*Delete) (ContextImpl*);
};
