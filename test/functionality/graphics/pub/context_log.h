#include "context.h"

#include <iostream>

namespace Graphics
{
/*!
 * Context for logging drawing calls rather than actually drawing anything.
 */
class GRAPHICSAPI LogContext : public Context
{
public:
  LogContext() {}
  ~LogContext() {}

public:
  void Line(float x1, float y1, float x2, float y2) override
  {
    std::cout << "Line(" << x1 << ", " << y1 << ", " << x2 << ", " << y2 << ")\n";
  }
  void Rect(float l, float b, float r, float t) override
  {
    std::cout << "Rect(" << l << ", " << b << ", " << r << ", " << t << ")\n";
  }
  void Circle(float cx, float cy, float r) override
  {
    std::cout << "Circle(" << cx << ", " << cy << ", " << r << ")\n";
  }
};
}
