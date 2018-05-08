#include "svg_context.h"

#include "log_context.h"
#include "circ.h"
#include "rect.h"

#include <memory>
#include <vector>

static void TestCallingLibraryFunctions();

int main()
{
  TestCallingLibraryFunctions();

  return 0;
}

using ShapePtr  = std::shared_ptr<Graphics::Shape>;
using Shapes    = std::vector<ShapePtr>;

static Shapes CreateVectorOfShapes()
{
  Shapes shapes;
  shapes.emplace_back(Graphics::Circle::CreateCircle(50, 50, 25));
  shapes.emplace_back(new Graphics::Rectangle(25, 25, 75, 75));

  return shapes;
}

static void TestCallingLibraryFunctions()
{
  auto shapes = CreateVectorOfShapes();
  Graphics::LogContext ctx;
  for (auto shape : shapes)
  {
    shape->Draw(&ctx);
    std::cout << "Area = " << shape->Area() << ".\n";
    std::cout << "Perimeter = " << shape->Perimeter() << ".\n";
    std::cout << std::endl;
  }
}

static void TestLibraryCallingClientFunctions()
{
  auto shapes = CreateVectorOfShapes();
  SvgContext svgContext;
  for (auto shape : shapes)
    shape->Draw(&svgContext);
}
