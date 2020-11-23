#pragma once



class Circle {
public:
  Circle(float r);
  Circle(float ox, float oy, float r);
  Circle(const Circle&) = default;
  virtual ~Circle() = default;

  float Radius() const;
  void SetRadius(float r);

  virtual float Perimeter() const;
  virtual float Area() const;

private:
  float mOx {0};
  float mOy {0};
  float mRadius;
};
