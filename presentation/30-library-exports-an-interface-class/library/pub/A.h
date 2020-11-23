#pragma once

class Context {
public:
  virtual ~Context() {}

  virtual void DrawCircle(float r) = 0;
};

class Circle {
public:
  Circle(float r) : mRadius(r) {}

  void Draw(Context* pCtx) const {
    pCtx->DrawCircle(mRadius);
  }

private:
  float mRadius;
};
