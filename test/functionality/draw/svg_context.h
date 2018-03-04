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
  void Line(float x1, float y1, float x2, float y2) override;
  void Rect(float l, float b, float r, float t) override;
  void Circle(float cx, float cy, float r) override;

private:
  std::ofstream svgStm_;
  std::string svgPath_;
};
