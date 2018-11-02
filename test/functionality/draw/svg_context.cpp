#include "svg_context.h"

#include <cstdio>
#include <iostream>

SvgContext::SvgContext(const std::string& svgPath)
  : svgStm_(svgPath, std::ios_base::out)
  , svgPath_(svgPath)
{
  svgStm_ << "<svg version='1.1' baseProfile='full' width='100' height='100' xmlns = 'http://www.w3.org/2000/svg'>\n";                  
}

SvgContext::SvgContext()
  : SvgContext(std::string(std::tmpnam(nullptr)) + ".svg")
{
}

SvgContext::~SvgContext()
{
  svgStm_ << "</svg>\n";
  svgStm_.close();
  std::cout << "Created SVG file " << svgPath_ << "\n";
}

void SvgContext::Line(double x1, double y1, double x2, double y2)
{
  svgStm_ << "<line x1='" << x1 << "' y1='" << y1 << "' x2='" << x2 << "' y2='" << y2 << "' />\n";
}

void SvgContext::Rect(double l, double b, double r, double t)
{
  svgStm_ << "<rect x='" << l << "' y='" << b << "' width='" << r-l << "' height='" << t-b << "' stroke='red' fill='none' />\n";
}

void SvgContext::Circle(double cx, double cy, double r)
{
  svgStm_ << "<circle cx='" << cx << "' cy='" << cy << "' r='" << r << "' stroke='blue' fill='none' />\n";
}

void SvgContext::Ellipse(double cx, double cy, double a, double b)
{
  svgStm_ << "<ellipse cx='" << cx << "' cy='" << cy << "' rx='" << a << "' ry='" << b << "' stroke='green' fill='none' />\n";
}
