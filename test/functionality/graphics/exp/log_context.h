#pragma  once
#include "context.h"
#include <iostream>

#include "__zz_cib_internal/log_context-predef.h"

namespace Graphics
{
  /*!
   * Context for logging drawing calls rather than actually drawing anything.
   */
  class LogContext : public ::Graphics::Context
  {
  public:
    LogContext(LogContext&& rhs);
  public:
    LogContext(const LogContext& );
    LogContext();
    ~LogContext();
    virtual void Line(double x1, double y1, double x2, double y2);
    virtual void Rect(double l, double b, double r, double t);
    virtual void Circle(double cx, double cy, double r);
    virtual void Ellipse(double cx, double cy, double a, double b);

  private:
    __ZZ_CIB_CLASS_INTERNAL_DEF(LogContext, Graphics::LogContext);
  };
}

#include "__zz_cib_internal/log_context-impl.h"
