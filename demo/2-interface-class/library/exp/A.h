#pragma  once

#include "__zz_cib_internal/A-predef.h"

class Context
{
public:
  Context(Context&& rhs);
public:
  virtual ~Context();
  virtual void DrawCircle(float r) = 0;
protected:
  Context();

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(Context, Context);
};

class Circle
{
public:
  Circle(Circle&& rhs);
public:
  Circle(const Circle&);
  ~Circle();
  Circle(float r);
  void Draw(Context* pCtx) const;

private:
  __ZZ_CIB_PROXY_CLASS_INTERNALS(Circle, Circle);
};

#include "__zz_cib_internal/A-postdef.h"
