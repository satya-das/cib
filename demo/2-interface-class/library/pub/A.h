#pragma once

class EXAMPLE_API Context {
public:
  virtual ~Context() {}

  virtual void DrawCircle(float r) = 0;
};

class EXAMPLE_API Circle {
public:
  Circle(float r) : mRadius(r) {}

  void Draw(Context* pCtx) const;

private:
  float mRadius;
};
