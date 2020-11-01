#pragma once

#include "example.h"

class B
{
public:
  void SetA(A* pA);
  A*   GetA() const;

private:
  A* a_{nullptr};
};
