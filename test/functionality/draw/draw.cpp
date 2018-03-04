#include "svg_context.h"

#include "context_log.h"
#include "circ.h"
#include "rect.h"

#include <memory>
#include <vector>

using ShapePtr  = std::shared_ptr<Graphics::Shape>;
using Shapes    = std::vector<ShapePtr>;

Shapes CreateVectorOfShapes()
{
  Shapes shapes;
  shapes.emplace_back(new Graphics::Circle(0.0, 0.0, 5));
  shapes.emplace_back(new Graphics::Rectangle(0, 5, 5, 0));

  return shapes;
}

void TestCallingLibraryFunctions()
{
  auto shapes = CreateVectorOfShapes();
  Graphics::LogContext ctx;
  for (auto shape : shapes)
    shape->Draw(&ctx);
}

void TestLibraryCallingClientFunctions()
{
  auto shapes = CreateVectorOfShapes();
  SvgContext svgContext;
  for (auto shape : shapes)
    shape->Draw(&svgContext);
}

int main()
{
  TestCallingLibraryFunctions();
  TestLibraryCallingClientFunctions();
}
