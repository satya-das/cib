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

void SvgContext::Line(float x1, float y1, float x2, float y2)
{
  svgStm_ << "<line x1='" << x1 << "' y1='" << y1 << "' x2='" << x2 << "' y2='" << y2 << "' />\n";
}

void SvgContext::Rect(float l, float b, float r, float t)
{
  svgStm_ << "<rect x='" << l << "' y='" << b << "' width='" << r-l << "' height='" << t-b << "' stroke='black' fill='none' />\n";
}

void SvgContext::Circle(float cx, float cy, float r)
{
  svgStm_ << "<circle cx='" << cx << "' cy='" << cy << "' r='" << r << "' stroke='black' fill='none' />\n";
}
