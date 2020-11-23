#pragma once

class CircleImpl;

class Circle {
public:
  Circle(float r);
  Circle(float ox, float oy, float r);
  Circle(const Circle&);
  virtual ~Circle();

  float Radius() const;
  void SetRadius(float r);

  virtual float Perimeter() const;
  virtual float Area() const;

private:
  Circle(CircleImpl* pCircleImpl);
  CircleImpl* pImpl;
};
