#pragma once


class EXAMPLE_API Circle {
public:
  Circle(float r);
  Circle(const Circle&) = default;
  virtual ~Circle() = default;

  float Radius() const {
    return mRadius;
  }
  void SetRadius(float r);

  virtual float Area() const {
    return 3.1416 * mRadius * mRadius;
  }

private:
  float mRadius;
};
