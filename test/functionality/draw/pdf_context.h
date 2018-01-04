#pragma once

#include "context.h"

#include <iostream>

namespace Graphics
{
  /*!
  * Context for logging drawing calls rather than actually drawing anything.
  */
  class PdfContext : public Context
  {
  public:
    PdfContext() {}
    ~PdfContext() {}

  public:
    void Move(float x, float y) override
    {
      std::cout << "PdfMove(" << x << ", " << y << ")" << std::endl;
    }
    void Line(float x, float y) override
    {
      std::cout << "PdfLine(" << x << ", " << y << ")" << std::endl;
    }
    void Curve(float x1, float y1, float x2, float y2, float x3, float y3) override
    {
      std::cout << "PdfCurve(" << x1 << ", " << y1 << x2 << ", " << y2 << x3 << ", " << y3 << ")" << std::endl;
    }
    void Close() override
    {
      std::cout << "PdfClose()" << std::endl;
    }
  };
}
