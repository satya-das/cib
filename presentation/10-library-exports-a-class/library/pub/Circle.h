#pragma once


class Circle {
public:
  Circle(float r);
  Circle(const Circle&) = default;
  virtual ~Circle() = default;

  float Radius() const;
  void SetRadius(float r);

  virtual float Area() const;

private:
  float mRadius;
};
