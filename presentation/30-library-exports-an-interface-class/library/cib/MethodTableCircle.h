#pragma once
#include <stddef.h>

class Context;
class Circle;
using ContextImpl = Context;
using CircleImpl = Circle;

extern "C" struct MethodTableCircle {
  const size_t numMethods;

  CircleImpl* (*Create) (float);
  void        (*Delete) (CircleImpl*);
  void        (*Draw)   (const CircleImpl*, ContextImpl*);
};
