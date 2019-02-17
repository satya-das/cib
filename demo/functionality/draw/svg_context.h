#pragma once

#include "context.h"

#include <fstream>
#include <string>

/*!
* Context for logging drawing calls rather than actually drawing anything.
*/
class SvgContext : public Graphics::Context
{
public:
  SvgContext(const std::string& svgPath);
  SvgContext();
  ~SvgContext();

public:
  void Line(double x1, double y1, double x2, double y2) override;
  void Rect(double l, double b, double r, double t) override;
  void Circle(double cx, double cy, double r) override;
  void Ellipse(double cx, double cy, double a, double b) override;

private:
  std::ofstream svgStm_;
  std::string svgPath_;
};
