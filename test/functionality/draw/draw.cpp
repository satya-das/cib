#include "svg_context.h"

#include "circ.h"
#include "ellipse.h"
#include "log_context.h"
#include "rect.h"

#include <memory>
#include <vector>
#include <string.h>

static void TestClientCallingLibraryFunctions();
static void TestLibraryCallingClientFunctions();

int main(int argc, char* argv[])
{
  if (argc == 1 || !strcmp(argv[1], "--test-1"))
    TestClientCallingLibraryFunctions();
  if (argc == 1 || !strcmp(argv[1], "--test-2"))
    TestLibraryCallingClientFunctions();

  return 0;
}

using ShapePtr = std::shared_ptr<Graphics::Shape>;
using Shapes   = std::vector<ShapePtr>;

static Shapes CreateVectorOfShapes()
{
  Shapes shapes;
  shapes.emplace_back(Graphics::Circle::CreateCircle(50, 50, 25));
  shapes.emplace_back(new Graphics::Rectangle(25, 25, 75, 75));
  shapes.emplace_back(new Graphics::Ellipse(50, 50, 50, 25));

  return shapes;
}

static void TestClientCallingLibraryFunctions()
{
  auto                 shapes = CreateVectorOfShapes();
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
  auto       shapes = CreateVectorOfShapes();
  SvgContext svgContext;
  for (auto shape : shapes)
  {
    shape->Draw(&svgContext);
  }
}
