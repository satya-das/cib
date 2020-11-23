#pragma once
#include <stddef.h>

class ClientCtxImpl;


struct MethodTableClientCtx {
  const size_t numMethods;

  void (*DrawCircle) (ClientCtxImpl*, float);
};

class Context;
using ContextImpl = Context;

extern "C" struct MethodTableGenericCtx {
  const size_t numMethods;

  ContextImpl* (*Create) (ClientCtxImpl*, MethodTableClientCtx*);
  void         (*Delete) (ContextImpl*);
};
