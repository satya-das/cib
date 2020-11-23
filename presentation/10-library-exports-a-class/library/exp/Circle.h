#pragma once

class CircleImpl;

class Circle {
public:
  Circle(float r);
  Circle(const Circle&);
  virtual ~Circle();

  float Radius() const;
  void SetRadius(float r);

  virtual float Area() const;

private:
  Circle(CircleImpl* pCircleImpl);
  CircleImpl* pImpl;
};
