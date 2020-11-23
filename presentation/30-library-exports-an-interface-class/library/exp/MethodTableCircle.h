#pragma once
#include <stddef.h>

class ContextImpl;
class CircleImpl;



extern "C" struct MethodTableCircle {
  const size_t numMethods;

  CircleImpl* (*Create) (float);
  void        (*Delete) (CircleImpl*);
  void        (*Draw)   (const CircleImpl*, ContextImpl*);
};
