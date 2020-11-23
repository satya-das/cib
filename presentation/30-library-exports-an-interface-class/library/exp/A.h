#pragma once

class ContextImpl;

class Context {
public:
  virtual ~Context();

  virtual void DrawCircle(float r) = 0;

  ContextImpl* const pImpl;

protected:
  Context();

private:
  Context(ContextImpl* pCtxImpl);
};


class CircleImpl;

class Circle {
public:
  Circle(float r);
  ~Circle();

  void Draw(Context* pCtx) const;

private:
  Circle(CircleImpl* pCircleImpl);
  CircleImpl* pImpl;
};
