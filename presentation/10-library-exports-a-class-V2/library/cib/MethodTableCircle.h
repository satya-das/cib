#pragma once
#include <stddef.h>

class Circle;
using CircleImpl = Circle;

extern "C" struct MethodTableCircle {
  const size_t numMethods;

  CircleImpl* (*Create)     (float);
  CircleImpl* (*Copy)       (const CircleImpl*);
  void        (*Delete)     (CircleImpl*);
  float       (*Radius)     (const CircleImpl*);
  void        (*SetRadius)  (CircleImpl*, float);
  float       (*Area)       (const CircleImpl*);
  CircleImpl* (*Create2)    (float, float, float);
  float       (*Perimeter)  (const CircleImpl*);
};
